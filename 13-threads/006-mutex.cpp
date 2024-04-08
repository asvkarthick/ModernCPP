#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

std::vector<int> gVector;
std::mutex gMutex;

void threadFn(int size)
{
    for (int i = 0; i < size; i++) {
        std::lock_guard<std::mutex> mtx(gMutex);
	gVector.push_back(i);
    }
}

int main(void)
{
    std::thread t1{threadFn, 10000};
    std::thread t2{threadFn, 10000};

    t1.join();
    t2.join();
    std::cout << "Vector size = " << gVector.size() << std::endl;

    return 0;
}

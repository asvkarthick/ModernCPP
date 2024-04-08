#include <iostream>
#include <unordered_map>
#include <thread>
#include <mutex>
#include <string>

constexpr int SIZE = 1000000;
std::unordered_map<int, int> m;
std::mutex gMutex;

void threadFn(int id, int start)
{
    std::cout << "Thread " << id << " started" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::lock_guard<std::mutex> lock(gMutex);
	auto it = m.find(i);
	if (it != m.end()) {
            if (m[i] == start) {
                std::cout << "Duplicate entry @ " << i << std::endl;
	    }
	    m.erase(i);
	} else {
            m[i] = start;
	}
	start = !start;
    }
    std::cout << "Thread " << id << " completed" << std::endl;
}

int main(void)
{
    std::thread t1{threadFn, 1, 1};
    std::thread t2{threadFn, 2, 0};

    t1.join();
    t2.join();

    return 0;
}

#include <iostream>
#include <unordered_map>
#include <thread>
#include <mutex>
#include <string>

constexpr int SIZE = 1000000;
std::unordered_map<int, int> m1;
std::unordered_map<int, int> m2;
std::mutex gMutex;

void threadFn(std::unordered_map<int, int>& m, int id, int start)
{
    std::cout << "Thread " << id << " started" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::lock_guard<std::mutex> lock(gMutex);
	m[i] = start;
	start = !start;
    }
    std::cout << "Thread " << id << " completed" << std::endl;
}

void check()
{
    for (int i = 0; i < SIZE; i++) {
        if (m1[i] == m2[i]) {
            std::cout << "Duplicate entry " << m1[i] << " : " << m2[i] << std::endl;
	}
    }
}

int main(void)
{
    std::thread t1{threadFn, std::ref(m1), 1, 1};
    std::thread t2{threadFn, std::ref(m2), 2, 0};

    t1.join();
    t2.join();

    check();

    return 0;
}

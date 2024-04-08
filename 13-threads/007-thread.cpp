#include <iostream>
#include <thread>
#include <chrono>

void threadFn()
{
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main(void)
{
    std::thread t{threadFn};
    std::cout << "Thread ID : " << t.get_id() << std::endl;
    int cores = std::thread::hardware_concurrency();
    std::cout << "Number of cores : " << cores << std::endl;
    std::cout << "Main thread ID : " << std::this_thread::get_id() << std::endl;

    t.join();
    return 0;
}

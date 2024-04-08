#include <iostream>
#include <thread>
#include <chrono>

void threadFn()
{
    std::cout << "Thread processing started" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Thread processing completed" << std::endl;
}

int main(void)
{
    std::cout << "Start of main and creating thread" << std::endl;
    std::thread t{threadFn};
    std::cout << "End of main" << std::endl;

    // Wait for the thread to complete
    t.join();
}
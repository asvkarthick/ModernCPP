#include <iostream>
#include <thread>
#include <future>
#include <vector>
#include <chrono>

int process(const std::vector<int>& v)
{
    int sum = 0;
    std::cout << "Thread processing started" << std::endl;
    for (auto& x : v) {
        sum += x;
	std::cout << "." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "Thread processing completed" << std::endl;

    return sum;
}

int main(void)
{
    std::vector<int> v{1, 2, 3, 4, 5};
    std::future<int> result = std::async(std::launch::deferred, process, v);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Main thread continued" << std::endl;

    if (result.valid()) {
        auto sum = result.get();
	std::cout << "Sum = " << sum << std::endl;
    }

    return 0;
}

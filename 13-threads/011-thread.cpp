#include <iostream>
#include <thread>
#include <future>
#include <vector>
#include <chrono>

int process(const std::vector<int>& v, std::promise<int> & data)
{
    int sum = 0;
    std::cout << "Thread waiting for the future" << std::endl;
    auto f = data.get_future();
    int sec = f.get();
    std::this_thread::sleep_for(std::chrono::seconds(sec));
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
    std::promise<int> data;
    std::future<int> result = std::async(std::launch::async, process, v, std::ref(data));
    std::cout << "Main thread started" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    data.set_value(1);
    if (result.valid()) {
        auto sum = result.get();
	std::cout << "Sum = " << sum << std::endl;
    }

    return 0;
}

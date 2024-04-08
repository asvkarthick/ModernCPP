#include <iostream>
#include <thread>
#include <future>
#include <vector>

int add(int x, int y)
{
    return x + y;
}

int processThread(const std::vector<int>& v)
{
    int sum = 0;
    std::cout << "Thread processing started" << std::endl;
    for (auto& x : v) {
        sum += x;
	std::cout << ".\n";
	std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << std::endl;

    return sum;
}

int main(void)
{
    std::packaged_task<int(int, int)> task{add};
    std::future<int> f = task.get_future();

    task(6, 3);

    auto result = f.get();
    std::cout << "Result = " << result << std::endl;

    std::vector<int> v{1, 2, 3, 4, 5};
    std::packaged_task<int(const std::vector<int>&)> taskV{processThread};
    std::future<int> fv = taskV.get_future();
    std::thread t{std::move(taskV), v};

    std::cout << "Vector sum started processing" << std::endl;
    result = fv.get();
    std::cout << "Vector sum = " << result << std::endl;
    t.join();

    return 0;
}

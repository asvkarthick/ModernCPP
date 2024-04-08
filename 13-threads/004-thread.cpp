#include <iostream>
#include <thread>
#include <future>

int add(int x, int y)
{
    return x + y;
}

int main(void)
{
    std::packaged_task<int(int, int)> task{add};
    std::future<int> f = task.get_future();

    task(6, 3);

    auto result = f.get();
    std::cout << "Result = " << result << std::endl;

    return 0;
}

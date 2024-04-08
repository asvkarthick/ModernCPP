#include <iostream>
#include <chrono>
#include <string_view>
#include <vector>
#include <random>
#include <execution>

class Timer
{
    std::chrono::steady_clock::time_point m_start;
public:
    Timer(): m_start(std::chrono::steady_clock::now()) {}

    void showResult(std::string_view message = "")
    {
        auto end = std::chrono::steady_clock::now();
	auto difference = end - m_start;
	std::cout << message
		<< " : "
		<< std::chrono::duration_cast<std::chrono::milliseconds>(difference).count()
		<< std::endl;
    }
};

constexpr unsigned VEC_SIZE{1000000};
std::vector<long> CreateVector()
{
    std::vector<long> vec;
    vec.reserve(VEC_SIZE);
    std::default_random_engine engine{std::random_device{}()};
    std::uniform_int_distribution<long> dist{0, VEC_SIZE};
    for (unsigned i = 0; i < VEC_SIZE; i++)
    {
        vec.push_back(dist(engine));
    }
    return vec;
}

int main(void)
{
    auto dataset = CreateVector();
    Timer t;
    std::sort(dataset.begin(), dataset.end());
    t.showResult("Sorting Time");

    auto dataset2 = CreateVector();
    Timer t2;
    std::sort(std::execution::par, dataset2.begin(), dataset2.end());
    t2.showResult("Sorting Time Parallel");

    return 0;
}

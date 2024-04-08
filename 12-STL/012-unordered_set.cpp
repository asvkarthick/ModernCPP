#include <iostream>
#include <string>
#include <unordered_set>

int main(void)
{
    std::unordered_set<std::string> s;
    s.insert("Karthick");
    s.insert("Kumaran");
    s.insert("ASV");
    s.insert("Artificial Intelligence");
    s.insert("Generative AI");

    std::cout << "Bucket count : " << s.bucket_count() << std::endl;
    std::cout << "Number of elements : " << s.size() << std::endl;
    std::cout << "Load factor : " << s.load_factor() << std::endl;

    for (auto &c : s) {
        std::cout << "Bucket # " << s.bucket(c) << " " << c << std::endl;
    }

    return 0;
}

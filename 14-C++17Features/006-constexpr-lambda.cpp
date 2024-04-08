#include <iostream>
#include <string>
#include <sstream>

class Lambda
{
public:
    auto returnLambda()
    {
        return [*this](const std::string &str)
	{
            std::ostringstream ost;
	    ost << str << std::endl;
	    ost << "KK" << std::endl;
	    return ost.str();
	};
    }
};

int main(void)
{
    Lambda *l = new Lambda;
    auto ld = l->returnLambda();
    delete l;
    std::cout << ld("ASV") << std::endl;

    return 0;
}

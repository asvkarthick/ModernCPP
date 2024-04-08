#include <iostream>
#include <sstream>

int main(void)
{
   int age = 20, id = 1;
   std::stringstream ss;
   ss << "Student age : " << age << " ID : " << id << std::endl;
   std::string s = ss.str();

   std::cout << s << std::endl;

   return 0;
}

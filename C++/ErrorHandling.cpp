#include <iostream>
#include <vector>
#include <string>
class Test{
    std::string test;
    public:
    Test(std::string input):test(input){std::cout<<"\nConstructed ";};
    ~Test()
    {
        std::cout<<"\nDestruted\n";
    }

};

int main()
{
    Test myTest("Anand");
    try
    {
        std::vector<int> v;
        v.push_back(1);

        v.at(99);
    }
    catch(const std::out_of_range& e)
    {
        std::cerr <<"Out of range " <<e.what() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    


}
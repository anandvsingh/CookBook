#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int> v , v2;
    for (int i=0;i<10;i++)
        v.push_back(i);
    std::for_each(v.begin(),v.end(),[](int i){std::cout<<i<<std::endl;});
    std::transform(v.begin(),v.end(),std::back_inserter(v2),[](int i) -> int{ return i*i*i;}); //Lambdas are capable of auto return type deduction but in case this is how to specify 
    std::for_each(v2.begin(),v2.end(),[](int i){std::cout<<i<<std::endl;});
    v.clear();
    int i = 5;
    std::generate_n(std::back_inserter(v), 10 , [&](){return i++;});
    std::for_each(v.begin(),v.end(),[](int i){std::cout<<i<<std::endl;});
    return 0;

}
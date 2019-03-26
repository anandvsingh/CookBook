#include <iostream>

using namespace std;

template <class T1, class T2>
float sum (T1 x, T2 y)
{
    return x+y;
}

int main()
{
    cout<< "Int Sum "<< sum(2,3)<<endl;
    cout<< "float Sum "<< sum(2.3,3.2)<<endl;
    cout<< "Int, float Sum "<< sum(2,3.4)<<endl;
    cout<< "flaot,int Sum "<< sum(2.6,3)<<endl;
    return 0;
}
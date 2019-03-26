#include <iostream>

using namespace std;
template <class T>
T sum (T x, T y)
{
    return x+y;
}

int main()
{
    cout<<"\nInt sum "<<sum(5,9);
    cout<<"\nFloat sum "<<sum(11.2,5.6)<<endl;
    return 0;
}
#include <iostream>

using namespace std;

template <class T1, class T2>
class helloWorld{
    T1 a;
    T2 b;
    public:
    helloWorld()
    {
        cout<<"Size of a: "<<sizeof(a)<<endl;
        cout<<"Size of b: "<<sizeof(b)<<endl;
    }
    void getVal();
    float sum();

};
template <class T1, class T2>
void helloWorld<T1,T2>::getVal()
{
    cin>>a>>b;
}
template <class T1, class T2>
float helloWorld<T1,T2>::sum()
{
    return a+b;
}

int main()
{
    helloWorld <int,float> W1;
    W1.getVal();
    cout<<endl<<W1.sum();
    return 0;
}

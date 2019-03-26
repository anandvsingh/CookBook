#include <iostream>

using namespace std;

template <class T>
T sum(T arr[],int n)
{
    T sum=0;
    for (int i =0; i <n;i++)
        sum+=arr[i];
    return sum;
}

int main()
{
    int arrint[] = {1,2,3,4,5,6,7,8,9,10,11};
    float arrFloat[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1,11.11,12.12};
    cout<<"\n Int sum "<<sum(arrint,11)<<endl;
    cout<<"\n Float sum "<<sum(arrFloat,12)<<endl;
    return 0;
}

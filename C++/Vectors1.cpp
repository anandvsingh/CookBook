#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v1;
    for (int i=0;i<5;i++)
        v1.push_back(i);
    cout<<endl;
    for (int i=0;i<5;i++)
        cout<<v1[i];
    cout<<endl;
    cout<<v1.size();
    cout<<endl;
    v1.pop_back();
    for (int i=0;i<5;i++)
        cout<<v1[i];
    cout<<endl; 
    cout<<v1.size();
    cout<<endl;
    for (int i:v1)
    {
        cout<<i;
    }
    return 0;
}
#include <iostream>
#include <map>

using namespace std;

int main()
{
    //map <data_type,data_type> mp;

    //The first is key, and cannot be duplicated, and value can be duplicates. Maps are always stored in sorted keys
    // If you give two inserts to the same key, the values are overwritten and last value is maintained
    map <string, int> mp;

    mp["Espresso"] = 25;
    mp["Tea"] = 5;
    mp["Herbal Tea"] = 20;
    if (mp.find("Cold Coffee")!=mp.end())
        cout<<"Found"<<endl;
    else
        cout<<" Not Found"<<endl;

    mp.insert(make_pair("Cold Coffe",35));

    map <string,int> :: iterator it = mp.begin();
    for (it;it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    for (auto val :mp)
    {
        cout<<val.first<<" "<<val.second;
    }
    /*
    Erasing multiple values
    Using iterator
        point the iterator at the element to be deleted
        mp.erase(it)
    Using key
        mp.erase("Key") // Double qoutes only if key is a string

    */

   // Can use functions lower_bound and upper_bound in map to get values in a range, since maps and multimaps are sorted
    return 0;
}
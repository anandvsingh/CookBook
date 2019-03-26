#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vector <int> vec (3,0);   Creates a 3 element vector and makes all of them zero
    // vec.front();  returns first element
    // vec.back(); returns back element
    // vec.at(index);  returns the value at that Index in the array

    // Creating Iterator
    // vector <data_type> :: iterator iterator_name
    // vector <data_type> :: reverse_iterator iterator_name
    // vec.begin() // returns loaction of vector start which can then be passed on to an itereator
    // vec.rbegin() //points to the last block in the vectro and is used for reverse iterator
    // vec.end() // points to one Null Block after the vector
    // cout<<*iterator_name // Prints out the value of that element in the vector where the iterator points
    // iterator_name++ works to point at the next element if the iterator is a reverse iterator, it points to the previos element
    // vec.empty() returs 0 if vector is **not** empty
    // vec.insert(index, value) // to insert anywhere in a vector // Here index should be in the form of iterator
    // E.g to insert at second position, get the iterator at the begining and use vec.insert(it+2,val)
    //Looping using iterator
    // for(it;it!=vec.end();it++)

    return 0;
}
#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <string> lst;
    for (int i=0;i<5;i++)
        lst.push_back("Hello");
    for (string v:lst)
        cout<<v<<endl;
     //list acts as a doubly linked list
    // list <data_type> :: iterartor iterator_name
    // lst.push_back() and lst.push_front() 
    //list <int> lst (3,0);   Creates a 3 element list and makes all of them zero
    // lst.front();  returns first element
    // lst.back(); returns back element
    // lst.at(index);  returns the value at that Index in the array
    // lst.push_front() and lst.pop_front()
    // Creating Iterator

    // list <data_type> :: iterator iterator_name
    // list <data_type> :: reverse_iterator iterator_name
    // lst.begin() // returns loaction of list start which can then be passed on to an itereator
    // lst.rbegin() //points to the last block in the lsttro and is used for reverse iterator
    // lst.end() // points to one Null Block after the list
    // cout<<*iterator_name // Prints out the value of that element in the list where the iterator points
    // iterator_name++ works to point at the next element if the iterator is a reverse iterator, it points to the previos element
    // lst.empty() returs 0 if list is **not** empty
    // lst.insert(index, value) // to insert anywhere in a list // Here index should be in the form of iterator
    // E.g to insert at second position, get the iterator at the begining and use lst.insert(it+2,val)


    //Looping using iterator
    // for(it;it!=lst.end();it++)


    // use the keyword auto to skip <stl_type> <dataType> :: iterator
}
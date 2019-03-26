sort(first_iterator, last_iterator) – To sort the given vector.
reverse(first_iterator, last_iterator) – To reverse a vector.
*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements 

count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
find(first_iterator, last_iterator, x) – Points to last address of vector ((name_of_vector).end()) if element is not present in vector. 

binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.
lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’. 

arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.
arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line. 

next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation. 

distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.This function is very useful while finding the index. 

all_of()
This function operates on whole range of array elements and can save time to run a loop to check each elements one by one. It checks for a given property on every element and returns true when each element in range satisfies specified property, else returns false.
// C++ code to demonstrate working of all_of() 
#include<iostream> 
#include<algorithm> // for all_of() 
using namespace std; 
int main() 
{ 
    // Initializing array 
    int ar[6] =  {1, 2, 3, 4, 5, -6}; 
  
    // Checking if all elements are positive 
    all_of(ar, ar+6, [](int x) { return x>0; })? 
          cout << "All are positive elements" : 
          cout << "All are not positive elements"; 
  
    return 0; 
  
} 
Run on IDE
Output:
All are not positive elements
In the above code, -6 being a negative element negates the condition and returns false.



any_of()
This function checks for a given range if there’s even one element satisfying a given property mentioned in function. Returns true if at least one element satisfies the property else returns false.
// C++ code to demonstrate working of any_of() 
#include<iostream> 
#include<algorithm> // for any_of() 
using namespace std; 
int main() 
{ 
    // Initializing array 
    int ar[6] =  {1, 2, 3, 4, 5, -6}; 
  
    // Checking if any element is negative 
    any_of(ar, ar+6, [](int x){ return x<0; })? 
          cout << "There exists a negative element" : 
          cout << "All are positive elements"; 
  
    return 0; 
  
} 
Run on IDE
Output:
There exists a negative element
In above code, -6 makes the condition positive.

none_of()
This function returns true if none of elements satisfies the given condition else returns false.
// C++ code to demonstrate working of none_of() 
#include<iostream> 
#include<algorithm> // for none_of() 
using namespace std; 
int main() 
{ 
    // Initializing array 
    int ar[6] =  {1, 2, 3, 4, 5, 6}; 
  
    // Checking if no element is negative 
    none_of(ar, ar+6, [](int x){ return x<0; })? 
          cout << "No negative elements" : 
          cout << "There are negative elements"; 
  
    return 0; 
} 
Run on IDE
Output:
No negative 



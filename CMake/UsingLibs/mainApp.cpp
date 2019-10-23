#include "student.h"
#include <iostream>

int main()
{
    Student s1(15,"Piyush");
    std::cout <<"Studnet info "<< s1.getRoll() <<"Name "<<s1.getName()<<std::endl;
    return 0;
}
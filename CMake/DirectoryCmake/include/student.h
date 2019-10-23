#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student
{
    int roll;
    std::string name;
    public:
    Student (int _roll,std::string _name): roll(_roll),name(_name){};
    std::string getName();
    int getRoll();
};
#endif
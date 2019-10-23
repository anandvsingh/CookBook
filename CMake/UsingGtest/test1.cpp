#include <iostream>
#include <gtest/gtest.h>
using namespace std;

int cubic(int i){return i*i*i;}

int main()
{
    std::cout<<"Who cares";
}

TEST(testMath, myCubeTest)
{
    ASSERT_EQ(10000, cubic(10));	
}
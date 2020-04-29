//
#include<stddef.h>
#include<cstddef>
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
//Rule of 3, taking the role of memory management we have to take a lot of overhead
class Vector
{
public:
    Vector(size_t sz);
    Vector(const Vector& v);//copy constructor-RULE OF 3 - c++98
    Vector& operator=(const Vector& v);//copy assignment-RULE OF 3 -c++98
    Vector(Vector&& v); //move constructor - RULE OF 5 C++ 11
    Vector& operator=(Vector&& v);//move assignment - RULE OF 5 C++11
    size_t Size()const { return size; }
    int& operator[](int i) { return nums[i]; }
    int& operator[](int i) const { return nums[i]; }
    void Reserve(size_t new_allocation);
    size_t Capacity()const { return space; }
    void Resize(size_t new_size);
    void Push_Back(int value);
    ~Vector();//destructor-RULE OF 3
private:
    size_t size; //tracks space ready to use
    size_t space{0}; //tracks reserved space
    
    //handling these two for the user
    const int RESERVE_DEFAULT_SIZE{ 8 }; //initial reserve default size
    const int RESERVE_SIZE_MULTIPLIER{ 2 }; //size multiplier
    int* nums;
};

#endif

void use_vector();
Vector get_vector();

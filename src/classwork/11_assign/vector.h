//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
//Rule of 3, taking the role of memory management we have to take a lot of overhead
class Vector
{
public:
    Vector(size_t sz);
    Vector(const Vector& v); //copy constructor
    size_t Size()const { return size; }
    int& operator[] (int i){ return nums[i]; }
    int& operator[] (int i) const { return nums[i]; }

private:
    size_t size;
    int* nums;
};
#endif

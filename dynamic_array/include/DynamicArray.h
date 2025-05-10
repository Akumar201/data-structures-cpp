#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <cstddef>

template <typename T> 
class DynamicArray {
private:
    T* data ;
    size_t capacity ;
    size_t length ;
    void resize(size_t new_capacity) ;

public:
    DynamicArray();
    ~DynamicArray();

    void push_back(const T& value);
    void pop_back();
    T& operator[](size_t index);
    const T& operator[](size_t index) const;
    size_t size() const;
    size_t get_capacity() const;
    bool is_empty() const;

} ;

#include "../src/DynamicArray.tpp"
#endif
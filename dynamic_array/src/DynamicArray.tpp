#include <stdexcept>

template <typename T>
DynamicArray<T>::DynamicArray() : data(new T[1]), capacity(1), length(0) {}

template <typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] data;
}

template <typename T>
void DynamicArray<T>::resize(size_t new_capacity) {
    T* new_data = new T[new_capacity];
    for (size_t i = 0; i < length; ++i) {
        new_data[i] = data[i];
    }
    delete[] data;
    data = new_data;
    capacity = new_capacity;
}

template <typename T>
void DynamicArray<T>::push_back(const T& value) {
    if (length == capacity) {
        resize(capacity * 2);
    }
    data[length++] = value;
}

template <typename T>
void DynamicArray<T>::pop_back() {
    if (length > 0) {
        --length;
    }
}

template <typename T>
T& DynamicArray<T>::operator[](size_t index) {
    if (index >= length) throw std::out_of_range("Index out of bounds");
    return data[index];
}

template <typename T>
const T& DynamicArray<T>::operator[](size_t index) const {
    if (index >= length) throw std::out_of_range("Index out of bounds");
    return data[index];
}

template <typename T>
size_t DynamicArray<T>::size() const {
    return length;
}

template <typename T>
size_t DynamicArray<T>::get_capacity() const {
    return capacity;
}

template <typename T>
bool DynamicArray<T>::is_empty() const {
    return length == 0;
}

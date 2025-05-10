#include <iostream>
#include "include/DynamicArray.h"

int main() {
    DynamicArray<int> arr;
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(15);

    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\nAfter pop:\n";
    arr.pop_back();

    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

#include <iostream>

void swap(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a = 5, b = 8;
    std::cout << a << ' ' << b << std::endl;
    swap(&a, &b);
    std::cout << a << ' ' << b << std::endl;
}
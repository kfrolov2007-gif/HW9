#include <iostream>

void swap(int& a, int& b) {
    b = a + b;
    a = b - a;
    b = b - a;

}

void reverse(int* a, int n) {
    for (int i = 0; i < n/2 ; i++) {
        swap(a[i], a[n-1-i]);
    }
}

void print(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int a[11] = {1,2,3,4,5,6,7,8,9,10, 11};
    int b[10] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "a: ";
    print(a, 11);
    std::cout << "b: ";
    print(b, 10);


    reverse(a, 11);
    reverse(b, 10);

    std::cout << "reversed a: ";
    print(a, 11);
    std::cout << "reversed b: ";
    print(b, 10);

}
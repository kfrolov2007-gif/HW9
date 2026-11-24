#include<iostream>

void print(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[7] = {4, 5, 6, 6, 7, 2, 0};
    int c[5] = {1, 11, 5, 8, 9};

    print(a, 10);
    print(b, 7);
    print(c, 5);
}
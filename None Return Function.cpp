#include <iostream>
using namespace std;

void test(int asign[], int size) {
    for (int i = 0; i < size; ++i) {
        asign[i] *= 2;
    }
}

int main() {
    int a[] = {5, 6, 8};
    int size = sizeof(a) / sizeof(a[0]); 
    cout << a[0]; 
    test(a, size);
    cout << a[0]; 
    return 0;
}

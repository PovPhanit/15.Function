#include <iostream>
using namespace std;

int* test(int asign[], int size) {
    for (int i = 0; i < size; ++i) {
        asign[i] *= 2;
    }
    return asign;
}
int main() {
    int a[] = {5, 6, 8};
    int size = sizeof(a) / sizeof(a[0]);
    int* modifiedArray = test(a , size);
    cout << a[0];
    cout<<modifiedArray[1];
    return 0;
}

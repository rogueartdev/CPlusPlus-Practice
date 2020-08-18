#include <iostream>
using namespace std;

int fibonacci(int n) {
    int first = 1, second = 1, third = first + second;
    while (first+second < n) {
        first = second;
        second = third;
        third = first+second;
    }
    return second;
}

int main() {
    int x = fibonacci(100000);
    cout << x;
    return 0;
}
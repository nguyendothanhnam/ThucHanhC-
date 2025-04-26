#include <iostream>
using namespace std;

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Day Fibonacci tu F1 den F" << n << " la: ";
    for (int i = 1; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    cout << "So Fibonacci thu " << n << " la: " << fibonacci(n) << endl;

    return 0;
}
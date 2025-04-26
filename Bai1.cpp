#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    if (n <= 2) {
        cout << "Khong co so nguyen to" << endl;
    } else {
        cout << "Cac so nguyen to nho hon " << n << " la: ";
        for (int i = 2; i < n; i++) {
            if (isPrime(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
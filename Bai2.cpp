#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxDivisibleBy3 = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0 && arr[i] > maxDivisibleBy3) {
            maxDivisibleBy3 = arr[i];
        }
    }

    if (maxDivisibleBy3 != -1) {
        cout << "So lon nhat chia het cho 3 la: " << maxDivisibleBy3 << endl;
    } else {
        cout << "Khong co so nao trong mang chia het cho 3." << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <set>

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    set<int> uniqueValues(arr.begin(), arr.end());

    cout << "So luong cac gia tri phan biet khac nhau trong mang: " << uniqueValues.size() << std::endl;

    return 0;
}
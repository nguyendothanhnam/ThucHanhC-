#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct SinhVien {
    string ten;
    float diemToan;
    float diemLy;
    float diemHoa;
    float diemTB;
};

void nhapDanhSach(vector<SinhVien>& danhSach, int n) {
    for (int i = 0; i < n; ++i) {
        SinhVien sv;
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
        cout << "Ten: ";
        cin.ignore();
        getline(cin, sv.ten);
        cout << "Diem Toan: ";
        cin >> sv.diemToan;
        cout << "Diem Ly: ";
        cin >> sv.diemLy;
        cout << "Diem Hoa: ";
        cin >> sv.diemHoa;
        sv.diemTB = (sv.diemToan + sv.diemLy + sv.diemHoa) / 3;
        danhSach.push_back(sv);
    }
}

void inDanhSach(const vector<SinhVien>& danhSach) {
    cout << "\nDanh sach sinh vien co diem trung binh >= 5:\n";
    for (const auto& sv : danhSach) {
        if (sv.diemTB >= 5) {
            cout << "Ten: " << sv.ten << ", Diem TB: " << fixed << setprecision(2) << sv.diemTB << endl;
        }
    }
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    vector<SinhVien> danhSach;
    nhapDanhSach(danhSach, n);
    inDanhSach(danhSach);

    return 0;
}
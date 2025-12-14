#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    int age;
    double gpa;
};

int main() {
    cout << "=== Bai 1: Quan Ly Danh Sach Sinh Vien ===" << endl;
    const int n = 5;
    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        cout << "Ten: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Tuoi: ";
        cin >> students[i].age;
        cout << "GPA: ";
        cin >> students[i].gpa;
    }

    cout << "\nDanh sach sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien " << i + 1 << ": ";
        cout << "Ten: " << students[i].name << ", Tuoi: " << students[i].age << ", GPA: " << fixed << setprecision(2) << students[i].gpa << endl;
    }

    int idxMax = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].gpa > students[idxMax].gpa) {
            idxMax = i;
        }
    }
    cout << "\nSinh vien co GPA cao nhat:\n";
    cout << "Ten: " << students[idxMax].name << ", Tuoi: " << students[idxMax].age << ", GPA: " << students[idxMax].gpa << endl;

    return 0;
}

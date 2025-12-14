#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    cout << "=== Bai 3: Quan Ly Danh Ba Dien Thoai ===" << endl;
    vector<Contact> contacts(10);

    for (int i = 0; i < 10; i++) {
        cout << "Nhap thong tin lien lac thu " << i + 1 << ":\n";
        cout << "Ten: ";
        cin.ignore();
        getline(cin, contacts[i].name);
        cout << "So dien thoai: ";
        getline(cin, contacts[i].phone);
    }

    cout << "\nDanh ba dien thoai:\n";
    for (size_t i = 0; i < contacts.size(); i++) {
        cout << i + 1 << ". Ten: " << contacts[i].name << ", SDT: " << contacts[i].phone << endl;
    }

    string keyword;
    cout << "\nNhap tu khoa ten can tim: ";
    cin.ignore();
    getline(cin, keyword);
    cout << "Ket qua tim kiem:\n";
    bool found = false;
    for (auto &c : contacts) {
        if (c.name.find(keyword) != string::npos) {
            cout << "Ten: " << c.name << ", SDT: " << c.phone << endl;
            found = true;
        }
    }
    if (!found) cout << "Khong tim thay lien lac nao chua tu khoa \"" << keyword << "\"" << endl;

    return 0;
}

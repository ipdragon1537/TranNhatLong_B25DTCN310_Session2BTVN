#include <iostream>
#include <string>
#include <map>
using namespace std;

map<int, string> productMap;

void addProduct(int id, const string &name) {
    productMap[id] = name;
}

string getProductName(int id) {
    auto it = productMap.find(id);
    if (it != productMap.end()) {
        return it->second;
    }
    return "Khong tim thay san pham!";
}

int main() {
    cout << "=== Bai 5: Quan Ly Ten Cac San Pham ===" << endl;
    for (int i = 0; i < 5; i++) {
        int id;
        string name;
        cout << "Nhap ma san pham thu " << i + 1 << ": ";
        cin >> id;
        cout << "Nhap ten san pham: ";
        cin.ignore();
        getline(cin, name);
        addProduct(id, name);
    }

    int searchId;
    cout << "\nNhap ma san pham can tim: ";
    cin >> searchId;
    cout << "Ten san pham: " << getProductName(searchId) << endl;

    cout << "\nDanh sach san pham:\n";
    for (auto &p : productMap) {
        cout << "Ma: " << p.first << ", Ten: " << p.second << endl;
    }

    return 0;
}

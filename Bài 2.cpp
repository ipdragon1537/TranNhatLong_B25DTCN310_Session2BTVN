#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    cout << "=== Bai 2: Quan Ly Diem Hoc Sinh ===" << endl;
    map<string, double> students;

    for (int i = 0; i < 5; i++) {
        string id;
        double score;
        cout << "Nhap ma hoc sinh thu " << i + 1 << ": ";
        cin >> id;
        cout << "Nhap diem cua hoc sinh " << id << ": ";
        cin >> score;
        students[id] = score;
    }

    double sum = 0;
    for (auto &p : students) {
        sum += p.second;
    }
    double avg = sum / students.size();
    cout << "\nDiem trung binh cua tat ca hoc sinh: " << fixed << setprecision(2) << avg << endl;
    auto maxIt = max_element(students.begin(), students.end(),
        [](const pair<string, double>& a, const pair<string, double>& b) {
            return a.second < b.second;
        });
    cout << "Hoc sinh co diem cao nhat:\n";
    cout << "Ma: " << maxIt->first << ", Diem: " << maxIt->second << endl;

    return 0;
}

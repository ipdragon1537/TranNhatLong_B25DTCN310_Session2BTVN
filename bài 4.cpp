#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double calculateSum(const vector<double> &vec) {
    double sum = 0;
    for (double x : vec) sum += x;
    return sum;
}

double calculateAverage(const vector<double> &vec) {
    if (vec.empty()) return 0;
    return calculateSum(vec) / vec.size();
}

int main() {
    cout << "=== Bai 4: Tinh Tong va Trung Binh Cua Mot Day So ===" << endl;
    vector<double> numbers(5);
    cout << "Nhap 5 so:\n";
    for (int i = 0; i < 5; i++) {
        cout << "So thu " << i + 1 << ": ";
        cin >> numbers[i];
    }
    double sum = calculateSum(numbers);
    double avg = calculateAverage(numbers);
    cout << "Tong: " << sum << endl;
    cout << "Trung binh: " << fixed << setprecision(2) << avg << endl;

    return 0;
}

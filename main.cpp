#include <iostream>
using namespace std;

int main() {

    string name;
    int units;
    float amount = 0, fixed_charge = 50;

    cout << "===== ELECTRICITY BILL GENERATOR =====\n\n";

    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Units Consumed: ";
    cin >> units;

    // Slab calculation
    if (units <= 100) {
        amount = units * 5;
    }
    else if (units <= 200) {
        amount = (100 * 5) + ((units - 100) * 7);
    }
    else {
        amount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    float total = amount + fixed_charge;

    // Print Bill
    cout << "\n\n===== ELECTRICITY BILL =====\n";
    cout << "Customer Name : " << name << endl;
    cout << "Units Used    : " << units << endl;
    cout << "Energy Charge : Rs. " << amount << endl;
    cout << "Fixed Charge  : Rs. " << fixed_charge << endl;
    cout << "----------------------------\n";
    cout << "Total Bill    : Rs. " << total << endl;
    cout << "============================\n";

    return 0;
}

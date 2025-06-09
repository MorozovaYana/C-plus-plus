#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class IPAddress {
protected:
    string address;

public:
    IPAddress(const string& addr) : address(addr) {}

    IPAddress(const IPAddress& other) : address(other.address) {}

    virtual void print() const {
        cout << "IP Address: " << address << endl;
    }

    virtual ~IPAddress() {}
};

class IPAddressChecked : public IPAddress {
    bool isCorrect;

    // Простенька перевірка на формат "x.x.x.x", де x — 0–255
    bool checkIP(const string& ip) {
        stringstream ss(ip);
        string part;
        int count = 0;

        while (getline(ss, part, '.')) {
            if (++count > 4) return false;
            if (part.empty() || part.size() > 3) return false;

            for (char ch : part)
                if (!isdigit(ch)) return false;

            int num = stoi(part);
            if (num < 0 || num > 255) return false;
        }

        return count == 4;
    }

public:
    IPAddressChecked(const string& addr) : IPAddress(addr) {
        isCorrect = checkIP(addr);
    }

    IPAddressChecked(const IPAddressChecked& other)
        : IPAddress(other), isCorrect(other.isCorrect) {}

    void print() const override {
        IPAddress::print();
        cout << (isCorrect ? "Correct" : "Not Correct") << endl;
    }
};

int main() {
    string ip1, ip2, ip3;

    cout << "Enter first IP (no validation): ";
    getline(cin, ip1);
    IPAddress ipObj(ip1);

    cout << "Enter second IP (with validation): ";
    getline(cin, ip2);
    IPAddressChecked ipChecked1(ip2);

    cout << "Enter third IP (with validation): ";
    getline(cin, ip3);
    IPAddressChecked ipChecked2(ip3);

    cout << "\n--- Results ---\n";
    ipObj.print();
    cout << endl;
    ipChecked1.print();
    cout << endl;
    ipChecked2.print();
    cout << endl;

    return 0;
}


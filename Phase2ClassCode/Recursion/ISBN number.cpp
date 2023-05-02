#include <iostream>
#include <string>
using namespace std;

bool Validisbn(string isbn) {
    // Remove hyphens
   // isbn.erase(remove(isbn.begin(), isbn.end(), '-'), isbn.end());

    // Check length
    if (isbn.length() != 10) {
        return false;
    }

    // Compute check digit
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        sum += (i + 1) * (isbn[i] - '0');
    }
    int checkdigit = (11 - (sum % 11)) % 11;

    // Compare check digit
    return checkdigit == (isbn[9] - '0');
}

int main() {
    string isbn;
    cout << "Enter ISBN: ";
    getline(cin, isbn);

    if (Validisbn(isbn)) {
        cout << "Valid ISBN\n";
    } else {
        cout << "Invalid ISBN\n";
    }

    return 0;
}

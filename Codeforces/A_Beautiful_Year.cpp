#include <iostream>
#include <set>
using namespace std;

// Function to check if a year has all distinct digits
bool hasDistinctDigits(int year) {
    string s = to_string(year);
    set<char> digits(s.begin(), s.end());
    return digits.size() == s.size();
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++; // Move to the next year
        if (hasDistinctDigits(y)) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}

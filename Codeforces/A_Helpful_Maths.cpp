#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> numbers;

    // Extract numbers from the string
    for (char c : s) {
        if (c != '+') {
            numbers.push_back(c - '0'); // Convert char to integer
        }
    }

    // Sort the numbers
    sort(numbers.begin(), numbers.end());

    // Print the sorted numbers with '+' in between
    for (size_t i = 0; i < numbers.size(); i++) {
        if (i > 0) cout << "+";
        cout << numbers[i];
    }

    return 0;
}

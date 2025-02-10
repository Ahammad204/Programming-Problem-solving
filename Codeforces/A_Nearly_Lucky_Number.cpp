#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;

    int lucky_count = 0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            lucky_count++;
        }
    }

    // Check if the lucky_count is itself lucky (4 or 7)
    if (lucky_count == 4 || lucky_count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

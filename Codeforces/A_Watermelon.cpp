#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    // Check if the weight can be divided into two positive even numbers
    if (w > 2 && w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

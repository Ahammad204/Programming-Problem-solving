#include <iostream>
using namespace std;

int main() {
    string a, b, result = "";
    cin >> a >> b;

    for (size_t i = 0; i < a.length(); i++) {
        result += (a[i] == b[i]) ? '0' : '1';
    }

    cout << result << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int remove_count = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            remove_count++;
        }
    }

    cout << remove_count << endl;
    return 0;
}

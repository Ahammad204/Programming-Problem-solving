#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string result = "";
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '.') {
            result += '0';
            i++;
        } else { // s[i] is '-'
            if (s[i + 1] == '.') {
                result += '1';
            } else { // s[i + 1] is '-'
                result += '2';
            }
            i += 2;
        }
    }
    
    cout << result;
    return 0;
}

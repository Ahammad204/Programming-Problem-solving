#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    
    while(t--) {
        for (int i = 0; i < n - 1; i++) {
            // If a boy is in front of a girl, swap them
            if(s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++; // Skip next index to avoid double swapping
            }
        }
    }
    
    cout << s;
    return 0;
}

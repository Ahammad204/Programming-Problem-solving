#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string guest, host, pile;
    
    // Reading the input lines
    cin >> guest >> host >> pile;
    
    // Combine the guest's name and host's name into one string
    string combined = guest + host;
    
    // Sort both the combined string and the pile string to compare them
    sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());
    
    // If the sorted strings are equal, it means the pile is a valid permutation of the names
    if (combined == pile) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

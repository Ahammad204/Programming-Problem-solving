#include <iostream>
#include <set>
using namespace std;

int main() {
    string username;
    cin >> username;

    // Use a set to store distinct characters from the username
    set<char> distinctCharacters;

    // Insert each character of the username into the set
    for (char c : username) {
        distinctCharacters.insert(c);
    }

    // If the number of distinct characters is odd, print "IGNORE HIM!"
    // If the number of distinct characters is even, print "CHAT WITH HER!"
    if (distinctCharacters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}

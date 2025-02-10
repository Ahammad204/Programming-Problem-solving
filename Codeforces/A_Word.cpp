#include <iostream>
#include <cctype> // For toupper() and tolower()
using namespace std;

int main() {
    string s;
    cin >> s;

    int upperCount = 0, lowerCount = 0;

    // Count uppercase and lowercase letters
    for (char c : s) {
        if (isupper(c))
            upperCount++;
        else
            lowerCount++;
    }

    // Convert based on the count
    if (upperCount > lowerCount)
        for (char &c : s) c = toupper(c);
    else
        for (char &c : s) c = tolower(c);

    cout << s << endl;
    return 0;
}

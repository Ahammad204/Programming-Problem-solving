#include <iostream>
#include <set>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    // Use a set to store unique horse shoe colors
    set<int> colors;

    // Insert the four colors into the set
    colors.insert(s1);
    colors.insert(s2);
    colors.insert(s3);
    colors.insert(s4);

    // The size of the set represents how many unique colors there are
    // The minimum number of horseshoes to buy is 4 minus the number of unique colors
    cout << 4 - colors.size() << endl;

    return 0;
}

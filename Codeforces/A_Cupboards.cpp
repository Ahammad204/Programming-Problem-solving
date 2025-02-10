#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int leftOpen = 0, leftClosed = 0;
    int rightOpen = 0, rightClosed = 0;

    // Count the number of open and closed doors for left and right doors
    for (int i = 0; i < n; i++) {
        int li, ri;
        cin >> li >> ri;

        if (li == 1) leftOpen++;
        else leftClosed++;

        if (ri == 1) rightOpen++;
        else rightClosed++;
    }

    // To make all left doors the same, choose the minimum operations
    int leftChanges = min(leftOpen, leftClosed);
    // To make all right doors the same, choose the minimum operations
    int rightChanges = min(rightOpen, rightClosed);

    // The total number of operations is the sum of both changes
    cout << leftChanges + rightChanges << endl;

    return 0;
}

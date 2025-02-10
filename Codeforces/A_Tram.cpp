#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int currentPassengers = 0;  // To keep track of current number of passengers
    int maxCapacity = 0;  // To keep track of the maximum number of passengers at any point

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;  // a = passengers exiting, b = passengers entering

        currentPassengers -= a;  // Exiting passengers
        currentPassengers += b;  // Entering passengers

        // Track the maximum number of passengers inside the tram
        if (currentPassengers > maxCapacity) {
            maxCapacity = currentPassengers;
        }
    }

    cout << maxCapacity << endl;  // Output the minimum capacity of the tram

    return 0;
}

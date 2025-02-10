#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int max_height = 0, min_height = 101;
    int max_index = 0, min_index = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > max_height) {
            max_height = arr[i];
            max_index = i;
        }
        if (arr[i] <= min_height) { // Take the rightmost occurrence of the minimum
            min_height = arr[i];
            min_index = i;
        }
    }

    int swaps = max_index + (n - 1 - min_index);
    if (max_index > min_index) swaps--; // Adjustment

    cout << swaps << endl;
    return 0;
}

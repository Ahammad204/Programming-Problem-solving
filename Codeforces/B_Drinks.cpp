#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    int sum = 0;

    // Read the percentages of orange juice in each drink
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        sum += p[i];
    }

    // Calculate the average percentage of orange juice in the final cocktail
    double result = sum / (double)n;

    // Output the result with the required precision
    cout.precision(12);
    cout << fixed << result << endl;

    return 0;
}

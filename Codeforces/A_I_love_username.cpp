#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    int amazingCount = 0;
    int best = points[0];  // First contest score is considered as the best initially
    int worst = points[0];  // First contest score is considered as the worst initially

    for (int i = 1; i < n; i++) {
        if (points[i] > best) {
            amazingCount++;  // It's amazing if the score is better than the previous best
            best = points[i];  // Update the best score
        }
        else if (points[i] < worst) {
            amazingCount++;  // It's amazing if the score is worse than the previous worst
            worst = points[i];  // Update the worst score
        }
    }

    cout << amazingCount << endl;

    return 0;
}

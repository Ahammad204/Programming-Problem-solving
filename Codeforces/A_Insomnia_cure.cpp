#include <iostream>
#include <set>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> damagedDragons;

    // Check dragons damaged by every k-th dragon
    for (int i = k; i <= d; i += k) {
        damagedDragons.insert(i);
    }
    // Check dragons damaged by every l-th dragon
    for (int i = l; i <= d; i += l) {
        damagedDragons.insert(i);
    }
    // Check dragons damaged by every m-th dragon
    for (int i = m; i <= d; i += m) {
        damagedDragons.insert(i);
    }
    // Check dragons damaged by every n-th dragon
    for (int i = n; i <= d; i += n) {
        damagedDragons.insert(i);
    }

    // Output the total number of unique damaged dragons
    cout << damagedDragons.size() << endl;

    return 0;
}

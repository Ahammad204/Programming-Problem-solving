#include <iostream>
using namespace std;

// Function to check if a number is prime
bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Find next prime after n
    int next_prime = n + 1;
    while (!is_prime(next_prime)) {
        next_prime++;
    }

    cout << (next_prime == m ? "YES" : "NO") << endl;
    return 0;
}

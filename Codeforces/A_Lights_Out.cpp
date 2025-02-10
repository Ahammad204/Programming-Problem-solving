#include <iostream>
using namespace std;

int main() {
    int press[3][3];  // Stores the number of times each light is pressed
    int grid[3][3];   // Stores the final light states

    // Read the input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> press[i][j];
            grid[i][j] = 1;  // Initially all lights are ON (1)
        }
    }

    // Calculate the final state of each light
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int toggles = press[i][j]; // The light itself is toggled

            // Check and add the toggles from adjacent lights
            if (i > 0) toggles += press[i - 1][j]; // Top
            if (i < 2) toggles += press[i + 1][j]; // Bottom
            if (j > 0) toggles += press[i][j - 1]; // Left
            if (j < 2) toggles += press[i][j + 1]; // Right

            // If toggled an odd number of times, turn OFF (0), otherwise stay ON (1)
            grid[i][j] = (toggles % 2 == 0) ? 1 : 0;
        }
    }

    // Print the final grid state
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}

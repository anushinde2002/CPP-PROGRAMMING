/* */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the X pattern: ";
    cin >> n;

    // Calculate the size of the grid
    int size = 2 * n - 1;

    // Loop through each row
    for (int i = 0; i < size; i++) {
        // Loop through each column
        for (int j = 0; j < size; j++) {
            // Print star at diagonal positions
            if (j == i || j == (size - 1 - i)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

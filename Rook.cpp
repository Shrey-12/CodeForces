#include <iostream>
using namespace std;

void rook_moves(string initial_position) {
    char column = initial_position[0];
    int row = initial_position[1] - '0';

    // Output all squares in the same row
    for (int i = 1; i <= 8; ++i) {
        if (i != row) {
            cout << column << i << endl;
        }
    }

    // Output all squares in the same column
    for (char c = 'a'; c <= 'h'; ++c) {
        if (c != column) {
            cout << c << row << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;

    // Process each test case
    for (int i = 0; i < t; ++i) {
        string position;
        cin >> position;
        rook_moves(position);
    }

    return 0;
}

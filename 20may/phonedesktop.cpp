#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int no_screens = y / 2; // Each screen can hold 2 2x2 icons
        y = y % 2; // Remaining 2x2 icons after full screens
        x = max(0, x - no_screens * 7); // Each screen that held 2 2x2 icons can also hold 7 1x1 icons

        if (y) {
            no_screens++; // We need an extra screen for the remaining 1 2x2 icon
            x = max(0, x - 11); // Remaining space in this screen can hold 11 1x1 icons
        }

        if (x > 0) {
            no_screens += (x + 14) / 15; // Calculate additional screens needed for remaining 1x1 icons
        }

        cout << no_screens << endl;
    }

    return 0;
}

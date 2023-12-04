#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int flag = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                cout << "#";
            } else {
                if (!flag && (j == 0 || j == m - 1)) {
                    if (j == m - 1)
                        cout << ".";
                    if (j == 0)
                        cout << "#";
                } else if (flag && (j == m - 1 || j == 0)) {
                    if (j == m - 1)
                        cout << "#";
                    if (j == 0)
                        cout << ".";
                } else {
                    cout << ".";
                }
            }
        }
        if (i % 2 == 1) {
            flag = 1 - flag;
        }
        cout << endl;
    }

    return 0;
}

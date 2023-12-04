#include<iostream>
using namespace std;

int main() {
    int w, k, n, borrow;
    cin >> k >> n >> w;

    int i = 1;
    int total = 0;

    while (w--) {
        total += i * k;
        i++;
    }

    borrow = max(0, total - n);

    cout << borrow << endl;

    return 0;
}

#include <iostream>
using namespace std;

int NumberOfLuckyDigits(long long n) {
    int count = 0;
    while (n) {
        if (n % 10 == 4 || n % 10 == 7) {
            count++;
        }
        n = n / 10;
    }
    return count;
}

bool isLucky(int n) {
    if (n == 0) {
        return false;
    }
    while (n) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n = n / 10;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    
    int count = NumberOfLuckyDigits(n);

    if (isLucky(count)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

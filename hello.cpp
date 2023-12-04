#include<iostream>
using namespace std;

int main() {
    long long int temp;
    cin >> temp;
    long long int digit;
    long long int result = 0;
    long long int placeValue = 1;

    while (temp > 0) {        
        digit = temp % 10;
        
        if ((9 - digit) <= digit && !(temp/10 <= 0 && temp == 9)) {
            result = result + (9 - digit) * placeValue;
        } else {
            result = result + digit * placeValue;
        }
        temp = temp / 10;
        placeValue *= 10;
    }

    cout << result << endl;

    return 0;
}

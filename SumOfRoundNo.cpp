#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    int temp = 0;
    int arr[t];
    
    while(temp<t){
         int n;
         cin >> arr[temp];
         temp++;
    }
    temp = 0;

    while (temp<t) {
        vector<int> roundNumbers;
        int placeValue = 1;
        int num = arr[temp];

        while (num) {
            int digit = num % 10;
            if (digit != 0) {
                roundNumbers.push_back(digit * placeValue);
            }
            placeValue *= 10;
            num /= 10;
        }

        cout << roundNumbers.size() << endl;
        for (int i = 0; i < roundNumbers.size(); ++i) {
            cout << roundNumbers[i];
            if (i < roundNumbers.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
        temp++;
    }

    return 0;
}

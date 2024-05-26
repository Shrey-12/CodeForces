#include<iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if (a == 0) {
        return b;
    }
    return a;
}

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int x;
        cin >> x;
        int max_value = 0;
        int max_y = 1;
        for (int y = 1; y <= x - 1; y++) {
            int value = gcd(x, y) + y;
            if (value > max_value) {
                max_value = value;
                max_y = y;
            }
        }
        ans.push_back(max_y);
        
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
    return 0;
}

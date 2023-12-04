#include<iostream>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >> s;
        int flag =0;

        for (char c : s) {
            if (c == '0') {
                cout<<"YES"<<endl;
                flag = 1;
                break;
            } 
        }
        if (!flag)
            cout<<"NO"<<endl;
    }
    return 0;
}
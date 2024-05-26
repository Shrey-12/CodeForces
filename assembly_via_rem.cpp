#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    // Your code here
    int t;
    cin >> t;
    vector<vector<int>> ans;
    while(t--){
        int n;
        //no . of elements in a
        cin >> n;
        int x[n-1];
        for(int i=0;i<n-1;i++){
            cin >> x[i];
        }
        vector<int> a(n,501);
        int summ = 0;
        for(int i=1;i<a.size();i++){
            summ += x[i-1];
            a[i] = a[i]+summ;
        }
        ans.push_back(a);
    }
    for(auto row:ans){
        for(auto col:row){
            cout << col << " ";
        }
        cout <<endl;
    }
    return 0;
}
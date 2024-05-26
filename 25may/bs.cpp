#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i:a){
        cin >> i;
    }
    int res = min(a[0],a[1]);
    for(int i=1;i<n-1;i++){
        vector<int> temp(3);
        temp[0] = a[i-1];
        temp[1] = a[i];
        temp[2] = a[i+1];
        sort(temp.begin(), temp.end()); // Changed all(temp) to temp.begin(), temp.end()
        int currres = temp[1];
        res = max(res,currres);
    }
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false); // Removed std::
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

ostream& solve(){
    int n;
    string s;
    cin >> n >> s;
    vector<int> v(26);
    int mx = 0;
    for (char c : s)
        mx = max(mx, ++v[c - 'a']);
    // cout << "max" << mx<<endl;
    return cout << (mx > n - mx ? 2*mx - n : n%2);
}
int main() {
    std::ios::sync_with_stdio(false);
    int T = 1;
    cin >> T;
    while (T--)
        solve() << '\n';
    
    return 0;
}
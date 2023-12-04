#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define vi vector<int>
#define vll vector<long long int>

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

void solve() {
    int n;
    cin >> n;

    vector<int64_t> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << "1\n";
        return;
    }

    sort(a.begin(), a.end());

    int64_t common_gcd = 0;
    //gcd of difference array
    for (int i = 1; i < n; i++) {
        common_gcd = gcd(common_gcd, a[i] - a[i - 1]);
    }


    int64_t d = 0, ans = 0;
    for (int i = n - 1; i >= 1; i--) {
        d += a[i] - a[i - 1];
        ans += d / common_gcd;
        cout<<"d "<<d<<" ans "<<ans<<endl;
    }


    set<int64_t> s(a.begin(), a.end());

    int64_t now = a[n - 1];
    while (s.count(now)) {
        now -= common_gcd;
        ans++;
    }

    cout << ans << "\n";
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

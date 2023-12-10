// Author: πα

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

bool check(int k, vector<pair<int, int>>& v)
{
    int cl = 0, cr = 0;
    for (auto [l, r] : v) {
        int nl = max(l, cl);
        int nr = min(r, cr);
        if (nl > nr)
            return 1;
        cl = nl - k, cr = nr + k;
    }
    return 0;
}

int binsearch(int lo, int hi, vector<pair<int, int>>& v)
{
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (check(mid, v))
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return lo;
}

ostream& solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto& [x, y] : v)
        cin >> x >> y;
    return cout << binsearch(0, INT_MAX / 2, v);
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while (T--)
        solve() << '\n';
    return 0;
}

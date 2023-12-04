#include <iostream>
#include <vector>
#include <iomanip> 
using namespace std;

#define int long long 

//binary search to find the maximum number of days

void solve() {
    int n, p, lesson, pro;
    cin >> n >> p >> lesson >> pro;

    int l = -1;
    int r = n;

    int totprojects = (n - 1) / 7 + 1;

    while (r - l > 1) {
        int mid = (l + r) / 2;
        // work mid days
        int tot = lesson * mid;
        tot += min(mid * 2, totprojects) * pro;
        //if total points are greater than or equal to required points then move to left end of array
        if (tot >= p)
            r = mid;
        else
            l = mid;
    }
// so r no of days he will work
    cout << n - r << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(10);

    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0; 
}





#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    vector<int> ans;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        string a, b;
        cin >> a >> b;
        
        int pa = 0, pb = 0, cnt = 0;
        while (pa < n && pb < m) {
            if (a[pa] == b[pb]) {
                cnt++;
                pa++;
            }
            pb++;
        }
        
        ans.push_back(cnt);
    }

    for(int i=0;i<ans.size();i++)
        cout << ans[i] << endl;
    
    return 0;
}

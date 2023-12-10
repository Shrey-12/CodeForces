#include <string>
#include <bits/stdc++.h>
#define For(i, n)  for(int i = 0; i < n; i++)
#define all(a)   a.begin(), a.end()

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string a;
	cin >> a;
	int n = a.size();
	reverse(all(a));
 
	string ans;
	int b = 0, B = 0;
	For(i, n) {
		if (a[i] == 'b')
			b++;
		else if (a[i] == 'B')
			B++;
		else if ('a' <= a[i] && a[i] <= 'z') {
			if (b)
				b--;
			else
				ans.push_back(a[i]);
		} else {
			if (B)
				B--;
			else
				ans.push_back(a[i]);
		}
	}
	reverse(all(ans));
	cout << ans << "\n";
  }

  return 0;
}



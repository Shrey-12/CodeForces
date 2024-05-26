#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int len;
        cin >> len;
        string encoded;
        cin >> encoded;

        // Step 1: Get all unique characters and sort them
        set<char> uniqueChars(encoded.begin(), encoded.end());
        string r(uniqueChars.begin(), uniqueChars.end());

        // Step 2: Create the symmetric character mapping
        unordered_map<char, char> decodeMap;
        int n = r.size();
        for (int i = 0; i < n; ++i) {
            decodeMap[r[i]] = r[n - 1 - i];
        }

        // Step 3: Decode the string
        string original;
        for (char c : encoded) {
            original += decodeMap[c];
        }

        cout << original << '\n';
    }

    return 0;
}

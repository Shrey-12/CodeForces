#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
int main() {
    std::ios::sync_with_stdio(false);
    // Your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int bf=0;
       
        for(int i=0;i<n-3;i++){
            int diff = 0;
                    if(arr[i]!=arr[i+1]) diff++;
                    if(arr[i+1]!=arr[i+2]) diff++;
                    if(arr[i+2]!=arr[i+3]) diff++;
                    
                if(diff==1) bf++;
        }
        cout << bf << endl;
    }
    return 0;
}
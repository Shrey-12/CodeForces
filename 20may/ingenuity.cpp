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
        string s;
        cin >> s;
        int N=0,E=0,W=0,S=0;
        for(char c:s){
            if(c=='N') N++;
            else if(c=='E') E++;
            else if(c=='W') W++;
            else S++;
        }

        if(N==0 and S==0 and E==0 and W==0){ cout << "NO" << endl; continue;}

        string ans(n,'R');
        int rN = N/2, hN = N - rN;
        int rS = S/2, hS = S - rS;
        int rE = E/2, hE = E - rE;
        int rW = W/2, hW = W - rW;

        if(rN==0 and rS==0 and rE==0 and rW==0) {cout << "NO" << endl; continue;}

        int r_ins = 0, h_ins = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='N'){
                if(rN>0){
                    rN--;
                    ans[i] ='R';
                    r_ins++;
                }else{
                    hN--;
                    ans[i] = 'H';
                    h_ins++;
                }
            }else if(s[i]=='S'){
                if(rS>0){
                    rS--;
                    ans[i] ='R';
                    r_ins++;
                }else{
                    hS--;
                    ans[i] = 'H';
                    h_ins++;
                }
            }
            else if(s[i]=='E'){
                if(rE>0){
                    rE--;
                    ans[i] ='R';
                    r_ins++;
                }else{
                    hE--;
                    ans[i] = 'H';
                    h_ins++;
                }
            }else{
                if(rW>0){
                    rW--;
                    ans[i] ='R';
                    r_ins++;
                }else{
                    hW--;
                    ans[i] = 'H';
                    h_ins++;
                }
            }
            if(r_ins==0|| h_ins==0){
                cout << "NO" << endl;
            }else{
                cout << ans << endl;
            }
        }






    }
    return 0;
}
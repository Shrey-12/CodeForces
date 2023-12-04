#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b,n;
    while(t--){
        cin>>a>>b>>n;
        int count =0;
        while(a<=n && b<=n){
        if (a>b)
            b+=a;
        else
            a+=b;
        count++;
    }
    cout<<count<<" ";
    }
    return 0;
}
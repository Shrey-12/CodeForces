#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    n = t;
    int A[t]={0};
    int out[t];
    int i=1;
    while(t--){
        cin >> A[i++];
    }
    for(int j=1;j<=n;j++){
        out[A[j]]=j;
    }
    for(int j=1;j<=n;j++){
        cout<< out[j]<< " ";
    }
}
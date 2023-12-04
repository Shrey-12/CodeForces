#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,b;
    int curr=0;
    int maximum=curr;
    while(n--){
        cin>>a>>b;
        curr-=a;
        curr+=b;
        maximum = max(curr,maximum);
    }
    cout<<maximum;
    return 0;
}
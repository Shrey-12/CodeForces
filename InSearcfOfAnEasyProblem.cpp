#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int x;
    int flag=0;
    
    while(t--){
        cin >> x;
        if(x == 1) {
            flag = 1;
            cout<< "HARD";
            break;
        }
    }
    if(flag==0)
        cout<<"EASY";
    return 0;
}
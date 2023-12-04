#include<iostream>
using namespace std;

int main(){
    int A[5][5];
    int x = 0;
    int y = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> A[i][j];
            if(A[i][j]==1){
                x = i;
                y = j;
            }
        }
    }

    int steps = 0;
    if(x > 2){
        steps += (x - 2);
    }
    else if (x < 2)
    {
        steps += (2 - x); 
    }

    if(y > 2){
        steps += (y - 2);
    }
    else if (y < 2)
    {
        steps += (2 - y); 
    }
    cout<<steps;
    return 0;
}
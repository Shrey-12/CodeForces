#include<iostream>
using namespace std;

void towerOfHanoi(long long n, char src, char dest, char helper,int* count){
    if(n==0)
        return;
    towerOfHanoi(n-1,src,helper,dest,count);
    cout << src << " to " << dest << endl;
    *count+=1;
    towerOfHanoi(n-1,helper,dest,src,count);
}

int main(){
    long long n = 0;
    cin >> n;
    int* count = new int ;
    *count = 0;
    towerOfHanoi(n,'A','B','C',count);
    cout << *count - 1<< endl;
    delete(count);
    return 0;
}
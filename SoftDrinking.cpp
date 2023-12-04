#include<iostream>
using namespace std;

int minimum(int i,int j,int k){
    return min(min(i,j),k);

}
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = k*l/nl;
    int limes = c*d;
    int salt = p/np;
    // cout<<drink<<" "<<limes<<" "<<salt<<endl;
    cout<< minimum(drink,limes,salt)/n;
    return 0;
}
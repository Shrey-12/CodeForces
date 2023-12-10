#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int A[n];
for(int i=0;i<n;i++){
	cin >> A[i];
}
int pd = A[1] - A[0];
int curr = 2;
int ans = 2;

// for every element
for(int i=0;i<n;i++){
	if(pd==A[i]-A[i-1]){
		curr++;
		ans = max(ans,curr);
	}else{
		pd = A[i] - A[i-1];
		curr = 2;
		}
}
cout << ans << endl;
return 0;
}
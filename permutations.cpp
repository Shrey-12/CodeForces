#include <iostream>
#include<string.h>
using namespace std;


// A BC 

void permutations(string s, string ans){
    if(s.length()==0){
        cout << ans << endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        string ros = s.substr(0,i)+s.substr(i+1);
        //why are we adding cd to the ans?
        permutations(ros,ans+ch);
    }
}

int  main(){
    permutations("ABC","");

}


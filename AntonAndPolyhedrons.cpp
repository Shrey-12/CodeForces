#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    int sides = 0;

    while (n--) {
        cin >> s;

        if (s == "Tetrahedron") {
            sides += 4;
        }
        else if( s == "Cube"){
            sides += 6;
        }
        else if( s == "Dodecahedron"){
            sides += 12;
        }
        else if( s == "Octahedron"){
            sides += 8;
        }
        else{
            sides +=20;
        }
    }

    cout << sides << endl;
    return 0;
}

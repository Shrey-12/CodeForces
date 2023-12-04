#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int coordinates[] = {x1,x2,x3};
    sort(coordinates,coordinates+3);
    
    int distance1= coordinates[1] - coordinates[0];
    int distance2= coordinates[2] - coordinates[1];
    int total_distance = distance1 + distance2;
    cout<< total_distance;

    return 0;

}
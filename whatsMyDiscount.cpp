#include <iostream>
using namespace std;

int main() {
    double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};
    double num ; 
    cin>>num;
    //your code goes here
    for( int i = 0; i<11; i++) {
        cout<<items[i]-items[i]*num/100<<" ";

    }    
    return 0;
}
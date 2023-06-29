#include <iostream>
#include <string>
using namespace std;

//complete the function with one default argument
void printOrder(string Order="Black tea"){
    cout<<Order<<endl;
}

int main() {
    //getting coffee type
    string friendOrder;
    cin >> friendOrder;
    
    printOrder();
    cout<<friendOrder;
    
    
    return 0;
}
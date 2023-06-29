#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
/*complete the function to multiple the megabytes,
  don't forget to set the parameter*/
int promotion(int *n)
{

    //taking multiplier as input
    int multiplier;
    cin>>multiplier;
    return *n*=multiplier;


}

int main() {
    //getting initial count of megabytes
    int megabytes,multiplier;
    cin >> megabytes;

    //printing the count of megabytes before the promotion
    cout << "Before the promotion: " << megabytes << endl;

    //complete the function call
    promotion(&megabytes);

    //printing the count of megabytes after the promotion
    cout << "After the promotion: " << megabytes << endl;

    return 0;
}
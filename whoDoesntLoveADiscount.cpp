#include <iostream>
using namespace std;

int main()
{
    float purchaseAmount = 0;
    float totalPrice;
    int x = 1;
    do
{
    cin >> totalPrice ;
    purchaseAmount = (totalPrice*15)/100;
    cout << purchaseAmount << endl;
    x++ ;
}
while(x <= 3 );
return 0;
}
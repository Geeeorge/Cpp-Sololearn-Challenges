#include <iostream>
using namespace std;

int main()
{
    int choice = 0;
    cin >> choice;
   
   switch (choice){
   case 1:

       cout << "Latte" << endl; 

       break; 
   case 2:

       cout << "Americano" << endl; 

        break;    
    
    case 3:

        cout << "Espresso" << endl;

        break;
    
    case 4:

        cout << "Cappuccino" << endl;
        break;


    case 5:

        cout << "Macchiato" << endl;
        break; 
        
        }

    return 0;
}
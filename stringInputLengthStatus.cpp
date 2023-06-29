#include <iostream>
using namespace std;

int main() {
   string name;
   cin >> name;
   try {
      if(name.size() >= 4 && name.size() <= 20 ){
         cout <<  "Valid" << endl;;
      }else{
         throw "Invalid";
      }
   }
   catch(char const* x) {
      cout<< x; 
   }
   
   return 0;
}


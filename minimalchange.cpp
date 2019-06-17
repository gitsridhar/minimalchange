#include <iostream>
#include <vector>

using namespace std;

int denominations[] = {1,2,5,10,20,25,50,100};

int main() {
   cout << "Calculating minimal change." << endl;
   int value = 293;

   vector<int> change;

   for(int i=sizeof(denominations)/sizeof(denominations[0])-1; i>=0; i--) {
       while(value >= denominations[i]) {
           value -= denominations[i];
           change.push_back(denominations[i]);
       } 
   }

   for(int i=0; i<change.size(); i++) {
       cout << change[i] << "  " << endl;
   }
   return(0);
}

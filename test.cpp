#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int x = 5;
//     try
//     {
//         if(x>5){
//             throw x;
//         }
//         else if(x<5){
//             throw 'x';
//         }
//         else{
//             cout<<x;
//         }
//     }
//     catch(const std::exception& e)
//     {
//         cout<<"in catch all";
//     }
//     catch(int){
//         cout<<"In int catch";
//     }
//     return 0;
// }

// int main() {

// int P=-1;

// try {

// cout << "Inside try"; if(P<0) {

// throw P;

// cout << "After throw";
// }
// }

// catch (int P ) {

// cout << "Exception Caught";

// }

// cout << "After catch";

// return 0; }
#include <iostream>
using namespace std;
class Distance {
   private:
   int feet; // 0 to infinite
   int inches; // 0 to 12
   public:
   // required constructors
   Distance() {
      feet = 0;
      inches = 0;
   }
   Distance(int f, int i) {
      feet = f;
      inches = i;
   }
   friend void operator<<( ostream &output, Distance D ) {
      output << "F : " << D.feet << " I : " << D.inches;
      //return output;
   }
   friend istream &operator>>( istream &input, Distance &D ) {
      input >> D.feet >> D.inches;
      return input;
   }
};
int main() {
   Distance D1(11, 10), D2(5, 11), D3;
   cout << "Enter the value of object : " << endl;
   cin >> D3;
   cout << "First Distance : " << D1;
   cout << "First Distance : " << D1 << D2<< endl;
   //cout << "Second Distance :" << D2 << endl;
   cout << "Third Distance :" << D3 << endl;
   return 0;
}
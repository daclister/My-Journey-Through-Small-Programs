//Basic while loop expression.
/*
Write a while loop that prints userNum divided by 4 (integer division) until reaching 2 or less
 Follow each number by a space. Example output for userNum = 160:
 40 10 2
*/

#include <iostream>
using namespace std;

int main() {
   int userNum;

   cin >> userNum;

   /* Your solution goes here  */
   while((userNum / 4) >= 2 ){
      cout << userNum / 4 << " ";
      userNum = userNum / 4; // more efficent apporach /=
      }
   cout << endl;

   return 0;
}
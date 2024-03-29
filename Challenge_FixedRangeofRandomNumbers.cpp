/*
Type two statements that use rand() to print 2 random integers between (and including) 100 and 149. End with a newline. Ex:
101
133
Note: For this activity, using one statement may yield different output (due to the compiler calling rand() in a different order). Use two statements for this activity. Also, srand() has already been called; do not call srand() again.

*/

#include <iostream>
#include <cstdlib>   // Enables use of rand()
#include <ctime>     // Enables use of time()
using namespace std;

int main() {
   int seedVal;

   cin >> seedVal;
   srand(seedVal);

   /* Your solution goes here  */
   cout << rand() % 50 + 100 << endl;// print a random number and take the mod of that number by 50 and shift it to the right on the number by 100
   cout << rand() % 50 + 100 << endl;
   return 0;
}
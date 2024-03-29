//a conditional expresion has the form
//condition ? expresionWhenTrue : expresionWhenFalse

/*
*all three operans are expresions.
*if consition evaluates to true, then when expresionWhenTrue is evaluated and executed.
*/

// ( ? ) ( : ) are also known as ternary operators.

/*
*Good practice is to restrict usage og conditional expressions to an assignment staatement, as in,
*y = (x == 2) ? 5 : 9 * x;. Common practice is to put parentheses around the first expression of the conditional expression, to enhance readability.
*/

#include <iostream>
using namespace std;

int main() {
   int numUsers;
   int updateDirection;

   cin >> numUsers;
   cin >> updateDirection;

   /* Your solution goes here  */
   numUsers = (updateDirection == 1)? numUsers + 1 : numUsers - 1;
   cout << "New value is: " << numUsers << endl;

   return 0;
}
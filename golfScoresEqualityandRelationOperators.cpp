/*
*This program outputs special names for diffrent number of strokes
*for a par 4  hole in golf. You can run this program to determin your golf score
*based of of the average number of strokes it takes to get to that hole
*such as par 3 meaning it should take you 3 strokes to make it in
*This program is an example of equality operators (==) (!=) 
*This program is an example of relational operators (<)less than, (<=) less than or equal to (>) greater than, (>=) greater than or equal to.
*/

# include <iostream>
using namespace std;

int main(){
   int numStrokes;
   int parNumber;
   //first we promt the user to enter their number of strokes
   cout << "Enter the number of strokes it took to complete the hole." << endl;
   cin >> numStrokes;
   //If the number of strokes is a negative number then we prompt the user to re-enter the number
   if (numStrokes < 0){
      cout << "Invlaid entry for number of strokes" << endl;
      cout << "Re-enter the number of strokes the number can not be negative: " << endl; 
      cin >> numStrokes;
      //as long as the user enters negative numbers the app will prompt them to re-enter it
         while (numStrokes < 0){
            cout << "Renter the number of strokes this value can not be negative" << endl;
            cin >> numStrokes;
      }
     
   } 
   
   cout << "Enter the number of par such as par 4" << endl;
   cin >> parNumber;
   if (parNumber < 0){
      cout << "Invalid entry for par number." << endl;
      cout << "Re-enter the par number." << endl;
      cin >> parNumber;
      //as long as the user keeps inputing negative numbers they will be reprompted to enter the par number.
         while(parNumber < 0){
            cout << "Par number can not be negative please re-enter the number." << endl;
            cin >> parNumber;
         }
   }
   //if we didnt attempt the whole the program will print out did not attempt
   if (numStrokes == 0){
      cout << "You did not attempt this hole." << endl;
   }
   //If we score a whole in 1 it dosent matter how far away we are from par its always called a whole in one
   else if(numStrokes == 1){
      cout << "Whole in one!" << endl;
   }
   else if(numStrokes - parNumber == -4){
      cout << "Condor (double Albatross or truple eagle)" << endl;
   }
   else if(numStrokes - parNumber == -3){
      cout << "Albatross (double Eagle)" << endl;
   }
   else if(numStrokes - parNumber == -2){
      cout << "Eagle!!!!" << endl;
   }
   else if(numStrokes - parNumber == -1){
      cout << "Birdie tweet tweet!!!!" << endl;
   }
   else if(numStrokes - parNumber == 0){
      cout << "Par good job!!!!" << endl;
   }
   else if(numStrokes - parNumber == 2){
      cout << "Bogey!" << endl;
   }
   else if(numStrokes - parNumber == 3){
      cout << "Double Bogey!" << endl;
   }
   else if(numStrokes - parNumber == 4){
      cout << "Triple Bogey!" << endl;
   }  
   else{
      cout << "You suck give it up" << endl;   
   }
   
   return 0;

}
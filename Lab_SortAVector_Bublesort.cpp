#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void SortVector(vector<int>& myVec){
   int i = 0;
   int j = 0;
   //int temp;
   int n = myVec.size();
   bool swapped;
   
   //temp = 0;
   for (i = 0; i < n - 1; i++){
      swapped = false;
      for (j = 0; j < n - i - 1; ++j){
         if (myVec.at(j) > myVec.at(j +1)){
            swap(myVec.at(j), myVec.at(j + 1));
            swapped = true;
            }
         }
         if (!swapped){
            break;
            }
      }
   }

int main(){
   /* Type your code here */
   int userNumbers;
   cin >> userNumbers;
   vector<int> myVec(userNumbers);
   
   //Populates my vector with unsorted numbers
   for(int i = 0; i < userNumbers; ++i){
      cin >> myVec.at(i);
      }
     //usesfunction to sort the vector
     SortVector(myVec);
    //Prints out vector
    for (int i = 0; i < userNumbers; ++i){
        cout << myVec.at(i) << " ";
        }
    cout << endl;
   
   

   return 0;


    }
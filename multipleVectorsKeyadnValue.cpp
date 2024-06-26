//Challlenge completed
/*
*Multiple vectors: key and value.
*For any element in keysList with a value greater than 100, print the corresponding value in itemsList, followed by a space. Ex: If keysList = {42, 105, 101, 100} and itemsList = {10, 20, 30, 40}, print:
*20 30 
*Since keysList[1] and keysList[2] have values greater than 100, the value of itemsList[1] and itemsList[2] are printed.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int SIZE_LIST = 4;
   vector<int> keysList(SIZE_LIST);
   vector<int> itemsList(SIZE_LIST);
   int i = 0;

   keysList.at(0) = 42;
   keysList.at(1) = 105;
   keysList.at(2) = 101;
   keysList.at(3) = 100;

   itemsList.at(0) = 10;
   itemsList.at(1) = 20;
   itemsList.at(2) = 30;
   itemsList.at(3) = 40;

   /* my solution  */
   int tempValKey;
   int tempValItems;
   for(i = 0; i < SIZE_LIST; i++){
       tempValKey = keysList.at(i);
       tempValItems = itemsList.at(i);
       if(tempValKey > 100){
          cout << tempValItems; 
           if( i < SIZE_LIST ){
                 cout << " ";
              }
          }
      }
   cout << endl;

   return 0;
}
/*
*changing a character in a string
*A character in a string can be assinged. 
*If userString is "abcde", then userString.at(3) = 'x'; 
*yields
*"abcxe"
*/

int main () {
   string userCaption;
   char lastChar;
   int lastIndex;
   
   cout << "Enter a caption: ";
   getline(cin, userCaption);
   
   lastIndex = userCaption.size() - 1; // the size of a string like "car" is 3 howver the index position for the last letter is 2 this is why we subtracted 1
   lastChar = userCaption.at(lastIndex);
   
   if ((lastChar !='.') && (lastChar != '!') && (lastChar != '?')) {
	   //User;s caption lacked ending punctuation, so add a period
	   userCaption.append(".");
   }
   
   cout << "New: " ;
   cout << userCaption << endl;
   
   return 0;
}
/*
This program could be appart of a caption contest for a website
a user will enter a string below the image.
If the user forgets a period the program automatically adds a period if the user forget to 
use punctuation at the end of the caption
*/
//the function s1.append(s2) appends string s2 to string s1. Ex: If s1 is "Hey", s1.append("!!!") makes s1 "Hey!!!".
//HotTip: the function s.push_back(c), appends(adds to the end) a character c to string s other wise append can not do this!!

//Common error is to access an invalid string index, especially exactly one larger than the largest index.

//Common error: Out-of-range access yields exceptions
/*
*userName = "Cat";
w = userName.at(0);
x = userName.at(1);
y = userName.at(2);
z = userName.at(3); // out of range Exception
String variable userName has size 3 (so last index is 2). Those 3 items happen to be in memory locations 76, 77, 78 for example. Location 79 has some other variable's value.
Accesses to indices 0, 1, 2 are fine. But accessing index 3 is an error.
*/
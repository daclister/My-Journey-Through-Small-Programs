/*
//Floating-point comparision should be avoided do not compare floating points using ==.
//Some floating point numbers cannont be exactly represented in the limited available memory bits like 64.

double numMeters = 0.7;
numMeters = numMeters - 0.4;
numMeters = numMeters - 0.3;

//numMeters expected to be 0,
//but it is actually 0.0000000000000000555112

if (fabs(numMeters - 0.0) < 0.001){
	// Equals 0.
}else{
	//Dose not equal 0.
}

//Floating-point numbers can't always be exactly represented in limited memory bits.
if (numMeters == 0.0) {
   // Equals 0.
}
else {
   // Does not equal 0.
}
Thus, floats should not be compared with ==.
Compare floats for 'close enough'
Floating-point numbers should be compared for "close enough" rather than exact equality.
*/

//An epsilon is the value that you use to check if your comparsion is close enough 0.0001 is a common choice
//for examples if (x - y) < 0.0001, x and y are deemed equal because they are close enough!

//--The std::abs() function is overloaded to support floating-point and integer types. However, good practice is to use the fabs() function to make the operation clear.<--
//Bad practice is to compare a floating-point with an integer 


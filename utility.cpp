// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    


// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

#include "utility.h"

bool approxEqual(double a, double b, double tolerance){
  //Precondition: The values a and b, a tolerance to test them against. All are doubles.
  //Postcondition: Return whether  a and b are closer than the tolerance
  return fabs(a-b) < tolerance;
}

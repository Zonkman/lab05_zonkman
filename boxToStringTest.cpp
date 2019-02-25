#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1;
  
  initBox(&b1,0.7654321,2.71828182845905,82.01,83.83838383);

  assertEquals("ul=(0.8,3),w=8e+01,h=8e+01", boxToString(b1,1), "boxToString(b1,1)");
  
  assertEquals("ul=(0.77,2.7),w=82,h=84", boxToString(b1,2), "boxToString(b1,2)");
	
  assertEquals("ul=(0.765,2.72),w=82,h=83.8", boxToString(b1,3), "boxToString(b1,3)");
	
  assertEquals("ul=(0.7654,2.718),w=82.01,h=83.84", boxToString(b1,4), "boxToString(b1,4)");
	
  assertEquals("ul=(0.76543,2.7183),w=82.01,h=83.838", boxToString(b1,5), "boxToString(b1,5)");
	
  assertEquals("ul=(0.765432,2.71828),w=82.01,h=83.8384", boxToString(b1,6), "boxToString(b1,6)");
	
  return 0;
}

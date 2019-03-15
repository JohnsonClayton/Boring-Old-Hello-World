#include <stdio.h>

//Pulled from https://en.wikipedia.org/wiki/C_preprocessor#Macro_definition_and_expansion
//	However, the example doesn't compile. Want to get something like this working to 
//  introduce students to expansion.

#define HE HI
#define LLO _THERE
#define HELLO "HI THERE"
#define CAT(a,b) a##b
#define XCAT(a,b) CAT(a,b)
#define CALL(fn) fn(HE,LLO)
CAT(HE,LLO); 	// "HI THERE", because concatenation occurs before normal expansion
XCAT(HE,LLO); 	// HI_THERE, because the tokens originating from parameters ("HE" and "LLO") are expanded first
CALL(CAT); 	// "HI THERE", because parameters are expanded first

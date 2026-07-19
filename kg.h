//	KG  - header-only library
// Helper functions, recursively added headers, low level implementations, puzzle instruments

// Segment for FU - FREQUENTLY USED
#include <stdarg.h>

#include <math.h>
#include <stdio.h>

#define print(arg) printf("%s = %lld \n", #arg, (long long int)arg)
//#define print2(arg) printf(#arg " = %lld \n",  arg)

// Segment for PE - puzzle environment
#define natural long long int
int kg_pe_DigitAmount(natural n){
	return (int)log10((double) n) + 1;
}
int kg_pe_TakeDigit(natural n, int index){
	// Todo
}
int kg_pe_GrowingNumberQ(natural n ){
	int len = kg_pe_DigitAmount(n);
	for (int i = 1; i<=len; i++){
		
	}
	return 14;
}
int kg_pe_DescendingNumberQ(natural n ){
	return 14;
}
inline int kg_pe_BouncyNumberQ(natural n){
	return ( !kg_pe_GrowingNumberQ( n ) ) && ( !kg_pe_DescendingNumberQ( n ) );
}
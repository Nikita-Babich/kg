//	KG  - header-only library
// Helper functions, recursively added headers, low level implementations, puzzle instruments

// Segment for FU - FREQUENTLY USED
#include <stdarg.h>

#include <stdio.h>

#define print(arg) printf("%s = %lld \n", #arg, arg)

// Segment for PE - puzzle environment
#define natural long long int
int kg_pe_DigitAmount(natural n){
	
}
int kg_pe_GrowingNumberQ(natural n ){
	return 14;
}
int kg_pe_DescendingNumberQ(natural n ){
	return 14;
}
inline int kg_pe_BouncyNumberQ(natural n){
	return ( !kg_pe_GrowingNumberQ( n ) ) && ( !kg_pe_DescendingNumberQ( n ) )
}
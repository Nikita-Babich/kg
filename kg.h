//	KG  - header-only library
// Helper functions, recursively added headers, low level implementations, puzzle instruments

// Segment for FU - FREQUENTLY USED
#include <stdarg.h>

#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>


#define print(arg) printf("%s = %lld \n", #arg, (long long int)arg)
#define print_float(arg) printf(#arg " = %lf \n", (double)arg)

static time_t ___time_prev=0;
#define track(n,s) if(time(0)>___time_prev+s){print(n); time(&___time_prev);};fflush(stdout);
#define track_opt(n,s,k) if(n%k==0)track(n,s);

// Segment for PE - puzzle environment
#define natural long long int
#define not !
int kg_pe_DigitAmount(natural n){ //
	return (int)log10((double) n) + 1;
}
int kg_pe_TakeDigit(natural n, int pos){ // pos uses indices starting with 1
	int len = kg_pe_DigitAmount(n);
	int pos_from_right = len - pos;
	natural left_slice = n / pow(10,pos_from_right) ;
	int taken = left_slice % 10;
	return taken;
}
int kg_pe_GrowingNumberQ(natural n ){
	int len = kg_pe_DigitAmount(n);
	for (int i = 2; i<=len; i++){
		if ( kg_pe_TakeDigit(n, i-1) > kg_pe_TakeDigit(n, i) ){
			return 0;
		}
	}
	return 1;
}
int kg_pe_DescendingNumberQ(natural n ){
	int len = kg_pe_DigitAmount(n);
	for (int i = 2; i<=len; i++){
		if ( kg_pe_TakeDigit(n, i-1) < kg_pe_TakeDigit(n, i) ){
			return 0;
		}
	}
	return 1;
}
int kg_pe_BouncyNumberQ(natural n){
	return ( !kg_pe_GrowingNumberQ( n ) ) && ( !kg_pe_DescendingNumberQ( n ) );
}
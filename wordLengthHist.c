#include <stdio.h>

main() {
 
	int space = 0;
	int lettercounts = 0;
	int holderVals[11];
	int c,i;
	for(i = 0 ; i < 11 ; i++) { 
		holderVals[i] = 0;
	}
	
	while((c = getchar()) != EOF) {
 		if(c == ' ') { 
			++holderVals[lettercounts];
			lettercounts = 0;
		} else { 
			++lettercounts;
	}
	}
}
		

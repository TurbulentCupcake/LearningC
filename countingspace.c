#include <stdio.h>

main() 
{

	int c;
	int blankcount = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t') {
			blankcount++;
		}
	}
	printf("%d\n", blankcount);

}




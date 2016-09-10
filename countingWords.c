#include <stdio.h>

main()
{
	
	int c, nl, nw, nc, state;

	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) { 
		++nc;
		if (c == '\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t') 
			++nw;
	}
	++nw;

	printf("%d %d \n", nc, nw);
}



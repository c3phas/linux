#include <stdio.h>
void filecopy(FILE *ifp,FILE *ofp)
{
	int c;
	printf("The system will now open or write information\n");
	while ((c = getc(ifp)) != EOF)
	    putc(c,ofp);

		}
		

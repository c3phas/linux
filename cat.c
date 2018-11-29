#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/*cat:concatenate files*/
extern void filecopy(FILE *ifp,FILE *ofp);
int main( int argc, char *argv[])
{
/*declare the file type using a
 * pointer,file name is fp*/

	FILE *fp;

	if ( argc == 1) /*if no args supplied,copy std input*/
		filecopy(stdin,stdout);/*function call*/
	else{
	//check whether the argc supplied are more than 2 including the command
		while (--argc>0){
				
			fp = fopen(*(++argv) ,"r");
	                if (fp == NULL){
				perror("unable to open");
				exit(EXIT_FAILURE);
			}
			else{

			    filecopy(fp,stdout);
			    printf("\n");
			    fclose(fp);
			    
			
		}

		}
		return 0;

}
}
/*void filecopy(FILE *ifp,FILE *ofp)
{
	int c;
	printf("the system will now open or write info:\n");
	while ((c = getc(ifp)) != EOF)
		putc( c, ofp);
}*/

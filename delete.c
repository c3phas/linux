/*This program will be used to delete files...similar to rm command*/
#include <stdio.h>
#include <stdlib.h>
int main( int argc, char **argv)
{
	char *file = (char *)malloc(15*sizeof(char));
	if (file == NULL)
	{
		fprintf(stderr,"failed to allocate memory\n");
		return EXIT_FAILURE;
	}else{
			char response;
			printf("Enter the name of the file to delete\n");
			scanf(" %s",file);
			fflush(stdin);
			printf("Are you sure you want to delete file %s (Y/N) \n",file);
			scanf(" %c",&response);
			if ( response == 'y' || response == 'Y'){
			int del_status = remove(file);
			if (del_status == -1)
			{
				fprintf(stderr,"unable to delete the file:");
				perror("");
				return EXIT_FAILURE;
			
			}else{
			
				printf("file was successfully deleted\n");
				return EXIT_SUCCESS;
			}
	
	
	
			}else{
					printf("deletion terminated\n");
					return EXIT_SUCCESS;
			
			}
	}

	free(file);
	return 0;
}


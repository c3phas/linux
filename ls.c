#include<stdio.h>
#include<stdlib.h>
#include <string.h>
//include the headers required when dealing with directories
#include<sys/types.h>
#include <dirent.h>

int main( int argc, char *argv[])
{
	DIR	*dir;//an object to open a directory
	struct dirent *drp;//an object to access the contents
	/*open the directory*/
	char *path = (char *)malloc(40*sizeof(char));// ".";
//	printf("%s",path);
	printf("Enter the name of the directory\n");
	fflush(stdin);
	scanf(" %s",path);
//	printf(" %s",path);

	dir = opendir(path);
	if (dir == NULL)
	{
		perror("opendir");
		return EXIT_FAILURE;
	
	}else{
	
		/*read the contents of the directory*/
		
			
		while ((drp=readdir(dir)) != NULL){
		printf("%s\n",drp->d_name);
		//if (drp == NULL){
		//	return EXIT_FAILURE;
		
		}
		}




	return 0;
}

/*This will be used to create a link for a file*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main( int argc, char **argv)
{
   char *old_path= (char *)malloc(40*sizeof(char));
   char *new_path= (char *)malloc(30*sizeof(char));

   printf("Enter the path of the file you wish to link\n");
  // fflush(stdin);
   scanf(" %s",old_path);
   fflush(stdin);
   printf("Enter the new path to create\n");
  // fflush(stdin);
   scanf(" %s",new_path);
	printf(" %s",new_path);
   int link_response;
   link_response = symlink(old_path,new_path);
	   if (link_response ==-1){
			//fprintf(stderr,"an error occured");
			perror("link");
			exit(1);
	   }else{
   
		printf("Successfully created the link");
		exit(0);
	   }
   
   
   

   
	return 0;
}

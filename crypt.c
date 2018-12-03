/*implementing the crypt algorithm/function *
 *which uses DES as the encryption algorithm *
 *The program takes two args the password and salt*
 *to compile it just type gcc -o output_file crypt.c -lcrypt
 *then run the executable named (output_file)
 *
 * */
#include <stdio.h>
#include <unistd.h>

#include <stdlib.h>
#include <crypt.h>
int main(int argc, char **argv)
{
	if (argc == 3){
		printf("%s\n",crypt(argv[1],argv[2]));
		exit(EXIT_SUCCESS);
	}else{
	
		printf("usage :crypt password salt\n");
		exit(EXIT_FAILURE);	
	
	}else{
	
		printf("usage :crypt password salt\n");
	
	}


return 0;
}

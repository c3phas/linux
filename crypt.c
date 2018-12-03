/*implementing the crypt algorithm/function *
 *which uses DES as the encryption algorithm *
 *The program takes two args the password and salt*
 *to compile it just type gcc -o output_file crypt.c -lcrypt
 *then run the executable named (output_file)
 *
 * */
#include <stdio.h>
#include <unistd.h>
<<<<<<< HEAD

#include <stdlib.h>
=======
<<<<<<< HEAD

#include <stdlib.h>
=======
>>>>>>> e1d4c7a8c7605e9bf7b77e070fa6ee772ed1bf85
>>>>>>> b46d72e6ee43c22be7d2e6c5f9e9afc1117e1c7e
#include <crypt.h>
int main(int argc, char **argv)
{
	if (argc == 3){
		printf("%s\n",crypt(argv[1],argv[2]));
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> b46d72e6ee43c22be7d2e6c5f9e9afc1117e1c7e
		exit(EXIT_SUCCESS);
	}else{
	
		printf("usage :crypt password salt\n");
		exit(EXIT_FAILURE);	
<<<<<<< HEAD
=======
=======
>>>>>>> b46d72e6ee43c22be7d2e6c5f9e9afc1117e1c7e
	
	}else{
	
		printf("usage :crypt password salt\n");
	
<<<<<<< HEAD
=======
>>>>>>> e1d4c7a8c7605e9bf7b77e070fa6ee772ed1bf85
>>>>>>> b46d72e6ee43c22be7d2e6c5f9e9afc1117e1c7e
	}


return 0;
}

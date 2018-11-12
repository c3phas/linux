#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
		char *cwd;
		cwd = getcwd(NULL,0);
		if (!cwd)
		{
			perror("getcwd");
			return 1;
		
		}else{
			printf("The current path : ");
			printf("%s\n",cwd);
		
		free (cwd);
		}

		return 0;
}

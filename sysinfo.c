/****************************************************
 *a simple implementation of the uname -a command   *
 *uname gives the name and info about current kernel*
 *compiling(gcc -o output_file sysinfo.c)           *
 * running (./output_file)                          *
 *works on any unix based system                    *
 
 */


#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>

int main (int argc,char **argv)
{
	/*declare a structure to hold the infomation*/
	struct utsname uts;
	int ret=uname(&uts) ;
	if (ret == -1)
	{
		perror("uname");
		exit(1);
	}
	else{
		printf("Node name: %s\n",uts.nodename);
		printf("System name: %s\n",uts.sysname);
		printf("Release name: %s\n",uts.release);
		printf("Version : %s\n",uts.version);
		printf("Hardware : %s\n",uts.machine);
		printf("Domain name : %s\n",uts.domainname);
}
	return 0;
}

/* This is an implementation    *
 * of the linux command "eject" *
 * author peter macharia        *
 * run ./eject cd to execute    */

#include <stdio.h>//printf
#include <stdlib.h>//exit
#include <unistd.h>//close syscall
#include <sys/ioctl.h>// I/O control
#include <linux/cdrom.h>//eject
/*header files for open syscall*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/*string manipulation*/
#include <string.h>

//#define CD "/dev/cdrom" 

int main (int argc , char **argv)
{
	if (argc < 2)
	{
		fprintf(stderr,"usage : %s <device>\n",argv[0]);
		exit (EXIT_FAILURE);
	
	}else{
	    	if(!strcmp(argv[1],"cd")){
				argv[1] = "/dev/cdrom";
			}
			int fd;
			fd = open(argv[1], O_RDONLY | O_NONBLOCK);
			if (fd == -1){
				perror("open");
				exit(EXIT_FAILURE);
			}else{
			
					int ret;
					ret = ioctl(fd,CDROMEJECT,0);
					if (ret == -1){
						perror("ioctl");
						exit(EXIT_FAILURE);
					
					}else{
						
						close(fd);
						
						
					}
			
			}
	
	}


	return 0;
}

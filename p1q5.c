
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

int main (int argc, char *argv[]) {
pid_t childpid = 0;
int option = 0;
int i, n, j, k,m;

if (argc < 2){ /* check for valid number of command-line arguments */
fprintf(stderr, " %s: Error : Try Executable -h for help \n",argv[0]);
return 1;
}
  while ((option = getopt(argc, argv,"hn:k:m:")) != -1) {

        switch (option) {
	     case 'h' :
		 	printf("Usage: <executable name> -n {no. of processes}-k { no. of loop times } -m {no. of sleep seconds} \n");
			break;
	     case 'n' : n = atoi(optarg);
			break;
         case 'k' : k = atoi(optarg); 
            break;
         case 'm' : m = atoi(optarg);
            break;
         default: 
                  perror("Error: ");
		  //return -1;
		  //break;
		
		//exit(EXIT_FAILURE);
				abort();
        }
    }


for (i = 1; i < n; i++)
if (childpid = fork())
break;
for( j = 0; j < k; j++)
{
fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
i, (long)getpid(), (long)getppid(), (long)childpid);
sleep(m);
}

return 0;
}


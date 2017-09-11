
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

int main (int argc, char *argv[]) {
pid_t childpid = 0;
int option = 0;
int i, n, j, k,m;

<<<<<<< HEAD
  while ((option = getopt(argc, argv,"hn:k:m:")) != -1) {

        switch (option) {
	     case 'h' :
		printf("Help content");
		break;
=======
  while ((option = getopt(argc, argv,"n:k:m:")) != -1) {

        switch (option) {
>>>>>>> 091ef87e8eb10a19717a3a6a8df2bdb44ed1b686
	     case 'n' : n = atoi(optarg);
		break;
             case 'k' : k = atoi(optarg); 
                 break;
             case 'm' : m = atoi(optarg);
                 break;
             default: 
                  perror("Error: ");
<<<<<<< HEAD
		  return -1;
		  break;
		
=======
		exit(EXIT_FAILURE);
>>>>>>> 091ef87e8eb10a19717a3a6a8df2bdb44ed1b686
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

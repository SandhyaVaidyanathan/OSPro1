//Sandhya Vaidyanathan
//09/14/17

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (int argc, char *argv[]) {
  pid_t childpid = 0;
  int i, n =1 ,j,nchars =1;
  int option = 0;

if (argc < 2){ /* check for valid number of command-line arguments */
  fprintf(stderr, " %s: Error : Try Executable -h for help \n",argv[0]);
  return 1;
}

while ((option = getopt(argc, argv,"hn:c:")) != -1) {
  switch (option) {
   case 'h' :
	   printf("Usage executable -n {no. of child processes} -c {no. of characters for nchar}\n");
	   return 1;
	   break;
   case 'n' : n = atoi(optarg);
	   break;
   case 'c' : nchars = atoi(optarg);
	   break;
   default:
   //displaying error message as per the required format with executable name
	   fprintf(stderr, "%s: ",argv[0]);
	   perror(" Error: Invalid option");
	   abort();
 }
}
if(n < 1 || nchars < 1)
{
       fprintf(stderr, "%s : Error: Usage executable -n {no. of child processes} -c {no. of characters for nchar}\n",argv[0]);
	return 1;
}


char my_buf[nchars];

for(i = 1; i < n; i++)
{
  if (childpid = fork())
   break;
}
//loop to get input character by character
for(j=0;j<nchars;j++)
{
	printf("Enter a character : \n");
	scanf("%c",&my_buf[j]);
}
my_buf[nchars]='\0';

fprintf(stderr, "process ID:%ld my_buf:%s \n", (long)getpid(),my_buf);

return 0;
}


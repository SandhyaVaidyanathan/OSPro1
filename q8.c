#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (int argc, char *argv[]) {
pid_t childpid = 0;
int i, n,j;

if (argc != 2)
{ /* check for valid number of command-line arguments */
	printf(stderr, "Usage: %s processes\n", argv[0]);
	return 1;
}
n = atoi(argv[1]);

char my_buf[n],nchars[n];

fared (first use in this function)
 scanf("%c",&mybuf[i]);
(i = 1; i < n; i++)
{
//if (childpid = fork())
//break;

printf("Enter a character  %d : \n",i-1);
scanf("%c",&my_buf[i-1]);
}
my_buf[n]='\0';

//strcpy(nchars,my_buf);

for (j =0; j<n ;j++)
	printf("%c\n",nchars[j]);
return 0;
}

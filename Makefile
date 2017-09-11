all: my_prog my_prog_q4 my_prog_q6 my_prog_q7
my_prog: pro1.c
	gcc -o my_prog  pro1.c
my_prog_q4: p1q4.c
	gcc -o my_prog_q4 p1q4.c
my_prog_q6: p1q6.c
	gcc -o my_prog_q6 p1q6.c
my_prog_q7: p1q7.c
	gcc -o my_prog_q7 p1q7.c

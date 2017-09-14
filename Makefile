all: my_prog my_prog_q4 my_prog_q5 my_prog_q6 my_prog_q7 my_prog_q8
my_prog: p1q1.c
	gcc -o my_prog  p1q1.c
my_prog_q4: p1q4.c
	gcc -o my_prog_q4 p1q4.c
my_prog_q5: p1q5.c
	gcc -o my_prog_q5 p1q5.c
my_prog_q6: p1q6.c
	gcc -o my_prog_q6 p1q6.c
my_prog_q7: p1q7.c
	gcc -o my_prog_q7 p1q7.c
my_prog_q8: p1q8.c
	gcc -o my_prog_q8 p1q8.c

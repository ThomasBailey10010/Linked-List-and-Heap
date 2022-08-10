pa3: pa3.o init.o parse.o print.o insert.o remove.o
	gcc -g -o pa3 pa3.c init.c parse.c print.c insert.c remove.c

pa3.o: pa3.c lists.h
	gcc -g -c pa3.c

init.o: init.c lists.h
	gcc -g -c init.c

parse.o: parse.c lists.h
	gcc -g -c parse.c

print.o: print.c lists.h
	gcc -g -c print.c

insert.o: insert.c lists.h
	gcc -g -c insert.c

remove.o: remove.c lists.h
	gcc -g -c remove.c

clean:
	rm pa3 pa3.o init.o parse.o print.o insert.o remove.o

files = main.c \
	lib/util/prime/prime.c \
	lib/solutions/p001.c \
	lib/solutions/p002.c \
	lib/solutions/p010.c

euler : $(files)
	cc -I include -o euler $(files)

clean :
	rm euler

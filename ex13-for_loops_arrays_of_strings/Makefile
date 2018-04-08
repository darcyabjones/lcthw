CFLAGS=-Wall -g

%: %.c
	cc ${CFLAGS} $< -o $@ 

clean:
	find . -executable -type f -exec rm {} \;

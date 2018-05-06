CFLAGS=-Wall -g -DNDEBUG
# Remove NDEBUG to disable debug logging

%: %.c
	cc ${CFLAGS} $< -o $@ 

clean:
	find . -executable -type f -exec rm {} \;

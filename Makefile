LDLIBS += -lpcap

all: simple2

simple2: simple2.c

clean:
	rm -f simple2 *.o

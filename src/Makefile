TARGETS=test1 test2

CC=${CROSS_COMPILE}gcc
LD=${CROSS_COMPILE}gcc
CFLAGS=-fPIC 
LIBS=-lpthread -ldl

ifeq (${ARCH},arm)
CFLAGS=-pie -fPIE
LIBS=
endif

ifeq (${ARCH},arm64)
CFLAGS=-pie -fPIE
LIBS=
endif

CFLAGS += -g -Wall -DDEBUG -I./
LDFLAGS +=

all: $(TARGETS)

test1: 2.4.3-MaxSubSequenceSum.o
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LIBS)

test2: 2.4.4-Pow.o

	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LIBS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGETS)

#define the C compiler to use
CC 			= gcc

# define compiler flags
CFLAGS 		= -std=c11 -Wall -fmax-errors=10 -Wextra

#define library paths in addition to usr/lib
LFLAGS		=

#define the libraries to be used
LIBS 		=

# define the object files that this project needs
OBJFILES	= program.o stats.o

#define the name of the executable
MAIN 		= program

#dont touch below

all: $(MAIN)

$(MAIN): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJFILES)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean: 
	rm -f $(OBJFILES) $(MAIN)
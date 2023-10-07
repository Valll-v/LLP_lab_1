.PHONY: all clean

CC = gcc

BUILDDIR = ./build
SRCDIR = ./src
INCDIR = ./include
OBJECTS = $(BUILDDIR)/db_communication.o \
		  $(BUILDDIR)/main.o

MAIN_OBJ = main

INC += -I$(INCDIR)

COMPILE = $(CC) $(INC) -c "$<" -o "$@"
LINK=$(CC) -o "$@"

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	$(COMPILE)

all: $(MAIN_OBJ)

$(MAIN_OBJ): $(OBJECTS)
	$(LINK) $(OBJECTS)

clean:
	rm -rf $(BUILDDIR)/*
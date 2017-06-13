CC=gcc
FLAGS=
FILES=main.c argument.c extract_data.c
OBJECTS=$(FILES:.cpp=.o)
EXECUTABLE=exe

all: $(FILES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(FLAGS) $< -o $@



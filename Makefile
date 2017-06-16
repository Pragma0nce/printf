CC=gcc
FLAGS=-I.
FILES=main.c argument.c extract_data.c process_data.c base_conversion.c
OBJECTS=$(FILES:.cpp=.o)
EXECUTABLE=exe

all: $(FILES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) libft.a -o $@ 

.cpp.o:
	$(CC) $(FLAGS) $< -o $@



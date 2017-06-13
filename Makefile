CC=gcc
FLAGS=-Wall -Werror -Wextra
FILES=main.c argument.c extract_data.c

debug:
	$(CC) $(FILES)

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-This reads text file and print to STDOUT.
 * @filename: the text file that is being read
 * @letters: the number of letters read
 * Return: k- the number of bytes read and printed
 *        0 if the function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *top;
	ssize_t fx;
	ssize_t k;
	ssize_t n;

	fx = open(filename, O_RDONLY);
	if (fx == -1)
		return (0);
	top = malloc(sizeof(char) * letters);
	n = read(fx, top, letters);
	k = write(STDOUT_FILENO, top, n);

	free(top);
	close(fx);
	return (k);
}

#include "main.h"

/**
 * create_file -This function creates a file.
 * @filename: Points to the name of the file to create.
 * @text_content: Points to a string to write to the file.
 * Return: If function fails -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int x, k, lan = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lan = 0; text_content[lan];)
			lan++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(x, text_content, lan);

	if (x == -1 || k == -1)
		return (-1);

	close(x);

	return (1);
}

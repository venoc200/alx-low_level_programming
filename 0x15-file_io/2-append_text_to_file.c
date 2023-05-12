#include "main.h"

/**
 * append_text_to_file - This appends text at the end of a file.
 * @filename: Points to the name of the file.
 * @text_content: String added to the end of the file.
 * Return: If filename is NULL or function fails - -1.
 *         If file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int t, k, lan = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lan = 0; text_content[lan];)
			lan++;
	}

	t = open(filename, O_WRONLY | O_APPEND);
	k = write(t, text_content, lan);

	if (t == -1 || k == -1)
		return (-1);

	close(t);

	return (1);
}

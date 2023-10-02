#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: the file name
 * @text_content: A string to add at the end of the file
 *
 * Return: -1 The function fails or filename is NULL
 *         -1 If the file does not exist
 *         1 Otherwise
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int of, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	of = open(filename, O_WRONLY | O_APPEND);
	w = write(of, text_content, length);

	if (of == -1 || w == -1)
		return (-1);

	close(of);

	return (1);
}

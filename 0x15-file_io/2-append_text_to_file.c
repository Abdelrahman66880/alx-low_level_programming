#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;
int i;
if (filename == NULL)
{
return (0);
}
if (text_content == NULL)
{
return (0);
}
for (i = 0; text_content[i] != '\0'; i++)
{
len++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}

#include "main.h"
/**
 * create_file - creates file
 * @filename: filename
 * @text_content: content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
int filee, r, i;
if (filename == NULL)
return (-1);
filee = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (filee == -1)
return (-1);
if (text_content)
{
for (i = 0; text_content[i] != '\0'; i++)
;
r = write(filee, text_content, i);
}
if (r == -1)
return (-1);
close(filee);
return (1);
}

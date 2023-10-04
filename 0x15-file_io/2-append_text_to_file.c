#include "main.h"
/**
 * append_text_to_file - appends
 * @filename: filename
 * @text_content: text content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, r, i;
if (filename == NULL)
return (-1);
fd = open(filename, O_APPEND | O_WRONLY);
if (fd == -1)
return (-1);
if (!text_content)
{
close(fd);
return (1);
}
else
{
for (i = 0; text_content[i] != '\0'; i++)
;
r = write(fd, text_content, i);
}
if (r == -1 || r != i)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}

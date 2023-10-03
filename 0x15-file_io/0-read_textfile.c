#include "main.h"
/**
 * read_textfile - reads and prints
 * @filename: pointer to file
 * @letters:  number of letters it should read and print
 * Return: number of actual letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int filen;
char *ch;
ssize_t rd, wrt;
if (filename == NULL)
return (0);
filen = open(filename, O_RDONLY);
if (filen == -1)
return (0);
ch = malloc(sizeof(char) * letters);
if (ch == NULL)
return (0);
rd = read(filen, ch, letters);
if (rd == -1)
{
free(ch);
close(filen);
return (0);
}
wrt = write(STDOUT_FILENO, ch, rd);
if (wrt == -1)
{
free(ch);
close(filen);
return (0);
}
close(filen);
return(rd);
}

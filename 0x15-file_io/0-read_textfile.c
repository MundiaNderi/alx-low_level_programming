#include "main.h"

/**
* read_textfile - reads a text file and prints to POSIX stdout.
* @filename: name of the file that's read
* @letters: the number of letters read and printed.
* Return: the actual number of letters read and printed, 0 if file cannot
* be opened or read, 0 if @filename is NULL, 0 if write fails or doesn't
* write the expected amount of bytes.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fild = 0, chk = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	fild = open(filename, O_RDONLY);
	if (fild < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	chk = read(fild, buffer, letters);
	chk = write(STDOUT_FILENO, buffer, chk);
	if (chk < 0)
		return (0);

	close(fild);
	free(buffer);
	return (chk);
}

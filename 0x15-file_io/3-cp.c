#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check97 - A function that checks for the corret number of arguments
 * @argc: The argument count
 *
 * Return: void
*/

void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - A function that checks that file_From exits and can be read
 * @file: The file_from name
 * @check: Checks whether its either true or false
 * @fd_to: The file descriptor of file_to
 * @fd_from: The file descriptior of file_from
 *
 * Return: void
 */

void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check99 - A function that checks that file_to was created &/
 * can be written to
 * @file: The file_to name
 * @check: Checks whether its either true or false
 * @fd_to: The file descriptor of file_to
 * @fd_from: The file descriptior of file_from
 *
 * Return: void
*/

void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check100 - A function that checks that file descriptors were close
 * properly
 * @check: Checks whether its wither true or false
 * @fd: The file descriptor
 *
 * Return: void
*/

void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - A program that copies the content of a file to another file
 * @argc: The number of arguments passed
 * @argv: The array of pointers to the arguments
 *
 * Return: (0) on success
*/

int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fd_to, argv[2], fd_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		check98(lenr, argv[1], fd_from, fd_to);
		lenw = write(fd_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check99(lenw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE 128

/**
 * print_error - Print error message to stderr and exit with failure status
 * @msg: error message to print
 */
void print_error(char *msg)
{
	size_t len = 0;
	char *p = msg;

	while (*p++)
		len++;

	write(STDERR_FILENO, msg, len);
	exit(98);
}

/**
 * print_header_info - Read and print ELF header info
 * @fd: file descriptor of ELF file
 */
void print_header_info(int fd)
{
	char buff[BUFF_SIZE];
	ssize_t nread;
	int i;

	if (lseek(fd, 0, SEEK_SET) == -1)
		print_error("lseek failure\n");

	nread = read(fd, buff, BUFF_SIZE);
	if (nread == -1)
		print_error("read failure\n");

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x ", buff[i]);
	printf("\n");

	printf("  Class:                 %s\n", buff[4] == 1 ? "ELF32" : "ELF64");
	printf("  Data:        %s\n", buff[5] == 1 ? "little endian" : "big endian");
	printf("  Version:               %d\n", buff[6]);
	printf("  OS/ABI:                %d\n", buff[7]);
	printf("  ABI Version:           %d\n", buff[8]);

	printf("  Type:                  %d\n", (buff[16] << 8) + buff[17]);

	printf("  Entry point address:               0x");
	for (i = 0; i < ((buff[4] == 1) ? 4 : 8); i++)
		printf("%02x", buff[24 + i]);
	printf("\n");
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename\n");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("open failure\n");

	print_header_info(fd);

	if (close(fd) == -1)
		print_error("close failure\n");

	return (0);
}


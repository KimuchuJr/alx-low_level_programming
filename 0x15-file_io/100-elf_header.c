#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Argument count
 *
 * @argv: Command line arguments
 *
 * Description: A program that displays information contained in ELF header
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr *headerf;
	ssize_t read_cnt;
	int j, close_sts;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	headerf = malloc(sizeof(Elf64_Ehdr));
	if (headerf == NULL)
		exit(98);

	j = open(argv[1], O_RDONLY);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Cannot open file: %s\n", argv[1]);
		exit(98);
	}

	read_cnt = read(j, headerf, sizeof(Elf64_Ehdr));
	if (read_cnt == -1)
	{
		dprintf(STDERR_FILENO, "Cannot read file: %s\n", argv[1]);
		exit(98);
	}
	check_file(headerf);
	process_info(headerf);

	free(headerf);
	close_sts = close(j);
	if (close_sts == -1)
	{
		dprintf(STDERR_FILENO, "Cannot close file descriptor\n");
		exit(98);
	}

	return (0);
}

/**
 * check_file - Checks whether a file is ELF
 *
 * @headerf: ELF64 header
 *
 */
void check_file(Elf64_Ehdr *headerf)
{
	int g;

	if (headerf->e_ident[0] == 0x7f && headerf->e_ident[1] == 'E' &&
		headerf->e_ident[2] == 'L' && headerf->e_ident[3] == 'F')
	{
		printf("ELF Header:\n  Magic:   ");
		for (g = 0; g < 16; ++g)
			printf("%02x ", headerf->e_ident[g]);
		printf("\n");

	}
	else
	{
		dprintf(STDERR_FILENO, "Not an ELF file!!\n");
		exit(98);
	}
}

/**
 * process_info - A function call
 *
 * @headerp: ELF head pointer
 *
 */
void process_info(Elf64_Ehdr *headerp)
{
	class(headerp);
	data(headerp);
	version(headerp);
	os_abi(headerp);
	abi_version(headerp);
	type(headerp);
	entry_point(headerp);
}

/**
 * class - Print binary
 *
 * @headerp: ELF head pointer
 *
 */
void class(Elf64_Ehdr *headerp)
{
	printf("  %-35s", "Class:");
	if (headerp->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("ELF32\n");
}

/**
 * data - Data encoding the information
 *
 * @headerp: ELF head pointer
 *
 */
void data(Elf64_Ehdr *headerp)
{
	printf("  %-35s", "Data:");
	if (headerp->e_ident[EI_DATA] == ELFDATANONE)
		printf("Unknown data format\n");
	else if (headerp->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else
		printf("2's complement, big endian\n");
}

/**
 * version - Version number of the ELF
 *
 * @headerp: ELF head pointer
 *
 */
void version(Elf64_Ehdr *headerp)
{
	printf("  %-35s", "Version:");
	if (headerp->e_ident[EI_VERSION] == EV_CURRENT)
		printf("1 (current)\n");
	else
		printf("0 (invalid)\n");
}

/**
 * os_abi - os and ABI of the file target
 *
 * @headerp: ELF pointer head
 *
 */
void os_abi(Elf64_Ehdr *headerp)
{
	printf("  %-35s", "OS/ABI:");
	switch (headerp->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded)\n");
			break;
		default:
			break;
	}
}

/**
 * abi_version - ABI version
 *
 * @headerp: ELF head pointer
 *
 */
void abi_version(Elf64_Ehdr *headerp)
{
	printf("  %-35s", "ABI Version");
	if (headerp->e_ident[EI_ABIVERSION] == 0)
		printf("0\n");
	else
		printf("1\n");
}

/**
 * type - File type
 *
 * @headerp: ELF head pointer
 *
 */
void type(Elf64_Ehdr *headerp)
{
	printf("  %-35s", "Type:");
	switch (headerp->e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		default:
			break;
	}
}

/**
 * entry_point - Virtual address
 *
 * @headerp: Elf head pointer
 *
 */
void entry_point(Elf64_Ehdr *headerp)
{
	printf("  %-35s", "Entry point address:");
	if (headerp->e_entry)
		printf("0x%x\n", (unsigned int)headerp->e_entry);
	else
		printf("0\n");
}

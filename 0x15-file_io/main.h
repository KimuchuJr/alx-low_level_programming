#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
ssize_t read_textfile(const char *fn, size_t ltrs);
int create_file(const char *fn, char *text_content);
int append_text_to_file(const char *fn, char *text_content);

void check_file(Elf64_Ehdr *headerf);
void process_info(Elf64_Ehdr *headerp );
void class(Elf64_Ehdr *headerp);
void data(Elf64_Ehdr *headerp);
void version(Elf64_Ehdr *headerp);
void os_abi(Elf64_Ehdr *headerp);
void abi_version(Elf64_Ehdr *headerp);
void type(Elf64_Ehdr *headerp);
void entry_point(Elf64_Ehdr *headerp);
#endif

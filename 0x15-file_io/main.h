#ifndef _MAIN_H_
#define _MAIN_H_

ssize_t read_textfile(const char *flnm, size_t ltrs);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);

#endif

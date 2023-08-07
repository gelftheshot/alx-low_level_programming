#include "main.h"
/**
*
*
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int op,re,wr;

    char *buff;
    if (filename == NULL){
        return (0);
    }

    op = open(filename,O_RDWR);
    if(op == -1)
        return (0);
    buff = malloc(letters);
    re = read(op, buff,letters);
    wr = write(1, buff, re);
        if(re == -1 || wr == -1 || re != wr){
        free(buff);
        return(0);
    }
    free(buff);
    return (wr);

}
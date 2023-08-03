#include "main.h"
/**
 *
 *
 */

int get_endianness(void);{
    int num = 1;
    char* byte_ptr = (char*) & num;
    return (int)(*byte_ptr);

#include <stdio.h>

unsigned int convertEndian(unsigned int num)
{
    return ((num >> 24) & 0xff) |
           ((num << 8) & 0xff0000) |
           ((num >> 8) & 0xff00) |
           ((num << 24) & 0xff000000);
}

int main()
{
    unsigned int num = 0x12345678;
    printf("Original: 0x%x\n", num);
    printf("Converted: 0x%x\n", convertEndian(num));

    return 0;
}
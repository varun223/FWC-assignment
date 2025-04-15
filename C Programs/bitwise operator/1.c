#include <stdio.h>

int main()
{
    unsigned int num;
    int bit;

    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Enter bit position (0-31): ");
    scanf("%d", &bit);

    // Set bit
    unsigned int set = num | (1 << bit);
    printf("After setting bit %d: %u\n", bit, set);

    // Clear bit
    unsigned int clear = num & ~(1 << bit);
    printf("After clearing bit %d: %u\n", bit, clear);

    // Toggle bit
    unsigned int toggle = num ^ (1 << bit);
    printf("After toggling bit %d: %u\n", bit, toggle);

    return 0;
}
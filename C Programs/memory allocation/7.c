#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replaceSubstring(char *mainStr, char *oldSub, char *newSub)
{
    // Find the length of all strings
    int mainLen = strlen(mainStr);
    int oldLen = strlen(oldSub);
    int newLen = strlen(newSub);

    // Count occurrences of oldSub in mainStr
    int count = 0;
    char *temp = mainStr;
    while(temp = strstr(temp, oldSub)) 
    {
        count++;
        temp += oldLen;
    }
    
    // Calculate new length needed
    int newSize = mainLen + count * (newLen - oldLen) + 1;
    
    // Allocate memory for new string
    char *result = (char*)malloc(newSize * sizeof(char));
    if(result == NULL) {
        return NULL;
    }
    
    // Perform replacement
    char *current = mainStr;
    char *output = result;
    while(*current) {
        if (strstr(current, oldSub) == current)
        {
            strcpy(output, newSub);
            output += newLen;
            current += oldLen;
        }
        else
        {
            *output++ = *current++;
        }
    }
    *output = '\0';
    
    return result;
}

int main()
{
    char mainStr[] = "kernel";
    char oldSub[] = "e";
    char newSub[] = "xxx";

    char *result = replaceSubstring(mainStr, oldSub, newSub);
    if (result != NULL)
    {
        printf("Original: %s\n", mainStr);
        printf("Modified: %s\n", result);
        free(result);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}
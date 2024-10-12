#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20];
    fgets(str1, sizeof(str1), stdin);

    // Remove the newline character from str1
    str1[strcspn(str1, "\n")] = '\0';

    // Reverse the string using strrev
    strcpy(str2, strrev(str1));

    int d = strcmp(str1, str2);

    if (d == 0)
        printf("Palindrome. ");
    else
        printf("Not Palindrome. ");

    return 0;
}

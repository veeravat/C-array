#include <stdio.h>
#include <string.h>

int check_palindrome(char *input);
void main()
{
    char input[100];

    printf("Please input data : ");
    scanf("%s", &input);

    if (check_palindrome(input))
        printf("'%s' is palindrome",input);
    else
        printf("'%s' is not palindrome",input);

    getch();
}

int check_palindrome(char *input)
{
    char reversed[100];
    strcpy(reversed, input);
    strrev(reversed);

    if (strcmp(input, reversed) == 0)
        return 1;
    else
        return 0;
}

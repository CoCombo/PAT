#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLENGTH 80

int main()
{

    int record = 0;
    char input[1000][MAXLENGTH + 1];

    while( scanf("%s", input[record++]) && getchar() != '\n' );

    for(int i = record - 1; i > 0; i--)
    {
        printf("%s ", input[i]);
    }
    printf("%s", input[0]);
    return 0;
}
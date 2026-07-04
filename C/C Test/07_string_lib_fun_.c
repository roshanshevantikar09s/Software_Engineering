#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Length = %d", strlen(str));

   return 0;
} 
 

int main()
{
   char str1[100], str2[100];

    printf("Enter a string: ");
    gets(str1);

    strcpy(str2, str1);

    printf("Copied string = %s", str2);

   return 0;
}


int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
 

#include <stdio.h>
#include <string.h>



int main()
{

    char str[7];
    char* a,b,ptr;
    scanf("%[^\n]s",&str);

    ptr=strtok(str," ");
    a=ptr;

    ptr=strtok(NULL," ");
    b=ptr;

    printf("%s",str);
    


    return 0;
}
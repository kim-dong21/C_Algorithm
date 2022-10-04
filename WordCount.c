#include <stdio.h>
#include <string.h>



int main()
{
    char str[1000001]="";
    int count=0;

    scanf("%[^\n]s",&str);
    char* ptr=strtok(str," ");

    while(ptr!=NULL)
    {
        
        ptr=strtok(NULL," ");
        count++;
        
    }
    printf("%d",count);
    
}
#include <stdio.h>
#include <string.h>

int main()
{   
    int count;
    int a;
    char S[30]="";

    scanf("%d",&count);

    for(int c=0;c<count;c++)
    {
        scanf("%d %s",&a,&S);

    
        for(int i=0;i<strlen(S);i++)
        {
            for(int j=0;j<a;j++)
            {
                printf("%c",S[i]);
            
            }

        }
        printf("\n");

    }
    return 0;
}
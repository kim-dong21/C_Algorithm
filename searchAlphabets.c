#include <stdio.h>
#include <string.h>

int main()
{
    char S[100]="";
    scanf("%s",&S);


    for(int j=97;j<123;j++)
    {
        for(int i=0;i<strlen(S);i++)
        {
            if(S[i]==j)
            {
                printf("%d ",i);
                break;
            }else if(i==(strlen(S)-1))
            {
                printf("-1 ");
            }

        }
            
            
    }
    
}
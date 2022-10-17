#include <stdio.h>
#include <string.h>


int main()
{
    char num[15];
    int ans,len=0;

    scanf("%s",&num);

    while(num[len]) len++;
    

    for(int i=0;i<len;i++)
    {
        
        if(num[i]<68) ans+=3;
        else if(num[i]<71) ans+=4;
        else if(num[i]<74) ans+=5;
        else if(num[i]<77) ans+=6;
        else if(num[i]<80) ans+=7;
        else if(num[i]<84) ans+=8;
        else if(num[i]<87) ans+=9;
        else if(num[i]<91) ans+=10;
        

    } 


    printf("%d",ans);
    return 0;


}
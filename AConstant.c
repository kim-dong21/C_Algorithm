#include <stdio.h>
#include <string.h>

int main()
{
    char name[10];
    char buff[10];
    int a,b;
    scanf("%[^\n]s",&name);

    int n=strlen(name);
    
    //문자열 뒤집기
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        buff[i]=name[j];
    }

    printf("%s\n",buff);
    char* ptr=strtok(buff," ");
    a=(int)ptr;
    ptr=strtok(buff," ");
    b=(int)ptr;

    if(a>b) printf("%d\n",a);
    else printf("%d\n",b);


    return 0;
}
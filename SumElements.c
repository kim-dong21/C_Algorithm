#include <stdio.h>


int main()
{
    int count=0;
    scanf("%d",&count);

    char numbers[100];
    scanf("%s",numbers);
    
    int answer=0;
    for(int i=0;i<count;i++)
    {
        
        answer+=(numbers[i]-'0');
        
    }

    printf("%d",answer);

}
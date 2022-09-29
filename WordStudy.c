#include <stdio.h>
#include <string.h>



int main()
{
    char str[1000005];
    int arr[26];
    int max=0;
    char ans;

    scanf("%s",&str);
    int num=strlen(str);

    for(int i=0;i<num;i++)
    {
        if(str[i]>='a') arr[str[i]-'a']++;
        else arr[str[i]-'A']++;
    }

    for(int j=0;j<26;j++)
    {
        //printf("%d ",arr[j]);
        if(arr[j]==max)
        {
            ans='?';
        }else if(arr[j]>max)
        {
            max=arr[j];
            ans=65+j;
        }
    }

    printf("%c",ans);

    return 0;

}
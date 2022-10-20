#include <stdio.h>
#include <string.h>


int main()
{

    char c[][4]={"c=","c-","dz=","d-","lj","nj","s=","z="};
    char str[101]="";


    scanf("%s",str);//문자열 입력 최대 100자
    int cnt=strlen(str);
    int ans=cnt;
    


    for(int i=0;i<cnt;i++)
    {
        if(str[i]=='='){
            
            if(str[i-1]=='c') ans--;
            else if(str[i-1]=='s') ans--;
            else if(str[i-1]=='z'){
                ans--;
                if(str[i-2]=='d') ans--;
            }
        }

        if(str[i]=='-'){
            
            if(str[i-1]=='c') ans--;
            else if(str[i-1]=='d') ans--;
        }

        if(str[i]=='j'){
            
            if(str[i-1]=='l') ans--;
            else if(str[i-1]=='n') ans--;
        }


    }
    

    printf("%d",ans);


    return 0;
}
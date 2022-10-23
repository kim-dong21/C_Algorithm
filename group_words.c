#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){

    int cnt=0,num=0,ans=0;
    char words[101]={""};
    scanf("%d",&num);
    ans=num;

    for(int i=0;i<num;i++)
    {
        
        scanf("%s",words);
        cnt=strlen(words);

        bool check[26]={false};
        // check[words[0]-'a']=true;
        
        for(int j=0;j<cnt;j++)
        {
            if(words[j]==words[j-1]) continue;

            else if(words[j]!=words[j-1] && check[words[j]-'a']==true) { ans--; break;}
            
            else check[words[j]-'a']=true;


        }



    }
    printf("%d",ans);
    
    
}
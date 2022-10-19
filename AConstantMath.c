#include <stdio.h>


int main()
{
    int a=0,b=0,c=0,d=0,ans=0;

    scanf("%d %d",&a,&b);

    c=a%100;
    d=b%100;

    if(c%10 > d%10) {//123 중에서 3 비교,두값 중 더 큰 값이 선택
        ans+= ((c%10)*100);//3을 300으로
        ans+= ((c/10)*10);//23을 20으로
        ans+= a/100;//100을 1로
    
    }
    else if(c%10 < d%10) {
        
        ans+= ((d%10)*100);
        ans+= ((d/10)*10);
        ans+= b/100;

    }
    else{

        ans+=(c%10)*100;

        if(c>d) {
            
            ans+=(c/10)*10;
            ans+=a/100;

        }
        else if(c<d) {
            
            ans+=(d/10)*10;
            ans+=a/100;    
        }
        else{

            ans+=(c/10)*10;

            if(a/100 > b/100) ans+= a/100;
            else if(a/100 < b/100) ans+= b/100;

        }

    }
    
    printf("%d",ans);

    return 0;
}
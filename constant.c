#include <stdio.h>
#include <string.h>



int f(int x){
    
    int ans=0;
    int i=x;
    while(i){
        ans=ans*10 + i%10;

        i/=10;
    }

    return ans;

}


int main()
{
    int a=0,b=0;

    scanf("%d %d",&a,&b);

    a=f(a);
    b=f(b);

    a>b ? printf("%d",a) : printf("%d",b);

    return 0;


}
#include <stdio.h>
#include <string.h>

#define SIZE 10000

int main()
{
    int count=0;
    int stack[SIZE];

    char a[5]="";
    int b=0;
    
    char s1[30]="the little prince";

    char *ptr=strtok(s1," ");

    while(ptr!=NULL)
    {
        printf("%s\n",ptr);
        ptr=strtok(NULL," ");

    }
    


    return 0;    
}



// push X: 정수 X를 스택에 넣는 연산이다.
// pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
// size: 스택에 들어있는 정수의 개수를 출력한다.
// empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
// top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.


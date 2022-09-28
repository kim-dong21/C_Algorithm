#include <stdio.h>
#include <math.h>

// 이석원은 조규현과 백승환에게 상대편 마린(류재명)의 위치를 계산하라는 명령을 내렸다. 
// 조규현과 백승환은 각각 자신의 터렛 위치에서 현재 적까지의 거리를 계산했다.

// 조규현의 좌표 (x1, y1)와 백승환의 좌표 (x2, y2)가 주어지고, 
// 조규현이 계산한 류재명과의 거리 r1과 백승환이 계산한 류재명과의 거리 r2가 주어졌을 때, 
// 류재명이 있을 수 있는 좌표의 수를 출력하는 프로그램을 작성하시오.

// 첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 다음과 같이 이루어져 있다.
// 한 줄에 x1, y1, r1, x2, y2, r2가 주어진다. x1, y1, x2, y2는 -10,000보다 크거나 같고, 
// 10,000보다 작거나 같은 정수이고, r1, r2는 10,000보다 작거나 같은 자연수이다.

// -10000 <= x1,y2,x2,y2 <= 10000       r1,r2 <= 10000



int square(int i,int j)
{
    int answer=i-j;
    return answer*answer;
    
}

int main()
{   
    
    int count,result=0;
    int x1,y1,x2,y2,r1,r2=0;
    double distance,subtract;
    

    scanf("%d",&count);


    while (count--)
    {
        
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        distance=(sqrt((square(x1,x2)+square(y1,y2))));
        subtract= r1 > r2 ? r1-r2 : r2-r1;

        if(distance>r1+r2) result= 0; // 두 원의 중심 간 거리가 두 반지름을 더한 값 보다 클때
        else if(r1==r2&&distance==0) result= -1; //
        else if(distance==r1+r2||distance==subtract) result= 1;
        else if(distance<r1+r2&&(subtract<distance)) result= 2;
        else if(distance==0 && r1!=r2) result= 0;
        else result=0;
        printf("%d\n",result);
    }
    
    



    return 0;
}
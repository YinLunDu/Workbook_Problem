#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;

int main()
{
    int num[101][5],i,j,x,c;
    srand(time(NULL));
    for (i=1;i<=100;i++)
        for (j=1;j<=3;j++)
            num[i][j]=rand()%10;


    for (i=1;i<=100;i++) {
        x=num[i][1]*100+num[i][2]*10+num[i][3];
        c=0;
        for (j=1;j<=100;j++)
            if (num[j][1]*100+num[j][2]*10+num[j][3]>x) c++;
        num[i][4]=c+1;
    }
    for (i=1;i<=100;i++)
        printf("%2d %2d %2d %3d\n",num[i][1],num[i][2],num[i][3],num[i][4]);
    return 0;
}

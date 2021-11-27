#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
     int n,x,i,j,num[4],t,num2[4],A,B;
     n=rand()%9000+1000;
     num[0]=n/1000%10;
     num[1]=n/100%10;
     num[2]=n/10%10;
     num[3]=n%10;
     do {
        t=1;
        for (i=0;i<=3;i++)
            for (j=0;j<=3;j++)
                if ((num[i]==num[j])&&(i!=j))
                    t=0;
        if (t==1) break;
        else {
         n=rand()%9000+1000;
         num[0]=n/1000%10;
         num[1]=n/100%10;
         num[2]=n/10%10;
         num[3]=n%10;
        }
     } while (1);

     do {
         cin >> x;
         num2[0]=x/1000%10;
         num2[1]=x/100%10;
         num2[2]=x/10%10;
         num2[3]=x%10;
         A=0;B=0;
         for (i=0;i<=3;i++)
             for (j=0;j<=3;j++) {
                 if ((num[i]==num2[j])&&(i==j))
                     A++;
                 if (num[i]==num2[j])
                     B++;
             }
         cout << A << "A" << B-A << "B\n";
         if (A==4) break;
     } while (1);
     return  0;
}

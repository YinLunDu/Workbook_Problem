#include <iostream>

using namespace std;

int main()
{
    long n,i;
    long long int num[10001];
    n=29;
    num[1]=0;
    num[2]=1;
    for (i=3;i<=n;i++)
        num[i]=num[i-1]+num[i-2];
    cout << num[n];
    return 0;
}

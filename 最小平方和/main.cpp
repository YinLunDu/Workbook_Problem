#include <iostream>

using namespace std;

int main()
{
    int i=0,sum;
    sum=0;
    while (sum<1000) {
        i++;
        sum+=i*i;
    }
    cout << "n=" << i << "大於1000的最小平方和為" << sum;
    return 0;
}

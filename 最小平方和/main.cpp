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
    cout << "n=" << i << "�j��1000���̤p����M��" << sum;
    return 0;
}

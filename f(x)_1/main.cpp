#include <iostream>

using namespace std;

long long f(long long x)
{
    if (x==1) return 0;
    else if (x==2) return 1;
    else return f(x-1)+f(x-2);
}
int main()
{
    cout << f(48);
    return 0;
}

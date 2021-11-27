#include <iostream>

using namespace std;

int c(int n)
{
    if (n==1) return 2;
    else return c(n-1)+(n*n-n+2)/2;
}

int main()
{
    int n;
    cout << "n：";
    cin >> n;
    cout << "最多空間：" << c(n) << endl;
    return 0;
}

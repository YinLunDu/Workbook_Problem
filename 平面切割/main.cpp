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
    cout << "n�G";
    cin >> n;
    cout << "�̦h�Ŷ��G" << c(n) << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "�Τ��G";
    cin >> n;
    cout << "���O�G";
    if (n<=10) cout << n*7.35;
    else if (n<=30) cout << n*9.45-21;
    else if (n<=50) cout << n*11.55-84;
    else cout << n*12.075-110.25;
    return 0;
}

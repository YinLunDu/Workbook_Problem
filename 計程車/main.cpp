#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "�п�J���{�ơH";
    cin >> x;
    cout << "�һݨ��ꬰ";
    if (x<1.5) cout << "70";
    else cout << ((int)((x-1.5)/0.25)+1)*5+70;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "�~���G";
    cin >> n;
    cout << n;
    if (((n%4==0)&&(n%100!=0))||(n%400==0)) cout << "�O�|�~" << endl;
    else cout << "���O�|�~" << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "請輸入里程數？";
    cin >> x;
    cout << "所需車資為";
    if (x<1.5) cout << "70";
    else cout << ((int)((x-1.5)/0.25)+1)*5+70;
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    cout << "A, B, C�G";
    cin >> a >> b >> c;
    if (b*b-4*a*c>0) cout << (-1*b+sqrt(b*b-4*a*c))/(2*a) << "�P" << (-1*b-sqrt(b*b-4*a*c))/(2*a) << endl;
    else if ((b*b-4*a*c)==0) cout << (-1*b)/(2*a) << "(����)\n";
    else cout << "�L��\n";
    return 0;
}

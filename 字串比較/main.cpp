#include <iostream>

using namespace std;

int main()
{
    string a,b;
    int i;
    cout << "�Ĥ@�Ӧr��G";
    cin >> a;
    cout << "�ĤG�Ӧr��G";
    cin >> b;
    i=0;
    while (a[i]==b[i])
        i++;
    if (a[i]>b[i]) cout << "������G�G1\n";
    if (a[i]<b[i]) cout << "������G�G-1\n";
    return 0;
}

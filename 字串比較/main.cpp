#include <iostream>

using namespace std;

int main()
{
    string a,b;
    int i;
    cout << "第一個字串：";
    cin >> a;
    cout << "第二個字串：";
    cin >> b;
    i=0;
    while (a[i]==b[i])
        i++;
    if (a[i]>b[i]) cout << "比較結果：1\n";
    if (a[i]<b[i]) cout << "比較結果：-1\n";
    return 0;
}

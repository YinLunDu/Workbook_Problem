#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "年分：";
    cin >> n;
    cout << n;
    if (((n%4==0)&&(n%100!=0))||(n%400==0)) cout << "是閏年" << endl;
    else cout << "不是閏年" << endl;
    return 0;
}

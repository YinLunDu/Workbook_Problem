#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "請輸入台灣時間：";
    cin >> n;
    cout << "美國時間為";
    cout << (n+13)%24;
    return 0;
}

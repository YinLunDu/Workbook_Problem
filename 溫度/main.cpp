#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double t;
    cout << "請輸入華氏溫度？";
    cin >> t;
    cout << "轉換成攝氏溫度為";
    printf("%.4f\n",(t-32)*5/9);
    return 0;
}

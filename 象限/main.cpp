#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "請輸入該點的X座標：";
    cin >> x;
    cout << "請輸入該點的Y座標：";
    cin >> y;
    if (x==0||y==0) cout << "該點在座標軸上";
    else if (x>0&&y>0) cout << "該點在第一象限";
    else if (x<0&&y>0) cout << "該點在第二象限";
    else if (x>0&&y<0) cout << "該點在第三象限";
    else if (x<0&&y<0) cout << "該點在第四象限";
    return 0;
}

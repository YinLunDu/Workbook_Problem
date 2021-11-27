#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i,n[40],ave=0,x;
    for (i=0;i<=39;i++) {
        n[i]=rand()%101;
        cout << "第" << i << "個是" << n[i] << endl;
        ave+=n[i];
    }
    ave/=40;
    x=0;
    for (i=0;i<=39;i++)
        if (n[i]>ave)
            x++;
    cout << "高於平均：" << x << endl;
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

struct stu
{
    int num;
    int g1;
    int g2;
    int g3;
    float ave;
};

int main()
{
    int i;
    struct stu a[41];
    for (i=1;i<=40;i++) {
        a[i].num=i;
        a[i].g1=rand()%41+60;
        a[i].g2=rand()%41+60;
        a[i].g3=rand()%41+60;
        a[i].ave=(a[i].g1+a[i].g2+a[i].g3)/3.0;
    }
    for (i=1;i<=40;i++) {
        cout << a[i].num << "號同學，" << "第一次考試：" << a[i].g1 << " 第二次考試：" << a[i].g2 <<" 第三次考試：" << a[i].g3;
        printf(" 平均：%.1f\n",a[i].ave);
    }
    return 0;
}

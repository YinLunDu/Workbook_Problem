#include <iostream>

using namespace std;

int tree[100001][100],num[100001],h[100001];

int fun(int index)
{
    int i,x,big;
    if (num[index]==0) {
        h[index]=0;
        return 0;
    } else {
        big=0;
        for (i=1;i<=num[index];i++) {
            x=fun(tree[index][i]);
            if (x>big) big=x;
        }
        h[index]=big+1;
        return h[index];
    }
}
int main()
{
    int n,i,j,highest,c[100001],temp;
    long long int s;
    cin >> n;
    for (i=1;i<=n;i++) c[i]=0;
    for (i=1;i<=n;i++) {
        cin >> num[i];
        for (j=1;j<=num[i];j++) {
            cin >> tree[i][j];
            temp=tree[i][j];
            c[temp]++;
        }
    }

    for (i=1;i<=n;i++)
        if (c[i]==0) {
            highest=i;
            break;
        }

    temp=fun(highest);

    s=0;
    for (i=1;i<=n;i++) s+=h[i];
    cout << highest << endl;
    cout << s << endl;
    return 0;
}

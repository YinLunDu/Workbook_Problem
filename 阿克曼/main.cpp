#include <iostream>

using namespace std;

int A(int m, int n)
{
    int x;
    if (m==0) {
        x=n+1;
    }  else if (m>0&&n==0) {
        x=A(m-1,1);
    }  else if (m>0&&n>0) {
        x=A(m-1,A(m,n-1));
    }
    cout << m << " " << n << " ���G�G" << x << endl;
    return x;
}

int main()
{
    int n,m,x;
    cout << "M�G";
    cin >> m;
    cout << "N�G";
    cin >> n;
    x=A(m,n);
    cout << m << " " << n << " ���G�G" << x << endl;
    return 0;
}

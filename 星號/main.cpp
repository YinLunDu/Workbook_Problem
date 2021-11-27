#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    for (i=1;i<=5;i++) {
        for (j=i;j<=4;j++) cout << " ";
        for (k=i;k>=1;k--) cout << "*";
        cout << "\n";
    }
    return 0;
}

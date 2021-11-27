#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,num[10000],i,c,temp;
    cin >> n;
    for (i=0;i<=n-1;i++) cin >> num[i];
    sort(num,num+n);
    for (i=0;i<=n-1;) {
        c=1;temp=num[i];i++;
        while (num[i]==temp) {
            c++;i++;
        }
        cout << temp << " : " << c << " times\n";
    }
    return 0;
}

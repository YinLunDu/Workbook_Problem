#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, s;
    int i,j,n,k;
    getline(cin, str);
    cin >> s;
    n=0;
    for (i=0;i<=str.length()-1;i++) {
        if (str[i]==s[0]) {
            k=i;
            for (j=0;j<=s.length()-1;j++) {
                if (str[k]!=s[j]) break;
                k++;
            }
            if (j==s.length()) n++;
        }
    }
    cout << n;
    return 0;
}

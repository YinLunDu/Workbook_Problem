#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
    int i;
    string s;
    cin >> s;
    for (i=0;i<=s.length()-1;i++) {
        if ('A'<=s[i]&&s[i]<='Z')
            cout << char(tolower(s[i]));
        else
            cout << s[i];
    }
    return 0;
}

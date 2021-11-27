#include <iostream>
#include <cstring>

using namespace std;

int num[100],top;
void push(int x)
{
    num[top]=x;
    top++;
}
int pop()
{
    if (top==0) return -1;
    else {
        top--;
        return num[top];
    }
}
int main()
{
    string s;
    int n;
    top=0;
    while (cin >> s) //Åª¤@¦æ¦r¦ê
    {
        if (s.length()==0) break;
        if (s[0]=='p' && s[1]=='u') {
            cin >> n;
            push(n);
        } else if (s[0]=='p' && s[1]=='o'){
            n=pop();
            if (n==-1) {
                cout << "pop¡Gnothing in stack" << endl;
                break;
            } else cout << "pop¡G" << n << endl;
        }
    }
    return 0;
}

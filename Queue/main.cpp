#include <iostream>
#include <cstring>

using namespace std;

int num[100],top,bottom;
void push(int x)
{
    num[top]=x;
    top++;
}
int pop()
{
    if (top==bottom) return -1;
    else {
        bottom++;
        return num[bottom-1];
    }
}
int main()
{
    string s;
    int n;
    top=0;
    bottom=0;
    while (cin >> s) //Åª¤@¦æ¦r¦ê
    {
        if (s.length()==0) break;
        if (s[0]=='i' && s[1]=='n') {
            cin >> n;
            push(n);
        } else if (s[0]=='d' && s[1]=='e'){
            n=pop();
            if (n==-1) {
                cout << "delete¡Gnothing in queue" << endl;
                break;
            } else cout << "delete¡G" << n << endl;
        }
    }
    return 0;
}

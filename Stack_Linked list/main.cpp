#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct record
{
    int m;
    struct record *p;
};
struct record *top;

void push(int x)
{
    struct record *a;
    a=(struct record *)malloc(sizeof(struct record));
    if (top==NULL) {
        a->p=NULL;
        a->m=x;
        top=a;
    } else {
        a->p=top;
        a->m=x;
        top=a;
    }
}
int pop()
{
    struct record *a;
    int x;
    if (top==NULL) {
        return -1;
    } else {
        a=top->p;
        x=top->m;
        free(top);
        top=a;
        return x;
    }
}
int main()
{
    string s;
    int n;
    top=NULL;
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

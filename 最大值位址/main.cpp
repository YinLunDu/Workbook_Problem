#include <iostream>

using namespace std;

int main()
{
    int A[5],m,i,index;
    A[0]=60;
    A[1]=90;
    A[2]=44;
    A[3]=98;
    A[4]=50;
    m=0;
    for (i=0;i<=4;i++)
        if (A[i]>m) {
            m=A[i];
            index=i;
        }
    cout << "A[0]=60" << endl;
    cout << "A[1]=90" << endl;
    cout << "A[2]=44" << endl;
    cout << "A[3]=98" << endl;
    cout << "A[4]=50" << endl;
    cout << "³Ì¤j­È¡G" << m << " ¦ì§}¡G" << index+1 << endl;
    return 0;
}

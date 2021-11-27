#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ofstream out ("prize.txt");
    int i,j;
    for (i=1;i<=100;i++) {
        for (j=1;j<=6;j++)
            out << rand()%49+1 << " ";
        out << "\n";
    }
    return 0;
}

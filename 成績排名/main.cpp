#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <fstream>

using namespace std;

float average(float num[], int n)
{
    int i;
    float sum=0;
    for (i=1;i<=n;i++) sum+=num[i];
    return sum/n;
}

float middle(float num[], int n)
{
    sort(num+1,num+n);
    return (num[n/2]+num[n/2+1])/2;
}

int main()
{
    int i,j,c;
    float num[8][53],x[51];
    char grade[51];
    for (i=1;i<=50;i++) num[0][i]=i;
    for (i=1;i<=50;i++) num[1][i]=rand()%51+50;
    for (i=1;i<=50;i++) num[2][i]=rand()%51+50;
    for (i=1;i<=50;i++) num[3][i]=rand()%51+50;
    for (i=1;i<=50;i++) num[4][i]=rand()%21+80;
    for (i=1;i<=50;i++) num[5][i]=num[1][i]*0.2+num[2][i]*0.2+num[3][i]*0.3+num[4][i]*0.3;
    for (i=1;i<=50;i++) {
        c=0;
        for (j=1;j<=50;j++) {
            if (num[5][i]<num[5][j]&&i!=j) c++;
        }
        num[6][i]=c+1;
    }
    for (i=1;i<=50;i++) {
        if (num[5][i]>=80) grade[i]='A';
        else if (num[5][i]>=70) grade[i]='B';
        else if (num[5][i]>=60) grade[i]='C';
        else grade[i]='D';
    }

    for (i=1;i<=50;i++) x[i]=num[1][i];
    num[1][51]=average(x, 50);
    num[1][52]=middle(x, 50);

    for (i=1;i<=50;i++) x[i]=num[2][i];
    num[2][51]=average(x, 50);
    num[2][52]=middle(x, 50);

    for (i=1;i<=50;i++) x[i]=num[3][i];
    num[3][51]=average(x, 50);
    num[3][52]=middle(x, 50);

    for (i=1;i<=50;i++) x[i]=num[4][i];
    num[4][51]=average(x, 50);
    num[4][52]=middle(x, 50);

    for (i=1;i<=50;i++) x[i]=num[5][i];
    num[5][51]=average(x, 50);
    num[5][52]=middle(x, 50);

    printf("學號 段考1 段考2 期末考 平時 總分 排名 等級\n");
    for (i=1;i<=50;i++) {
        if (num[0][i]<10) printf("0%.0f",num[0][i]);
        else printf("%.0f",num[0][i]);
        printf("    ");
        printf("%3.0f",num[1][i]);
        printf("   ");
        printf("%3.0f",num[2][i]);
        printf("    ");
        printf("%3.0f",num[3][i]);
        printf("  ");
        printf("%3.0f",num[4][i]);
        printf("  ");
        printf("%.1f",num[5][i]);
        printf("   ");
        printf("%2.0f",num[6][i]);
        printf("   ");
        printf("%c",grade[i]);
        printf("\n");
    }
    printf("平均 %.1f  %.1f   %.1f %.1f  %.1f\n",num[1][51],num[2][51],num[3][51],num[4][51],num[5][51]);
    printf("中位數%3.0f   %3.0f    %3.0f  %3.0f  %.1f\n",num[1][52],num[2][52],num[3][52],num[4][52],num[5][52]);

    FILE *fp=fopen("score.txt","w");
    fprintf(fp,"學號 段考1 段考2 期末考 平時 總分 排名 等級\n");
    for (i=1;i<=50;i++) {
        if (num[0][i]<10) fprintf(fp,"0%.0f",num[0][i]);
        else fprintf(fp,"%.0f",num[0][i]);
        fprintf(fp,"    ");
        fprintf(fp,"%3.0f",num[1][i]);
        fprintf(fp,"   ");
        fprintf(fp,"%3.0f",num[2][i]);
        fprintf(fp,"    ");
        fprintf(fp,"%3.0f",num[3][i]);
        fprintf(fp,"  ");
        fprintf(fp,"%3.0f",num[4][i]);
        fprintf(fp,"  ");
        fprintf(fp,"%.1f",num[5][i]);
        fprintf(fp,"   ");
        fprintf(fp,"%2.0f",num[6][i]);
        fprintf(fp,"   ");
        fprintf(fp,"%c",grade[i]);
        fprintf(fp,"\n");
    }
    fprintf(fp,"平均 %.1f  %.1f   %.1f %.1f  %.1f\n",num[1][51],num[2][51],num[3][51],num[4][51],num[5][51]);
    fprintf(fp,"中位數%3.0f   %3.0f    %3.0f  %3.0f  %.1f\n",num[1][52],num[2][52],num[3][52],num[4][52],num[5][52]);
    fclose(fp);

    return 0;
}

#include <stdio.h>
#define N 20
int main(int argc, char const *argv[])
{
int i;
double vt[N];
for(i = 0;i<N; i++)
{
vt[i]=1+rand()%100;
printf("\t%f", vt[i]);
}

    return 0;
}

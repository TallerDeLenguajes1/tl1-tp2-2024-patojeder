#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20
int main(int argc, char const *argv[])
{
srand(time(NULL));
int i;
double vt[N];
double *punterovt;
punterovt=vt;
for(i = 0;i<N; i++)
{
vt[i]=1+rand()%100;
printf("\t %f", *punterovt);
punterovt++;
}

    return 0;
}
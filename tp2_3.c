#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main(int argc, char const *argv[])
{
srand(time(NULL));
 /*   
int i,j;
int mt[N][M];

for(i = 0;i<N; i++)
{
for(j = 0;j<M; j++)
{
mt[i][j]=1+rand()%100;
printf("%lf", mt[i][j]);
}
printf("\n");
}
*/

int i,j;
int mt[N][M];
int *puntero;
puntero= mt;
for(i = 0;i<N; i++)
{
for(j = 0;j<M; j++)
{
mt[i][j]=1+rand()%100;
printf("\t %d", *puntero);
puntero++;
}
printf("\n");
}

    return 0;
}


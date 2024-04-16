#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct {
int velocidad;//entre 1 y 3 GHz
int anio;//entre 2015 y 2023
int cantidad;//entre 1 y 8
char *tipo_cpu; //valores del arreglo tipos
}typedef computadora;


void cargarEstructura(computadora computadoras[]);

void mostrarComputadoras(computadora computadoras[]);

void laMasVieja(computadora computadoras[]);

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

void laMasRapida(computadora computadoras[]);




int main(int argc, char const *argv[])
{
    srand(time(NULL));

computadora computadoras[5];

cargarEstructura(computadoras);
mostrarComputadoras(computadoras);
laMasVieja(computadoras);
laMasRapida(computadoras);

    return 0;
}



void cargarEstructura(computadora computadoras[]){
    int j;
    for (int i = 0; i < 5; i++)
    {
        computadoras[i].velocidad= rand()%3+1;
        computadoras[i].anio= rand()%8+2015;
        computadoras[i].cantidad= rand()%8+1;
        j=rand()%6;
        computadoras[i].tipo_cpu=tipos[j];

    }
    
}

void mostrarComputadoras(computadora computadoras[]){

    for (int i = 0; i < 5; i++)
    {
        printf("\n*****************COMPUTADORA %d**********************", i+1);
        printf("\nVelocidad: %d GHz", computadoras[i].velocidad);
        printf("\nAnio: %d", computadoras[i].anio);
        printf("\nCantidad: %d unidades", computadoras[i].cantidad);
        printf("\nTipo de CPU: %s", computadoras[i].tipo_cpu);
        printf("\n");                        
    }
    
}

void laMasVieja(computadora computadoras[]){
int vieja=2030,indice;
    for (int i = 0; i < 5; i++)
    {
        if (computadoras[i].anio<vieja)
        {
            vieja=computadoras[i].anio;
            indice=i;
        }
        
    }
    printf("\n***** Computadora mas vieja *****");
    printf("\n La computadora mas vieja es %s, computadora %d, perteneciente al anio %d \n", computadoras[indice].tipo_cpu, indice+1, computadoras[indice].anio);
}

void laMasRapida(computadora computadoras[]){
    int rapida=0, indice;
    for (int i = 0; i < 5; i++)
    {
        if (computadoras[i].velocidad > rapida)
        {
            rapida=computadoras[i].velocidad;
            indice=i;
        }
        
    }
    printf("\n***** Cmputadora mas rapida *****");
    printf("\n La computadora mas rapida es %s, computadora %d con %d GHz de velocidad\n", computadoras[indice].tipo_cpu, indice+1, computadoras[indice].velocidad);
}


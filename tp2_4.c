#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct {

    int velocidad;      //entre 1 y 3 GHz
    int anio;       //entre 2015 y 2023
    int cantidad;       //entre 1 y 8
    char *tipo_cpu;     //valores del arreglo tipos

}typedef compu;

void MostrarLista(compu compu[4]);
void MostrarMasVieja(compu compu[4]);
void MostrarMasRapida(compu compu[4]);

int main(){

    srand(time(NULL));
    int aux = 1;
    char *tipos[]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu compus[4];

    for (int i = 0; i < 5; i++)
    {
        
        compus[i].velocidad = rand() % 3 + 1;
        compus[i].anio = rand() % (2024 - 2015 + 1) + 2015;
        compus[i].cantidad = rand() % 8 + 1;
        compus[i].tipo_cpu = tipos[ rand() % 7 ];

    }

    MostrarLista(compus);

    MostrarMasVieja(compus);

    MostrarMasRapida(compus);

    return 0;
}

void MostrarLista(compu compu[4]){

    for (int i = 0; i < 5; i++)
    {
        
        printf("\n\nLa velocidad de la pc Numero %i es: %i",i+1,compu[i].velocidad);
        printf("\n\nel anio de la pc Numero %i es: %i",i+1,compu[i].anio);
        printf("\n\nLa cantidad de nucleos de la pc Numero %i es: %i",i+1,compu[i].cantidad);
        printf("\n\nLa Marca del cpu de la pc Numero %i es: %s",i+1,compu[i].tipo_cpu);

    }
    


}

void MostrarMasVieja(compu compu[4]){

    int masviejo = 9999,indice = 0;

    for (int i = 0; i < 5; i++)
    {

        if (masviejo > compu[i].anio)
        {
            masviejo = compu[i].anio;
            indice = i;
        }

    }

    printf("\n\nLa pc mas vieja es la Numero: %i ", indice+1);

}

void MostrarMasRapida(compu compu[4]){

    int masrapido = 0,indice = 0;

    for (int i = 0; i < 5; i++)
    {

        if (masrapido < compu[i].velocidad)
        {
            masrapido = compu[i].velocidad;
            indice = i;
        }

    }

    printf("\n\nLa pc mas rapida es la Numero: %i ", indice+1);


}
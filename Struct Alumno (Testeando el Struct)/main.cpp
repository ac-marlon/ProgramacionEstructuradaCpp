#include <iostream>
#include <stdio.h>

//calcular por cada estudiantes la nota definitiva por semestre sabiendo que las 3 primeras notas valen el 30% las siguientes 3 notas valen el 40% y las dos ultimas valen el 30%
//Calcular la nota promedio del curso
//Determinar cuantos estudiantes aprobaron cada semestre con nota > o = a 3.0 y cuantos perdieron

struct alumno {
                int codigo;
                char nombre[30];
                int numero_id;
                char direccion[20];
                float notas[8][10];
              };

struct alumno estudiante;

using namespace std;

int main()
{
   int n, i, j;
   printf("Introduzca el numero de alumnos:  ");
   scanf("%d", &n);
   for (i=0; i<n; i++)
   {
        printf("\nALUMNO NUMERO %d:\n", i+1);
        printf("Introduzca el codigo del alumno: ");
        cin>>estudiante.codigo;
        printf("Introduzca el nombre del alumno: ");
        cin>>estudiante.nombre;
        printf("Introduzca el numero de documento del alumno: ");
        cin>>estudiante.numero_id;
        printf("Introduzca la direccion del alumno: ");
        cin>>estudiante.direccion;
        printf("Introduzca las notas de los 10 semestres:\n");
        for (int k=0; k<2; k++)
        {
            printf("\nSEMESTRE NUMERO %d", k+1);
            printf("\nIntroduzca las 3 notas de este semestre:\n");
             for (j=0; j<3; j++)
             {
                  printf("Nota numero %d: ", j+1);
                  cin>>estudiante.notas[k][j];
             }

        }

        printf("\n______________________________________________________________________\n");
        cout<<"\nCodigo: /\ Nombre: /\ Numero de documento: /\ Direccion: "<<endl;
            cout<<estudiante.codigo<<" | "<<estudiante.nombre<<" | "<<estudiante.numero_id<<" | "<<estudiante.direccion<<endl;
            printf("\nNotas: \n");

            for(int k=0; k<2; k++)
            {
                printf("Semestre %d: ", k+1);
            for (j=0; j<3; j++)
             {
                  cout<<estudiante.notas[k][j];
                  printf("  ");
             }

            }
            printf("\n______________________________________________________________________\n");

   }

    return 0;
}

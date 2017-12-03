#include <stdio.h>
#include <fstream>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h> //Aqui se escriben las bibliotecas que se van a usar.

using namespace std;

struct Biblioteca{
                        char ID[10];
                        char n_libro[60];
                        char a_libro[60];
                } B;//Esta es la estructura donde se almacenan los 3 datos principales (ID, Nombre del libro y su autor).

void ingresar();
void c_todo();
void c_uno();
void cont();
void opc(int o); //Prototipo de las funciones que se usaran a lo largo del programa.


int main() //Esta es la funcion principal.
{

    int opcion, op2, salir=0; //Declaracion de variables y constantes.
    do
    {
        printf("********************************************************************************\n");
        printf("                    |||   BIENVENIDO A LA BIBLIOTECA\n");
        printf("********************************************************************************\n");
        cout<<"\n";
        printf("Qu%c acci%cn desea realizar%c\n",130, 162, 63); 
        printf("\n1. A%cadir un nuevo libro.", 164);
        printf("\n2. Buscar un libro.");
        printf("\n3. Total de libros que hay en la biblioteca.");
        printf("\n4. Salir.");
        cout<<"\n";
        printf("\n\nElija una opci%cn: ", 162);
        scanf("%d", &opcion); //Opcion que el usuario elige para continuar con el programa o salir de este.

        switch(opcion) //Dependiendo de la opcion elegida previamente, se invoca una funcion especifica.
        {
            case 1:
                ingresar(); //Invoca la funcion ingresar().
                system("pause");
                system("cls");
                break;
            case 2:
                opc(op2);//Invoca la funcion opc(op2) que funciona con parametros por valor el cual es op2.
                system("pause");
                system("cls");
                break;
            case 3:
                cont();//Invoca a la funcion cont()
                system("pause");
                system("cls");
                break;
            case 4:
                salir=1; //Asigna el valor 1 a la variable salir para poder terminar el programa.
                system("cls");
                break;
            default:
                system("cls");
                printf("********************************************************************************\n");
                printf("                    |||   BIENVENIDO A LA BIBLIOTECA\n");
                printf("********************************************************************************\n\n");
                cout<<"\n";
                printf("Opci%cn inv%clida.\n", 162, 160); //Este es el mensaje de "opcion invalida" que se muestra cuando se digita un numero que no corresponde al menu de opciones.
                system("pause");
                system("cls");
                break;
        }
    }
    while(salir==0);

    return 0;
}

void opc(int o) //Funcion para buscar los datos registrados de la biblioteca.
{
    system("cls"); //Este comando limpia la pantalla.
            printf("********************************************************************************\n");
            printf("                    |||   BIENVENIDO A LA BIBLIOTECA\n");
            printf("********************************************************************************\n\n");
            cout<<"\n";
            printf("1. Mostrar toda la biblioteca.\n");
            printf("2. Buscar un libro en espec%cfico.", 161); 
            cout<<"\n";
            printf("\n\nElija una opci%cn: ",162); //Muestra un menu para seleccionar el tipo de consulta que se va a realizar en el registro.
            scanf("%d", &o);
            switch(o)
            {
                case 1:
                    c_todo(); //Llama a la funcion c_todo() donde se consultan todos los datos que almacena del archivo.
                    break;
                case 2:
                    c_uno(); //Llama a la funcion c_uno() donde se consulta un libro o autor en espicifico que se encuentre registrado.
                    break;
            }
}

void ingresar() //Funcion para ingresar los datos de la biblioteca.
{
    char r[2];
    system("cls");
    ofstream biblioteca; //Se abre el archivo llamado "biblioteca.txt" y si no existe lo crea.
    biblioteca.open("biblioteca.txt", ios::out|ios::app); //Se inicializa el archivo, el comando ios::out sirve para abrir archivos de escritura 
                                                          //La orden ios::app sirve si el archivo ya existe, ya que se ubique al final de éste para ingresar mas datos.
    if(biblioteca.fail())  //Si el archivo "biblioteca.txt" tiene un error al abrir se demuestra con un mensaje.
    {
        printf("Ocurri%c un error al abrir el archivo.", 162);
    }
    else //Si no hay error continua con el programa. En donde solicitara los datos para actualizar el registro.
    {
        do
        {
            system("cls");
            printf("********************************************************************************\n");
            printf("                    |||   BIENVENIDO A LA BIBLIOTECA\n");
            printf("********************************************************************************\n\n");
            cout<<"\n";
            gets(B.ID);
            printf("Introduzca el nombre del libro: ");
            gets(B.n_libro);
            cout<<"\n";
            printf("Introduzca el nombre del autor del libro: ");
            gets(B.a_libro);
            cout<<"\n";
            biblioteca<<B.ID<<B.n_libro<<" - "<<B.a_libro<<"\n"; //Los datos ingresados apareceran en este orden en el archivo.
            printf("\n\nDesea agregar otro libro%c ", 63); // Aqui el usuario decide si quiere agrega o no más libros.
            scanf("%s", &r);
        }
        while(r[0]=='s'||r[0]=='S');
        printf("\n\n");
    }
    biblioteca.close(); //Se cierra el archivo "biblioteca.txt".
}

void c_todo() //Esta es la funcion para consultar el registro completo que tiene la biblioteca.
{
    system("cls");
    printf("********************************************************************************\n");
    printf("                    |||   BIENVENIDO A LA BIBLIOTECA\n");
    printf("********************************************************************************\n\n");
    cout<<"\n";
    ifstream biblioteca; //Comando para abrir el archivo "biblioteca.txt" en modo lectura.
    biblioteca.open("biblioteca.txt"); //Abre el archivo "biblioteca.txt".
    while(!biblioteca.eof()) //Si no es el final del registro va a mostrar lo que hay en la ultima linea del archivo.
    {
        cout<<(char)biblioteca.get(); //Muestra todas las entradas realizadas en el registro.
    }
    printf("\n\n");
    biblioteca.close(); //Se finaliza el archivo "biblioteca.txt".
}

void c_uno() //Funcion para consultar un libro en especifico que se encuentre registrado.
{
    system("cls");
    printf("********************************************************************************\n");
    printf("                    |||   BIENVENIDO A LA BIBLIOTECA\n");
    printf("********************************************************************************\n\n");
    cout<<"\n";
    char r[2], Busca_n[60]; //Se declara r que es la variable que determina si el usuario desea continuar consultando o no y Busca_n que es el autor u obra que se desea buscar.
	do
    {
        ifstream biblioteca; 
        biblioteca.open("biblioteca.txt",ios::out|ios::in); //Abre "biblioteca.txt".

        if(biblioteca.is_open()) //Si el archivo se encuentra abierto prosigue con el programa.
        {
            printf("Introduzca el titulo de la obra y/o el autor que desea buscar: ");
            cout<<"\n";
            gets(Busca_n); //Se lee el autor de alguna obra almacenada.
            gets(Busca_n); //Se lee el titulo de alguna obra almacenada.
            int comp=0;
            while(!biblioteca.eof()) //Aqui se analiza el listado de datos linea por linea.
            {
                biblioteca>>B.n_libro; 
                biblioteca>>B.a_libro;
                if((strcmp(Busca_n, B.n_libro)==0)||(strcmp(Busca_n,B.a_libro)==0))//Se comparan los datos del registro con los que fueron digitados por el usuario.
                {
                    comp=1; //Si hay coincidencias la variable comp toma el valor de 1.
                }
            }
            if(comp==1)
            {
                cout<<"El autor/obra "<<Busca_n<<" si existe en el registro de la biblioteca."<<endl; //Se muestra si la obray/o autor existen en el archivo o no.
                cout<<"\n";
			}

            if(comp==0)
            {
                cout<<"No existen registros con las descripciones dadas. "<<Busca_n<<endl;
                cout<<"\n";
            }
        }
        else
        {
            cout<<"El archivo aun no ha sido creado."<<endl; //Si el registro de la biblioteca no se abre entonces muestra este mensaje.
            system("PAUSE");
        }
        cout<<"\n";
        printf("Desea realizar otra b%csqueda%c ", 163, 63); // Aqui se le pregunta al usuario si desea continuar buscando o no.
        scanf("%s", &r);
    }
    while(r[0]=='s' || r[0]=='S');

}

void cont() //Esta funcion nos muestra cuantas obras existen en el registro.
{
    system("cls");
    printf("********************************************************************************\n");
    printf("                    |||   BIENVENIDO A LA BIBLIOTECA\n");
    printf("********************************************************************************\n\n");
    cout<<"\n";
    ifstream biblioteca("biblioteca.txt", ifstream::in); //En esta parte se abre el archivo "biblioteca.txt".
    int lin=0; //Se declara un contador.
    while(biblioteca.good()) //Se realiza un ciclo repetitivo.
    {
        if(biblioteca.get()=='\n') lin++; //Cuenta cada salto de linea y se lo suma a la variable lin.
    }
    printf("El total de libros que se encuentan en la biblioteca son: %d\n\n", lin);//Muestra el total de libros almacenados en la base de datos de la biblioteca.

}

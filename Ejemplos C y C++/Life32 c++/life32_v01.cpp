/*------------------------------------------------------------------------------
                     El juego de la vida de John H. Conway
------------------------------------------------------------------------------*/




/*------------------------------------------------------------------------------
                            Write by Bonomi Nahuel
                            E-Mail: Bonomi137@gmail.com

							Language: C++ without OOP

							License: Public Domain
------------------------------------------------------------------------------*/




/*------------------------------------------------------------------------------
               Reglas del juego de la vida de John H. Conway:


    1 - Un organismo en una celda "muere por aislamiento" si
         esta tuvo menos de dos vecinos.

    2 - Un organismo "muere por sobrepoblación" si tuvo cuatro o
         más vecinos.

    3 - Un organismo sobrevive para otra generación si esta tuvo
         dos o tres vecinos.

    4 - Una celda vacía se llena con una nuevo organismo vivo si
         esta tuvo exactamente tres vecinos.
------------------------------------------------------------------------------*/




#include <cstdlib>
#include <iostream>

using namespace std;


// Declaración de variables globales
bool ingresa_una_opcion = true;
int Cursor_X, Cursor_Y;
int vive, contar, elegir, ingresa_un_modo;
int MatrixA[25][40];
int MatrixB[25][40];


// Declaración de funciones
void Cargar_MatrizA_y_MatrizB();
void Menu();
void Elegir_Automata_Celular();
void Cargar_Automata_Celular();
void Cerrar_el_Universo();
void Conteo_de_Celulas();
void Mostrar_en_Pantalla();
void Cargar_MatrizA_en_MatrizB();
void Cargar_MatrizB_en_MatrizA();


// Definición de funciones
int main()
{

    Cargar_MatrizA_y_MatrizB();


    while(ingresa_una_opcion)
    {
        // Limpiamos la pantalla del monitor
        system("cls");

        // Mostramos un menú
        Menu();

        // Se elige un Automata Celular y se valida la elección
        Elegir_Automata_Celular();

    }


    Cargar_Automata_Celular();

    Cargar_MatrizA_en_MatrizB();


    // Limpiamos la Pantalla
    system("cls");


    // Bucle Principal
    while(true)
    {
        // Procesamos los Datos

        // Función
        Cerrar_el_Universo();


        // Función
        Conteo_de_Celulas();


        // Limpiamos la Pantalla
        system("cls");


        // Colocamos Todo en la Pantalla

        // Función
        Mostrar_en_Pantalla();


        // Función
        Cargar_MatrizB_en_MatrizA();


    }

    return 0;
}




// Función Para Cargar la Matriz A y B por Defecto
void Cargar_MatrizA_y_MatrizB()
{
    for(int f = 0; f <= 25; f++)
    {
        for(int c = 0; c <= 40; c++)
        {

            MatrixA[f][c] = 0;
            MatrixB[f][c] = 0;

        }
    }
}




// Función Para El Menú de Opciones
void Menu()
{
    cout <<  "\nElige un aut¢mata celular";

    cout <<  "\n\n1 - Glider";
    cout <<  "\n2 - Toad";
    cout <<  "\n3 - Blinker";
    cout <<  "\n4 - Bhepto";
    cout <<  "\n5 - Fuse";
    cout <<  "\n6 - Rake";
    cout <<  "\n7 - Clock";
}




// Función Para Elegir un Automata Celular
void Elegir_Automata_Celular()
{
    cout <<  "\n";
    cin >> elegir;

    // Validación de la opción elegida
    if( (0 < elegir) && (elegir < 9) )
    {
        ingresa_una_opcion = false;
    }

    else
    {
        elegir = 1;
        ingresa_una_opcion = false;
    }

}




// Función Para Cargar un Automata Celular
void Cargar_Automata_Celular()
{

    switch(elegir)
    {
    case 1:
    {
        /*
        	x
        	x
        	xxx
        	Glider
        */

        MatrixA[1][2] = 1;
        MatrixA[2][3] = 1;

        MatrixA[3][1] = 1;
        MatrixA[3][2] = 1;
        MatrixA[3][3] = 1;
        break;
    }







    case 2:
    {
        /*
        		x
        	x    x
        	x    x
        	  x
        	Toad
        */
        MatrixA[5][6] = 1;

        MatrixA[6][4] = 1;
        MatrixA[6][7] = 1;

        MatrixA[7][4] = 1;
        MatrixA[7][7] = 1;

        MatrixA[8][5] = 1;
        break;
    }



    case 3:
    {
        /*
        	x x x
        	Blinker
        */
        MatrixA[5][5] = 1;
        MatrixA[5][6] = 1;
        MatrixA[5][7] = 1;
        break;
    }



    case 4:
    {
        /*
        	x
        	x x x
        	x    x x
        	Bhepto
        */
        MatrixA[14][16] = 1;

        MatrixA[15][15] = 1;
        MatrixA[15][16] = 1;
        MatrixA[15][17] = 1;

        MatrixA[16][15] = 1;
        MatrixA[16][17] = 1;

        MatrixA[16][18] = 1;
        break;
    }



    case 5:
    {
        /*
        	     x x
        		  x
        		x
        	  x
        	x
        	Fuse
        */
        MatrixA[14][16] = 1;
        MatrixA[14][17] = 1;

        MatrixA[15][17] = 1;

        MatrixA[16][16] = 1;

        MatrixA[17][15] = 1;

        MatrixA[18][14] = 1;

        MatrixA[19][13] = 1;

        MatrixA[20][12] = 1;

        MatrixA[21][11] = 1;

        MatrixA[22][10] = 1;
        break;
    }



    case 6:
    {
        /*
        			x
        				x
        	x          x
        	x x x x
        	Rake
        */
        MatrixA[12][20] = 1;

        MatrixA[13][21] = 1;

        MatrixA[14][17] = 1;
        MatrixA[14][21] = 1;

        MatrixA[15][18] = 1;
        MatrixA[15][19] = 1;
        MatrixA[15][20] = 1;
        MatrixA[15][21] = 1;
        break;
    }



    case 7:
    {
        /*
        				x x
        				x x

        				x x x x
        	x x    x       x    x
        	x x    x    x       x
        			x    x       x   x x
        			x             x   x x
        				x x x x

        					x x
        					x x
        	Clock
        */
        MatrixA[13][22] = 1;
        MatrixA[14][21] = 1;
        MatrixA[15][21] = 1;


        MatrixA[12][20] = 1;
        MatrixA[12][21] = 1;
        MatrixA[12][22] = 1;
        MatrixA[12][23] = 1;

        MatrixA[17][20] = 1;
        MatrixA[17][21] = 1;
        MatrixA[17][22] = 1;
        MatrixA[17][23] = 1;


        MatrixA[13][24] = 1;
        MatrixA[14][24] = 1;
        MatrixA[15][24] = 1;
        MatrixA[16][24] = 1;

        MatrixA[13][19] = 1;
        MatrixA[14][19] = 1;
        MatrixA[15][19] = 1;
        MatrixA[16][19] = 1;


        MatrixA[9][20] = 1;
        MatrixA[9][21] = 1;
        MatrixA[10][20] = 1;
        MatrixA[10][21] = 1;

        MatrixA[13][16] = 1;
        MatrixA[13][17] = 1;
        MatrixA[14][16] = 1;
        MatrixA[14][17] = 1;


        MatrixA[19][22] = 1;
        MatrixA[19][23] = 1;
        MatrixA[20][22] = 1;
        MatrixA[20][23] = 1;

        MatrixA[15][26] = 1;
        MatrixA[15][27] = 1;
        MatrixA[16][26] = 1;
        MatrixA[16][27] = 1;
        break;
    }





    default:
    {
        cout << "\n\nError en la opci¢n";
        break;
    }

    }


}




// Función Para Cargar la Matriz A en la Matriz B
void Cargar_MatrizA_en_MatrizB()
{


    for(int f = 0; f <= 25; f++)
        for(int c = 0; c <= 40; c++)
            MatrixB[f][c] = MatrixA[f][c];


}




// Función Para Cerrar el Universo por los Extremos
void Cerrar_el_Universo()
{


    //-------------------------------------------------------------------------------
    //			Se cierra el universo haciendolo continuo, ilimitado, para
    //			evitar los problemas de análisis de las fronteras.
    //-------------------------------------------------------------------------------


    //	Cierra las columnas, copiando la primera y la última fila.
	    /*
    		____				_____
    		   |
    		   v		   		   ^
    		____				__|__

    */


    for(int c = 1; c <= 38; c++)
    {
        MatrixA[25][c] = MatrixA[1][c];
        MatrixA[0][c] = MatrixA[24][c];
    }



    // Cerramos las filas, copiando la primera y la última columna.
    /*

        |		 |            |		 |
        |	-> |            |	<- |
        |		 |            |		 |

    */

    for(int f = 0; f <= 25; f++)
    {
        MatrixA[f][39] = MatrixA[f][1];
        MatrixA[f][0] = MatrixA[f][38];
    }


}




// Función Para Contar la Cantidad de Celulas
void Conteo_de_Celulas()
{


    // Buscamos en la Matriz A, los cambios
    // se realizan sólo en la Matriz B.


    for(int f = 1; f <= 24; f++)
    {
        for(int c = 1; c <= 38; c++)
        {
            // Conteo de celulas


            contar = 0;

            contar = contar + MatrixA[f][c + 1] + MatrixA[f][c - 1];
            contar = contar + MatrixA[f + 1][c] + MatrixA[f - 1][c];
            contar = contar + MatrixA[f - 1][c - 1] + MatrixA[f + 1][c + 1];
            contar = contar + MatrixA[f - 1][c + 1] + MatrixA[f + 1][c - 1];



            // Realizamos los cambios en la Matriz B


            // Nace una célula cuando
            if( contar == 3 )
                MatrixB[f][c] = 1;


            // Muere una célula cuando
            if( ( contar < 2 ) || (3 < contar ) )
                MatrixB[f][c] = 0;


        }
    }


}




// Función Para Mostrar la Matriz B en Pantalla
void Mostrar_en_Pantalla()
{


    for(int f = 1; f <= 24; f++)
    {
        for(int c = 1; c <= 38; c++)
        {

            // Si hay una célula viva la mostramos en pantalla
            if( MatrixB[f][c] == 1 )
                cout << "* ";
            else
                cout << ". ";

        }

        // Se reserva un espacio para el carácter de nueva línea (que es c = 39),
        // por lo tanto no se usa c = 39 para las células
        cout << "\n";
    }


}




// Función Para Cargar la Matriz B en la Matriz A
void Cargar_MatrizB_en_MatrizA()
{

    for(int f = 1; f <= 24; f++)
    {
        for(int c = 1; c <= 39; c++)
        {

            MatrixA[f][c] = MatrixB[f][c];

        }
    }

}


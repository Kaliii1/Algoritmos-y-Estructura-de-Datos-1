#include <stdio.h> 
#include <stdbool.h>

// Ejercicio 3) 1)

int main (void) { //int es lo que espero que me devuelva la función, Main es el nombre de la función principal y siempre tiene que estar. Void que no espera ningún parámetro.

    int x, y, z;
    
    //En prinft me imprime en la pantalla el mensaje de que le dé un valor a cada variable y luego en el scanf el %d es el numero que yo voy a apretar en mi teclado y &x es en 
    // la variable que lo guardará.

    printf("Dame valor de x\n"); 
    scanf ("%d", &x);

    printf ("Dame valor de y\n");
    scanf ("%d", &y);

    printf ("Dame valor de z\n");
    scanf ("%d", &z);

    
    //Ahora vamos a usar el scanf para que muestre los valores que yo le asigné a cada variable y luego resolver según el ejercicio.

    printf ("El valor de x es %d\n", x);
    printf ("El valor de y es %d\n", y);
    printf ("El valor de z es %d\n", z);
    
    //Pongo %d\n,x  porque quiero que mi %d sea reemplazado por la variable x donde anteriormente le asigné un valor.


    printf ("x + y + 1 = %d\n", x + y + 1);
    printf ("z * z + y * 45 - 15 * x = %d\n", z * z + y * 45 - 15 * x);
    printf ("y - 2 == (x * 3 + 1) mood 5 = %s\n", (y - 2 == (x * 3 + 1) % 5)? "true" : "false");
    printf ("y / 2 * x = %d\n", y / 2 * x);
    printf ("y < x *z = %s\n", (y < x *z)? "true" : "false");
    
    //Pongo %s para los string.
    }

    //Ejercicio 3) 2)
#include <stdio.h> 
#include <stdbool.h>
    
int main (void) {
    
    int x, y, z;

    printf("Dame valor de x\n"); 
    scanf ("%d", &x);

    printf ("Dame valor de y\n");
    scanf ("%d", &y);

    printf ("Dame valor de z\n");
    scanf ("%d", &z);


    printf ("x mod 4 == 0 = %s\n", (x % 4 ==0)? "true" : "false");

    printf ("x + y == 0 && y - x == (-1) * z = %s\n", (x + y == 0 && y - x == (-1) * z)? "true" : "false");

    //yo debo darle los valores para poder completar la tabla, estos printf son solo ayuda para corroborar. Un ejemplo sería que x, y, z valgan 0.

    int b, w;
    printf ("ingrese un bool: 0 para false, 1 para true:\n");
    scanf ("%d", &b); 

    printf ("ingrese un bool: 0 para false, 1 para true");
    scanf ("%d, &w");

    printf ("! b && w = %d\n", ! b && w);

    }

    //Ejercicio 3) 3)
#include <stdio.h> 
int main (void) {
    
    //1.a)
    int x; 

    printf ("Dame valor de x\n");
    scanf ("%d", &x);
    x = 5;
    printf ("El valor de x se actualizó a %d\n", x);
    }

    //1.b)
#include <stdio.h>
int main (void) {
    
    int x, y;

    printf ("Dame valor x\n");
    scanf ("%d", &x);

    printf ("Dame valor de y\n");
    scanf ("%d", &y);

    x = x + y;
    y = y + y; 

    printf ("El valor de x se actualizó a %d\n", x);
    printf ("El valor de y se actualizó a %d\n", y);

    }

    //1.c)
#include <stdio.h>
int main (void) {

    int x, y;

    printf ("Dame valor x\n");
    scanf ("%d", &x);

    printf ("Dame valor de y\n");
    scanf ("%d", &y);

    //Acá no use el sprint porque no hace falta que me muestre los cálculos pero tranquilamente lo podría haber hecho.
    
    y = y + y;
    x = x + y;

    printf ("El valor de y se actualizó a %d\n", y);
    printf ("El valor de x se actualizó a %d\n", x);

    }

    //Ejercicio 4) 1.e) 
    //En el práctico el estado inicial es (x = 3, y = 1)
#include <stdio.h>
int main (void) {

    int x, y; 

    printf ("Dame valor x\n");
    scanf ("%d", &x);

    printf ("Dame valor de y\n");
    scanf ("%d", &y);

    if (x >= y) {
        x = 0;
    } else {
        x = 2;
    }
    printf ("El valor de x se actualizó a %d\n", x);
    printf ("El valor de y es %d\n", y);
}

    //El ejercicio 4) 1.f) es lo mismo que el 1.e) pero se cambia el estado inicial (x = -100, y= 1) 

//Ejercicio 4) b)
#include <stdio.h>
int main (void) {

    int x, y, z, m;

    printf ("Dame valor x\n");
    scanf ("%d", &x);

    printf ("Dame valor de y\n");
    scanf ("%d", &y);

    printf ("Dame valor z\n");
    scanf ("%d", &z);

    printf ("Dame valor de m\n");
    scanf ("%d", &m);

    if (x < y) {
        m = x;
    } else {
        m = y;
    }

    if (m < z) {
        m = m;
    } else {
        m = z;
    }

    printf ("El valor de y se actualizó a %d\n", y);
    printf ("El valor de x se actualizó a %d\n", x);
    printf ("El valor de z se actualizó a %d\n", z);
    printf ("El valor de m se actualizó a %d\n", m);
}
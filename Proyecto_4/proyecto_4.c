// Proyecto 4

// Ejercicio 1.a)
#include <stdio.h>
#include <assert.h>
void holaHasta (int n) {
    while (n>0) {
        printf ("Hola\n");
    //Pongo (--) porque quiero que se vaya restando hasta llegar a 0 y se detenga la función porque sino
    //se hace infinito y nunca terminaría.
        n--;
    }
}

int main (void){
    int x;
    printf ("Dame valor x\n");
    scanf ("%d", &x);
    assert (x>0);
    holaHasta (x);

    return 0;
}


//Ejercicio 1.b)
#include <stdio.h>

int minimo (int x, int y) {
    if (x>y) {
        (x > y);
        return y;
    } else {
        return x;
    }
}

int main (void) {
    int x, y;

    printf ("Dame valor de X\n");
    scanf ("%d", &x);

    
    printf ("Dame valor de Y\n");
    scanf ("%d", &y);

    minimo (x, y);
    printf ("El valor minimo entre %d y %d es %d\n", x, y, minimo (x, y));

    return 0;
    
}


//Ejercicio 1.b) 2-
#include <stdio.h>

int valorAbsoluto (int x) {
    if (x >= 0) {
        return x;
    } else {
        x*(-1);
        return x;
    }
}

int main (void) {
    int x;

    printf ("Ingrese valor de X\n");
    scanf ("%d", &x);

    //Asigno una variable "resultado" porque a la hora de poner mi printf, si pongo X, me dará el valor
    //original de X y no el modificado y si quiero que me dé el modificado, debo asignar una variable
    //resultado para que muestre los cambios.

    int resultado = valorAbsoluto (x);
    printf ("El valor absoluto de X es %d", resultado);

    return 0;
   
}


//Ejercicio 1.b) 3)
#include <stdio.h>
int main (void) {
    int x, y, z;

    printf ("Ingrese valor para X\n");
    scanf ("%d", &x);

    printf ("Ingrese valor para Y\n");
    scanf ("%d", &y);

    printf ("Ingrese valor para Z\n");
    scanf ("%d", &z);

    z = x;
    x = y;
    y = z;

    printf ("El valor de todas las variables fue actualizado: x = %d, y = %d, z = %d", x,y,z);

    return 0;
}


//Ejercicio 2.a)
#include <stdio.h>

int main (void) {
    int x, y, aux_x;

    printf("Dame valor de X\n");
    scanf ("%d", &x);

    printf("Dame valor de Y\n");
    scanf ("%d", &y);

    aux_x = x;
    x = x + 1;
    y = aux_x + y;

    return 0;

}


//Ejercicio 2.b)
#include <stdio.h>

int main (void) {

    int x, y, z, aux_x, aux_y;

    printf("Dame valor de X\n");
    scanf ("%d", &x);

    printf("Dame valor de Y\n");
    scanf ("%d", &y);

    printf("Dame valor de Z\n");
    scanf ("%d", &z);

    aux_x = x;
    aux_y = y;
    x = aux_y;
    y = y + aux_x + z;
    z = aux_y + aux_x;

    printf ("El valor de todas las variables fue actualizado: x = %d, y = %d, z = %d", x,y,z);

    return 0;
}


//Ejercicio 3)
#include <stdio.h>

int sumaHasta (int n) {
    int s = 0;
    while (n > 0){
        s+= n;
        n--;
        return s;
    }
}

int main (void){
    int x, m

    if (x < 0) {
        printf ("Error");
    } else {
        m = suma_hasta (x);
        printf ("La suma hasta %d es %d", x,m);
    }
}


//Ejercicio 4)
#include <stdio.>
//Empezamos a ver estructuras...
struct div_t {
    int cociente;
    int resto;
}

//Después de crear nuestra estructura vamos con nuestra función.

//Esta función llamada division toma como argumento dos "x" e "y" y devuelve
//la estructura div_t.
struct div_t division (int x, int y) {
    struct div_t d;
//Calcula el cociente y el resto y guarda los datos en la estructura "d".
    d.cociente = x / y;
    d.resto = x mod y;
    return d;
//Al poner return d, me devuelve la estructura con los datos guardados (cociente y resto)
}

int main (void) {
    int x, y;
    
    printf ("Dame valor de X\n");
    scanf ("%d", &x);

    printf ("Dame valor de Y\n");
    scanf ("%d", &y);

    if (y == 0) {
    //La division por cero no existe.
        printf ("Error");
    } else {
        struct div_t miDiv;
    //miDiv se declara como una variable y llama a la funcion "division".
        miDiv = division (x,y);
    //Al llamar a la funcion "division" también actua como la "d" de "struct div_t d".
        printf ("El resto es %d y el cociente %d", miDiv.resto, miDiv.cociente);
    } return 0;
}


//Ejercicio 5)
#include <stdio.h>

void pedirArreglo (int a [], int n_max) {
    int i = 0; 
    //Cuando le doy valor a mi n_max, es lo mismo que también estará adentro de mi posicion pero a la hora
    //de que se ejecuta el while, establezco el i como mi posición y mi n_max seguirá siendo mi largo pero no aparecerá
    //en la posición.
    while (i < n_max) {
        printf ("Ingrese el valor de la posicion [%d]", i);
        //Al hacer scanf, guardo mi valor i en a[i], donde seria mi posición.
        scanf ("%d", &a [i]);
        i++;
    }
}

void imprimeArreglo(int a[], int n_max){
     int i=0;
     while(i<n_max){
        printf ("En la posicion %d, el valor es %d\n", i,a[i]);
        i++;
    }
}

int main (void) {
    int largo;
    printf ("Ingrese el largo del arreglo\n");
    scanf ("%d", &largo);
    int a[largo];
    pedirArreglo (a, largo);
    imprimeArreglo (a, largo); 

    return 0;
}


//Ejercicio 6)
#include <stdio.h>

void pedirArreglo (int a [], int n_max) {
    int i = 0; 

    while (i < n_max) {
        printf ("Ingrese el valor de la posicion [%d]", i);
        scanf ("%d", &a [i]);
        i++;
    }
}

void imprimeArreglo(int a[], int n_max){
     int i=0;
     while(i<n_max){
        printf ("En la posicion %d, el valor es %d\n", i,a[i]);
        i++;
    }
}

int sumatoria (int a[], int tam) {
    int posicion = 0;
    int resultado = 0;
    
    while (posicion < tam) {
        resultado + = a [posicion];
        posicion ++;
    }
    return resultado;
}

int main (void) {
    int tam;
    printf ("Ingrese el largo del arreglo\n");
    scanf ("%d", &tam);

    int a[tam];
    int res;
    pedirArreglo (a, tam);
    imprimeArreglo (a, tam);
    res = sumatoria (a, tam);

    printf ("La sumatoria de los elementos del arreglo es %d", res);
}


//Ejercicio 7)
#include <stdio.h>
#include <stdbool.h>

void pedirArreglo (int a [], int n_max) {
    int i = 0; 

    while (i < n_max) {
        printf ("Ingrese el valor de la posicion [%d]", i);
        scanf ("%d", &a [i]);
        i++;
    }
}

void imprimeArreglo(int a[], int n_max){
     int i=0;
     while(i<n_max){
        printf ("En la posicion %d, el valor es %d\n", i,a[i]);
        i++;
    }
}

bool existe_positivo (int a[], int largo) {
    int posicion = 0;
    
    while (posicion < largo) {
        if (a [posicion] >= 0) {
            //Si mi posicion es mayor a cero quiero que me devuelva true y que siga con el resto de las posiciones.
            return true;
            } else { 
                 posicion ++;
        } //Cuando termine el bucle, quiero que me devuelva false porque el true es el absorbente del //.
    } return false; 
}

bool todos_positivos (int a[], int largo) {
    int posicion = 0;

    while (posicion <  largo) {
        //Si mi posicion es mejor a cero quiero que me devuelva false y que siga con el resto de las posiciones.
        if (a[posicion] < 0) {
            return false;
          } else { 
                posicion++;
        }//Cuando termine el bucle, quiero que me devuelva true porque el false es el absorbente del &&;
    } return true;
}

int pedirEntero (void) {
    int x;
    printf ("Ingrese valor\n");
    scanf ("%d", &x);
    return x;
}

int main (void) {
    int largo, resultado, resultado_2;
    printf ("Ingrese el largo del arreglo\n");
    scanf ("%d", &largo);

    int a[largo];
    pedirArreglo (a, largo);
    imprimeArreglo (a, largo);
    resultado = todos_positivos (a, largo);
    resultado_2 = existe_positivo (a, largo);


    int menu_de_opciones;
    menu_de_opciones = 1;

    while (menu_de_opciones != 0) {
        printf ("Presione 1 si desea ver que todos los elementos del arreglo sean positivos\nPresione 2 si quiere ver si algunos son positivos\nPresione 0 para cerrar el menu");
        menu_de_opciones = pedirEntero();
        if (menu_de_opciones == 1) {
            printf ("%s\n", resultado? "True" : "False");
        } else if (menu_de_opciones == 2) {
            printf ("%s\n", resultado_2? "True" : "False");
        } else if (menu_de_opciones == 0) {
            printf ("El menu se cerro correctamente");
        } else {
            printf ("Ingrese un valor valido\n");
        }
    }
}


//Ejercicio 8)
#include <stdio.h>
#include <assert.h>

int pedirEntero (void) {
    int x;
    printf ("Ingrese valor\n");
    scanf ("%d", &x);
    return x;
}

void pedirArreglo (int a [], int n_max) {
    int i = 0; 

    while (i < n_max) {
        printf ("Ingrese el valor de la posicion [%d]", i);
        scanf ("%d", &a [i]);
        i++;
    }
}

void imprimeArreglo(int a[], int n_max){
     int i=0;
     while(i<n_max){
        printf ("En la posicion %d, el valor es %d\n", i,a[i]);
        i++;
    }
}

void intercambiar (int a[], int largo, int b, int j) {
    int aux;
    aux = a[b];
    a[b] = a[j];
    a[j] = aux;
}

int main (void) {
    int largo, i, j, resultado;
    printf ("Ingrese el largo del arreglo\n");
    scanf ("%d", &largo);
    printf ("Ingrese una posicion\n");
    scanf ("%d", &i);
    printf ("Ingrese la otra posicion\n");
    scanf ("%d", &j);

    int a[largo];
    pedirArreglo (a, largo);
    imprimeArreglo (a, largo);
    assert (b < largo && j < largo);
    intercambiar (a, largo, i, j);

    printf ("El intercambio de las posiciones quedo de la siguiente manera\n");
    imprimeArreglo (a, largo);
}


//Ejercicio 9)
#include <stdio.h>
#include <limits.h>

void pedirArreglo (int a [], int n_max) {
    int i = 0; 

    while (i < n_max) {
        printf ("Ingrese el valor de la posicion [%d]", i);
        scanf ("%d", &a [i]);
        i++;
    }
}

void imprimeArreglo(int a[], int n_max){
     int i=0;
     while(i<n_max){
        printf ("En la posicion %d, el valor es %d\n", i,a[i]);
        i++;
    }
}

//int minimo (int a, int b) {
//    return (a < b) ? a : b;
//    }
    //En este caso, la función minimo toma dos argumentos a y b y devuelve el valor más pequeño de los dos. 
    //Se utiliza el operador condicional (?:) para comparar los dos valores y devolver el menor.

int minimo_pares (int a[], int tam){
    int p = 0, res=INT_MAX;
    while (p < tam){
        if (a[p] %2 == 0){
            res=a[p];
            p++;
        } else {
            p++;
    } return res;
}
}

int minimo_impares(int a[], int tam){
    int p = 0,res=INT_MAX;
    while (p < tam){
        if (a[p] %2 !=0){
            res = a[p];
            p++;
        }else{
            p++;
        }
    }return res;
}


int main (void) {
    int largo, par, impar;
    printf ("Ingrese el largo del arreglo\n");
    scanf ("%d", &largo);

    int a[largo];
    pedirArreglo (a, largo);
    imprimeArreglo (a, largo);
    par = minimo_pares (a, largo);
    impar = minimo_impares (a, largo);

    if (par < impar) {
         printf ("El minimo elemento del arreglo es %d", par);
    } else {
        printf ("El minimo elemento del arreglo es %d", impar);
    }

   
}


//Ejercicio 10)
#include <stdio.h>

void pedirArreglo (int a [], int n_max) {
    int i = 0; 

    while (i < n_max) {
        printf ("Ingrese el valor de la posicion [%d]", i);
        scanf ("%d", &a [i]);
        i++;
    }
}

void imprimeArreglo(int a[], int n_max){
     int i=0;
     while(i<n_max){
        printf ("En la posicion %d, el valor es %d\n", i,a[i]);
        i++;
    }
}

int pedirEntero (void) {
    int x;
    printf ("Ingrese el valor del elemento");
    scanf ("%d", &x);
    return x;
}

struct com_t {
    int mayores;
    int iguales;
    int menores;
};

struct com_t cuantos (int a[], int largo, int elem) {
    struct com_t c;
    int p;
    p = 0;
    c.iguales = 0;
    c.menores = 0;
    c.mayores = 0;

    while (p<largo) {
        if (elem > a[p]) {
            c.menores++;
        } else {
            if (elem < a[p]) {
                c.mayores++;
            } else {
                c.iguales;
            }
        } p++;
    } return c;
}

int main (void) {
    int largo, elemento;
    printf ("Ingrese el largo del arreglo\n");
    scanf ("%d", &largo);

    elemento = pedirEntero ();

    int a[largo];
    pedirArreglo (a, largo);
    imprimeArreglo (a, largo);

    struct com_t miCuantos;
    miCuantos = cuantos (a, largo, elemento);

    printf ("Em el arreglo el total de menores al elemento son %d, el total de iguales al elemento son %d y el total de mayores al elemento son %d", miCuantos.menores,
    miCuantos.iguales, miCuantos.mayores);
}
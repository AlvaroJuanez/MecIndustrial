#include <stdio.h> //llamamos a la biblioteca de entrada y salida

int main(){         //Función principal
    //declaramos las variables que almacena el numero original y duplicado
    int numero;     
    int numDuplicado;
    
    //inicializa el programa obteniendo datos del usuario
    printf("Introduce un número: ");
    scanf("%d", &numero);       //entrada de datos estandar(teclado) 
 
    //OPeracion matematica que duplica el número
    numDuplicado = numero * 2;

    //Imprime el resultado por pantalla
    printf("el numero es: %d\n", numDuplicado);




    return 0;         //termina el programa
}

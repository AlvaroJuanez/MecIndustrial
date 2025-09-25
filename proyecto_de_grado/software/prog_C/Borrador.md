# Borrador

Lenguaje de programacíon en c ***lenguaje de bajo nivel*** El lenguajes es muy 
estricto.

Las variables se han de definir y crear antes de usarlas en el programa.


> Ejemplo ***un programa muy basico en C***


``` c
#include <stdio.h> //Biblioteca estandar entrada/salida

int main(){
    //Declaramos, definimos variables
    int edad;
    
    //Obtenemos datos del usuario
    printf("Que edad tienes? "); //instrucción que imprime por pantalla
    
    //Entrada de datos estandar
    scanf("%S", edad);

    //Muestra por pantalla la edad del usuario
    printf("mi edad es: %d\n", edad); 

    return 0;       //Intrucción de control que termina el programa
}

```

variable conteneder de datos guarda en su interior un tipo de dato  
ya definido de acuerdo a su necesidad.

tipos de datos

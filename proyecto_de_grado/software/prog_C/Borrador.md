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
    scanf("%d", edad);

    //Muestra por pantalla la edad del usuario
    printf("mi edad es: %d\n", edad); 

    return 0;       //Intrucción de control que termina el programa
}

```

## Modificadores de tipo

Los modificadores de tipo son palabras clave que se usan para cambiar o refinar 
el significado de los tipos de datos básico en c, afectando el tamaño y el 
rango de los valores que una variable puede almacenar.

### Tipos de modificadores:
    - signed: 


## Especificadores de formato

Los especificadores de formato son secuencias de escape que se utilizan con  
funcioenes de  ***entrada/salida*** como `printf()` y `scanf()`. Comienza con 
un signo de porcentaje `%` seguido de un caracter que indica el tipo de dato 
que se esta leyendo o imprimiendo.

### Ejemplo de especificadores:

    - %d: para números enteros con signo (int)
    - %c: para un solo carácter (char)
    - %f: para número de punto flotante (float)
    - %lf: para número de punto flotante de doble precisión (double)
    - %s: para cadena de caracteres

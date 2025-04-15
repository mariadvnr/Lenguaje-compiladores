# Lenguaje-compiladores
En los archivos anteriores se encuentran 2 ejercios, los cuales nos piden lo siguiente

# Lenguaje
El legunaje utilizado para programar los ejercios fue el Lenguaje C. 

# Compilador
Para programar en C se hizo uso del compilador Dev-C++.

# Ejercicio 2
Calcula y muestra los coeficientes de un binomio, siempre y cuando el exponente ingresado por el usuario sea un entero no negativo, además muestra el triángulo de Pascal hasta la fila correspondiente al exponente ingresado.

## Contenido

## Descripción

El programa solicita al usuario que ingrese un exponente entero. Luego, realiza las siguientes acciones:

1.  **Genera y muestra el triángulo de Pascal:** Utiliza la función `coeficiente` para calcular los coeficientes binomiales y los organiza en forma de triángulo.
2.  **Muestra la expansión binomial:** Imprime por pantalla el triángulo de Pascal.
3.  **Muestra el resultado final:** Muestra por pantalla el resultado final del binomio del cual se desea saber sus coeficientes.

## Cómo utilizar

1.  **Ingresa el exponente:** El usuario debera ingresar el valor del exponente.
2.  **Visualiza la salida:** El programa mostrará el triángulo de Pascal y los coeficientes que tendra el binomio.

## Funciones

  **int fact(int n)**
  1. **Descripción:** Calcula el factorial de un número entero no negativo `n`.
  2. **Parámetros:***
     - `n`: El número entero del cual se calculará el factorial.
  4. **Retorno:** Retornara el factorial de `n`.

  **int coeficiente(int x, int y)**
  1. **Descripción:** Calcula el coeficiente binomial.
  2. **Parámetros:**
        - `x`: El valor de i.
        - `y`: El valor de j.
    * **Retorno:** El valor del coeficiente de binomio binomial.

## Ejemplo
Binomio con exponente 7: 
 1
 1 1
 1 2 1
 1 3 3 1
 1 4 6 4 1
 1 5 10 10 5 1
 1 6 15 20 15 6 1
 1 7 21 35 35 21 7 1

El resultado del binomio (considerando (a+b)^7) es:
x^7 + 7x^6 + 21x^5 + 35x^4 + 35x^3 + 21x^2 + 7x^1 + 1

# Ejercicio 4
El programa solicita al usuario que introduzca una cadena de texto y, a continuación, una palabra que desea buscar dentro de esa cadena. El programa recorre la cadena de texto comparando segmentos de la misma longitud que la palabra buscada. Finalmente, muestra la cantidad de veces que la palabra buscada se encontró en la cadena.

## Cómo utilizar

1.  **Ingresa la cadena:** Cuando se le solicite, introduce la cadena de texto en la que deseas buscar. 
2.  **Ingresa la palabra a buscar:** El usuario introduce la palabra que deseas contar en la cadena.
3.  **Visualiza el resultado:** El programa mostrará cuántas veces se encontró la palabra en la cadena.

## Variables

* `cadena[250]`: Un array de caracteres para almacenar la cadena de texto ingresada por el usuario.
* `palabra[10]`: Un array de caracteres para almacenar la palabra a buscar ingresada por el usuario.
* `cadCopia[10]`: Un array de caracteres utilizado para almacenar temporalmente un segmento de la `cadena` con la misma longitud que la `palabra` para la comparación.
* `cant`: Una variable entera para almacenar la longitud de la `palabra` a buscar.
* `cad`: Una variable entera para almacenar la longitud de la `cadena` de texto.
* `i`, `j`, `y`: Variables enteras utilizadas como contadores en los bucles `for`.
* `ocur`: Una variable entera para almacenar el número total de ocurrencias encontradas de la `palabra` en la `cadena`.
* `cont`: Una variable entera utilizada como contador para verificar si un segmento de la `cadena` coincide completamente con la `palabra`.

## Ejemplo
Ingrese una cadena: Este es un ejemplo de una cadena de ejemplo.
Ingrese la palabra buscar: ejemplo
longitud de la cadena: 40
longitud de la palabra a buscar: 7
La palabra ejemplo se repite 2 veces en el texto...




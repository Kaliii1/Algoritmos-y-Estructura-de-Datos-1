# Algoritmo y Estructura de Datos 1

## Proyecto 2
Este es un conjunto de funciones en Haskell para la materia Algoritmos 1, que se describen a continuación:

- Se definen nuevos tipos de datos como "Carrera", "NotaBasica", "Persona", "Alteracion", y "NotaMusical" con sus respectivos valores y funciones relacionadas.
- Se implementan funciones para encontrar el mínimo elemento de una lista, contabilizar elementos de un tipo específico en una lista, y manipular notas musicales con alteraciones.
- Se define una función para obtener el primer elemento de una lista encapsulado en un "Maybe" para manejar el caso de lista vacía.
- Se define un tipo de dato "Cola" para representar una cola de personas y se implementan funciones para encolar y atender personas en la cola.
- Se define un nuevo tipo de dato "ListaAsoc" que representa una lista asociativa con nodos que contienen dos valores: una clave de tipo "a" y un valor de tipo "b".
- Se implementan funciones para obtener la longitud de una lista asociativa, concatenar dos listas asociativas, agregar pares clave-valor a una lista asociativa, obtener una lista de pares clave-valor de una lista asociativa, buscar un valor asociado a una clave en una lista asociativa y borrar un par clave-valor de una lista asociativa.
- Se define un tipo de dato "GuiaTelefonica" como una instancia específica de la lista asociativa con claves de tipo "String" y valores de tipo "(Int, Int)" que representa una guía - telefónica.
- Las funciones implementadas manejan casos de lista vacía, buscan y borran pares clave-valor en la lista asociativa, y retornan "Nothing" en caso de no encontrar la clave buscada.
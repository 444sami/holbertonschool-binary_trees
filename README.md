<h1 align=center>Holberton School - Binary Trees project</h1>
<h2 align=center>Learning Objectives</h2>
<h3>At the end of this project, you are expected to be able to explain to anyone, without the help of Google:</h3>

* What is a binary tree

* What is the difference between a binary tree and a Binary Search Tree

* What is the possible gain in terms of time complexity compared to linked lists

* What are the depth, the height, the size of a binary tree

* What are the different traversal methods to go through a binary tree

* What is a complete, a full, a perfect, a balanced binary tree

<details>
  <summary align=center>Anotaciones</summary> 
  
  <h2>ÁRBOLES BINARIOS</h2>
<p>Un árbol binario es una estructura de datos de tipo jerárquico en la cual cada nodo puede tener un hijo izquierdo y un hijo derecho, que pueden tener cero, uno o dos hijos (subárboles). Los árboles binarios son muy similares a las listas doblemente enlazadas, en el sentido que tienen dos punteros que apuntan a otros elementos, pero no tienen una estructura lógica de tipo lineal o secuencial como aquellas, sino ramificada. Tienen aspecto de árbol, de ahí su nombre.</p>
  
  <img src="https://www.tutorialspoint.com/data_structures_algorithms/images/tree_data_structure.jpg">

<h3>NODOS</h3>
<p>Un árbol binario puede tener cero nodos y este caso se dice que está vacío. Puede tener un sólo nodo, y en este caso solamente existe la raíz del árbol o puede tener un número finito de nodos.
Se le llama nodo interno a todos los nodos que no hacen referencia a NULL, si alguno tiene referencia a NULL se le denomina nodo externo.</p>

**TIPOS DE NODOS**
  
  * Nodo hijo: cualquiera de los nodos apuntados por uno de los nodos del árbol.
  * Nodo padre: nodo que contiene un puntero al nodo actual.
  
  (cada nodo sólo puede ser apuntado por otro nodo, es decir, cada nodo sólo tendrá un padre, menos el nodo raíz.)

**En cuanto a la posición dentro del árbol se tiene:**
  * Nodo raíz: nodo que no tiene padre. Este es el nodo que usaremos para referirnos al árbol.
  * Nodo hoja: nodo que no tiene hijos.

<h3>PROPIEDADES</h3>
  
  * Orden: es el número potencial de hijos que puede tener cada elemento de árbol. De este modo, se dice que un árbol en el que cada nodo puede apuntar a otros dos es de orden dos, si puede apuntar a tres será de orden tres y así sucesivamente.
  * Grado: el número de hijos que tiene el elemento con más hijos dentro del árbol.
  * Nivel: se define para cada elemento del árbol como la distancia a la raíz, medida en nodos. El nivel de la raíz siempre será cero y el de sus hijos uno. Así sucesivamente.
  * Altura: la altura de un árbol se define como el nivel del nodo de mayor nivel. Como cada nodo de un árbol puede considerarse a su vez como la raíz de un árbol, también se puede hablar de altura de ramas.

<h3>IMPLEMENTACIÓN</h3>
<p>Los árboles binarios son estructuras de datos jerárquicas, no lineales, por lo tanto su forma de recorrerlos difiere en comparación a las listas que son estructuras de datos de tipo lineal.

  El recorrido de un árbol se lleva a cabo en tres sentidos: Preorden, Inorden y Postorden.</p>
  **Pre-orden:** 
  
    paso 1. visitar nodo raíz
  
    paso 2. recorrer subárbol izquierdo
  
    paso 3. recorrer subárbol derecho
  
  **Post-orden:** 
  
    paso 1. recorrer subárbol izquierdo
  
    paso 2. recorrer subárbol derecho
  
    paso 3. visitar nodo raíz
  
  **In-orden:** 
  
    paso 1. recorrer subárbol izquierdo
  
    paso 2. visitar nodo raíz
  
    paso 3. recorrer subárbol derecho
  </details>

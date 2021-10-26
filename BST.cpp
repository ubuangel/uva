
//https://www.youtube.com/watch?v=COZK7NATh4k 
#include<iostream>
using namespace std;
//Definicion de nodo para BST
struct BstNodo {
	int dato; 
	BstNodo* izquierda;
	BstNodo* derecha;
};

// Funcion para crear nuevo nodo en heap
BstNodo* ObtenerNuevoNodo(int dato) {
	BstNodo* nuevoNodo = new BstNodo();
	nuevoNodo->dato = dato;
	nuevoNodo->izquierda = nuevoNodo->derecha = NULL;
	return nuevoNodo;
}

// Para insertar dato en BST, returns direcon del nodo raiz 
BstNodo* Insert(BstNodo* root,int dato) {
	if(root == NULL) { // empty tree
		root = ObtenerNuevoNodo(dato);
	}
	// Si el dato a ser insertado es menor, inserta en el subarbol izquierdo. 
	else if(dato <= root->dato) {
		root->izquierda = Insert(root->izquierda,dato);
	}
	// else, inserta en el subarbol derecho
	else {
		root->derecha = Insert(root->derecha,dato);
	}
	return root;
}
//para buscar un elemento en un BST, retorna true si el elemto es encontrado
bool Buscar(BstNodo* root,int dato) {
	if(root == NULL) {
		return false;
	}
	else if(root->dato == dato) {
		return true;
	}
	else if(dato <= root->dato) {
		return Buscar(root->izquierda,dato);
	}
	else {
		return Buscar(root->derecha,dato);
	}
}
int main() {
	BstNodo* root = NULL;  // creando un arbol vacio
	/*codigo para probar la logica*/
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	// pregunta al usuario para ingresar un numero.  
	int numero;
	cout<<"Igresar numero a Buscar\n";
	cin>>numero;
	//Si el numero es encontrado , print "Encontrado"
	if(Buscar(root,numero) == true) cout<<"Encontrado\n";
	else cout<<"No Encontrado\n";
}

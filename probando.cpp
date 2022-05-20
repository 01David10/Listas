# include <iostream>
# include <stdlib.h>
# include <string>

using namespace std;

// estructura nodo
struct Nodo
{
    int dato;
    Nodo *siguiente;
};

// parametrizacion
void INSERTAR_LISTA (Nodo *&, int);

// programa principal
int main ()
{
    // variables
    int dato;
    string Pregunta;

    // punteros
    Nodo *lista = NULL;     // creo que es la cabecera

    cout << "Desea agregar un nuevo elemento a la lista? ";     // asi puede insertar varios al tiempo
    cin >> Pregunta;

    while (Pregunta == "si")
    {
        cout << "Digite un numero ";
        cin >> dato;

        INSERTAR_LISTA (lista, dato);

        cout << "Desea agregar un nuevo elemento a la lista? ";
        cin >> Pregunta;
    } 

    getchar();
    getchar();
    return 0;
}

// procedimiento para insertar un elemento a la lista (en orden)
void INSERTAR_LISTA (Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while (aux1 != NULL && aux1->dato < n)
    {
        aux2= aux1;
        aux1 = aux1->siguiente;
    }
    
    if (lista == aux1)
    {
        lista = nuevo_nodo;
    }
    else
    {
        aux2->siguiente = nuevo_nodo;
    }
    
    nuevo_nodo->siguiente = aux1;

    cout << "\t Elemento " << n << " insertado a la lista correctamente" << endl;
}

// n es dato
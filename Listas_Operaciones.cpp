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
void MENU (void);
void INSERTAR_LISTA_ORDENADA (Nodo *&, int);
void IMPRIMIR_LISTA (Nodo *);
void IMPRIMIR_LISTA_DETALLE (Nodo *);

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

        INSERTAR_LISTA_ORDENADA (lista, dato);

        cout << "Desea agregar un nuevo elemento a la lista? ";
        cin >> Pregunta;
    } 

    IMPRIMIR_LISTA_DETALLE (lista);

    getchar();
    getchar();
    return 0;
}

// procedimiento para menu
void MENU ()
{
     // variables
    short Opcion;
    do
    {
        cout << "Menu de opciones" << endl;
        cout << "Por favor ingrese la opcion que desea: " << endl;

        cout << "1 - Punto 1" << endl;
        
        cin >> Opcion;

        switch (Opcion)
        {
            case 1:
				
            break;

            case 2:
				
            break;

            case 3:
				
            break;
        
            default:
                exit (0);
            break;
        }
    }
    while (Opcion);
}

// procedimiento para insertar un elemento a la lista (en orden)
void INSERTAR_LISTA_ORDENADA (Nodo *&lista, int dato)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = dato;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while (aux1 != NULL && aux1->dato < dato)
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

    cout << "\t Elemento " << dato << " insertado a la lista correctamente" << endl;
}

// procedimiento para imprimir la lista
void IMPRIMIR_LISTA (Nodo *lista)
{
    int i = 0;
 
    while(lista != NULL)
    {
        cout << "Elemento " << i+1 <<": " << lista->dato << endl;

        lista = lista->siguiente;

        i++;
    }
}

// procedimiento para imprimir la lista (con detalle)
void IMPRIMIR_LISTA_DETALLE (Nodo *lista)
{
    // variables
    short i;

    // puntero
    Nodo *Aux;

	Aux = lista;
    i = 1;

	while(Aux != NULL)
	{
		cout << endl;
        cout << "Posicion del elemento " << i << ": " << Aux << endl;
		cout << "Dato del elemento " << i << ": " << Aux->dato << endl;
		cout << "Hacia donde apunta el elemento " << i << ": " << Aux->siguiente << endl << endl;

		Aux = Aux->siguiente;	

        i ++;
	}
}



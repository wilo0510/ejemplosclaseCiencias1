#include<iostream>
using namespace std;
struct Nodo{
	int elemento;
	Nodo *siguiente;
	};
class ListaDinamica{
	private:
	Nodo *cabeza;
	
	
	public:
	ListaDinamica()
		{
		cabeza=NULL;
		}
	void agregar(int);
	void mostrar();
	int eliminar();
	void eliminar(int);
	Nodo buscar(int);
	void ordenar();
	};
	
void ListaDinamica::agregar(int elemento){
	Nodo *p=new Nodo;
	(*p).elemento=elemento;
	(*p).siguiente=cabeza;
	cabeza=p;
	}
void mostrar()
	{
		Nodo *p=cabeza;
		while(p!=NULL)
		{
			cout<<p->elemento<<" ";
			p=p->siguiente;
		}
			
	}
	char menu()
	{
		char opcion;
		cout<<"\n MENU \n";
		cout<<"(A)gregar \n";
		cout<<"(E)liminar \n";
		cout<<"(M)ostrar \n";
		cout<<"(B)uscar \n";
		cout<<"(O)rdenar \n";
		cout<<"(S)alir \n";
		cout<<"Escoja una opcion: ";
		cin>>opcion;
		return opcion;
				
		}
int main(){
	ListaDinamica lista;
	char opcion;
	int elemento;
	do{opcion=menu();
		switch(opcion)
		{
			case'a':
			case'A':cout<<"Digite el elemento: ";
					cin>>elemento;
					lista.agregar(elemento);
					break;
			case 'm':
			case 'M':cout<<"\n Los elementos almacenados ; \n";
					lista.mostrar();
					break;
					
		}
	}
	lista.agregar(20);
	cout<<"Elementos almacenados :\n";
	lista.mostrar();
	lista.agregar(45);
	lista.agregar(19);
	cout<<"Elementos almacenados :\n";
	lista.mostrar();
	}

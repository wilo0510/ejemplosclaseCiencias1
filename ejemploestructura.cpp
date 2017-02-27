#include<iostream>
using namespace std;
struct Nodo{
	int elemento;
	Nodo *siguiente;
	};
class ListaDinamica{
	private:
	Nodo cabeza;
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
	(*p).siguente=cabeza;
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
int main(){
	ListaDinamica lista;
	lista.agregar(20);
	cout<<"Elementos almacenados :\n";
	lista.mostrar();
	lista.agregar(45);
	lista.agregar(19);
	cout<<"Elementos almacenados :\n";
	lista.mostrar();
	}

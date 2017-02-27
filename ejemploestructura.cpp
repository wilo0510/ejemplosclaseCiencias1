#include<iostream>
using namespace std;
struct Nodo{
	int elemento;
	Nodo siguiente;
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

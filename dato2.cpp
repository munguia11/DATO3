#include <iostream>
using namespace std;
const int N = 20;

struct Dato{
	int dato1;
	char dato2[N];
};
struct Dato2{
	int dato3;
	struct Dato Sdato;
	
};
int main (){
	char*locale;
	locale=setlocale(LC_ALL,"");
	struct Dato var1;
	struct Dato *ptr;
	ptr=&var1;
	struct Dato2 var2;
	struct Dato2 *ptr2;
	ptr2=&var2;
	
	cout<<"puntero= "<<&ptr<<endl;
	cout<< "direccion de ptr"<< ptr<<endl;
	cout<<"\ningresa dato 1:";
	cin >>(*ptr).dato1;
	cout<<"\ningresa dato 2:";
	fflush(stdin);
	cin.getline((*ptr).dato2,N,'\n');
	cout<< "\nValor de dato 1:" << (*ptr).dato1<<endl;
	cout<< "Valor de dato 2:" << (*ptr).dato2<<endl;
	
	cout<<"\ningresa dato 1:";
	cin>> ptr2->Sdato.dato1;
	cout<<"\ningresa dato 2:";
	fflush(stdin);
	cin.getline(ptr2->Sdato.dato2,N,'\n');
	cout<<"\ningresa dato 3:";
	cin>> ptr2->dato3;
	cout<<"\n valor dato 1:" << ptr2-> Sdato.dato1 <<endl;
	cout<<"valor  dato 2:" << ptr2-> Sdato.dato2 <<endl;
	cout<<"valor dato 3:" << ptr2-> dato3 <<endl;
	
	
	return 0;
}

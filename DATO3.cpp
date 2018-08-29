#include <iostream>
using namespace std;
struct Dato{
	int dato1;
	char dato2[20];
};
int main (int argc, char**argv){
	struct Dato var1;
	struct Dato *ptr;
	ptr=&var1;
	cout<<"puntero= "<<&ptr<<endl;
	cout<< "direccion de ptr"<< ptr<<endl;
	cin >>(*ptr).dato1;
	cout<<(*ptr).dato1<<endl;
	cin>>ptr->dato1;
	cout<<ptr->dato1<<endl;
	cout<<"ingresar char"<<endl;
	fflush(stdin);
	cin.getline(ptr->dato2,20,'\n');
	cout<<ptr->dato2<<endl;
	return 0;
}


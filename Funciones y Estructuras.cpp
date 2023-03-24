#include <iostream>

using namespace std;
/*
struct Estudiante{
	int codigo[4];
	string nombre[4];
	int nota[4];
};

main(){
	
	Estudiante estudiante;
	for(int i=0;i<4;i++){
		cout<<"_____________________"<<endl;
		cout<<"Ingrese codigo: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Ingrese Nombre Completo: ";
		getline(cin,estudiante.nombre[i]);
		cout<<"Ingrese Nota: ";
		cin>>estudiante.nota[i];	
	}
	
	for(int i=0;i<4;i++){
		cout<<"_____________________"<<endl;
		cout<<"Codigo:"<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo:"<<estudiante.nombre[i]<<endl;
		cout<<"Nota:"<<estudiante.nota[i]<<endl;
	}
	
	
	system("pause");
}*/

struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
};

main(){
	Estudiante estudiante;
	
	int fila=0, columna=0;
	cout<<"Cuantos Estudiantes desea agregar: "<<endl;
	cin>>fila;
	
	cout<<"Cuantas notas por Estudiantes desea agregar: "<<endl;
	cin>>columna;
	
	estudiante.codigo = new int[fila];
	estudiante.nombre = new string[fila];
	estudiante.notas = new int *[fila];
	for(int i=0;i<fila;i++){
		estudiante.notas[i] = new int [columna];
	}
	cout<<"_________________INGRESO DE NOTAS_______________"<<endl;
	for(int i=0;i<fila;i++){
		cout<<"Codigo["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre Completo["<<i<<"]:";
		getline(cin,estudiante.nombre[i]);
		for(int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<ii<<"] :";
			cin>>*(*(estudiante.notas+i)+ii);
		}
		cout<<"______________________________"<<endl;
	}
	cout<<"_________________MOSTRAR DATOS___________________"<<endl;
	for(int i=0;i<fila;i++){
		cout<<"Codigo["<<i<<"]:"<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo["<<i<<"]:"<<estudiante.nombre[i]<<endl;
		for(int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<i<<"] :"<<*(*(estudiante.notas+i)+ii)<<endl;
		}
		cout<<"______________________________"<<endl;
	}
	
	for(int i=0;i<fila;i++){
		delete[] estudiante.notas[i];
	}
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;
	delete[] estudiante.notas;
	
	system("pause");
};



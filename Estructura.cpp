#include <iostream>
using namespace std;

/*int suma(int num1,int num2){
	int resultado = 0;
	resultado = num1+num2;
	
	return resultado;
}

int resta(int num1,int num2){
	int resultado = 0;
	resultado = num1-num2;
	
	return resultado;
}


*/
int suma(int num1, int num2,int num3);
void suma(int &num1, int &num2);


main(){
	int a = 10, b = 20;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	
	/*cout<<suma2(10,20)<<endl;
	cout<<suma3(10,20,40)<<endl;
	cout<<suma(10,20)<<endl;
	cout<<resta(10,20)<<endl;
	cout<<suma(50,70)<<endl;
	cout<<suma(90,10)<<endl;*/
	
	system("pause");
}

//funcion que sume dos valores
int suma(int num1, int num2, int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}

//Metodo
void suma(int &num1, int &num2){
	int resultado = 0;
	num1+=1;
	num2+=1;
	resultado = num1+num2;
	cout<<resultado<<endl;
}

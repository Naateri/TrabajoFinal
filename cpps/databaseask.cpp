#include "databaseask.h"
#include <string.h>
#include <iostream>
using namespace std;
char* DatabaseAsk::askName(){
	char *name;
	name = new char[15];
	cout<<"Ingrese un nombre: "<<endl;
	cin>>name;
	return name;
}

char* DatabaseAsk::askLName(){
	char *name;
	name = new char[15];
	cout<<"Ingrese un apellido: "<<endl;
	cin>>name;
	return name;
}
int DatabaseAsk::askAge(){
	int age;
	cout<<"Ingrese su edad: "<<endl;
	cin>>age;
	return age;
}
char DatabaseAsk::askSex(){
	char sex;
	cout<<"Ingrese su sexo: "<<endl;
	cin>>sex;
	return sex;
}

char* DatabaseAsk::askCountry(){
	char *name;
	name = new char[15];
	cout<<"Ingrese su pais: "<<endl;
	cin>>name;
	return name;
}
//CHAU PERSONA
//Piloto
int DatabaseAsk::askPoints(){
	int points;
	cout<<"Ingrese sus puntos(si no hay ingrese 0): "<<endl;
	cin>>points;
	return points;
}
int DatabaseAsk::askPay(){
	int pay;
	cout<<"Ingrese su paga: "<<endl;
	cin>>pay;
	return pay;
}
int DatabaseAsk::askNumber(){
	int number;
	cout<<"Ingrese el numero: "<<endl;
	cin>>number;
	return number;
	
}

//CHAU PILOTO
//Carro
char* DatabaseAsk::askEngine(){
	char *engine;
	engine = new char[10];
	cout<<"Ingrese su motor: "<<endl;
	cin>>engine;
	return engine;
}

//CHAU CARRO
//SPONSOR
int DatabaseAsk::askIngresos(){
	int ingresos;
	cout<<"Ingrese sus ingresos: "<<endl;
	cin>>ingresos;
	return ingresos;
}

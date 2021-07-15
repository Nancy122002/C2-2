#include<iostream>
#include<stdlib.h>
#include<string>
#ifdef _libreria
#define _libreria
#include "libreria."
#include "libreria.c"
#include "MOSTRAR DATOS PERSONALES.h" //NANCY VALLECILLA
#include "CALCULAR EDAD.h"    //JAMA PATRICIA
#include "peso.h"            //ORTIZ EVELIN
#endif
using namespace std;
int main()
{
	int op;
	int edad,actual,nacimiento;
do{
	system("cls");
	cout<<"*****************************************************"<<endl<<endl;
	cout<<"           USO DE CLASES Y OBJETOS"                   <<endl<<endl;
	cout<<"*****************************************************"<<endl<<endl;
	cout<<"1.-INGRESAR Y MOSTRAR DATOS PERSONALES\n";
	cout<<"2.-MOSTRAR LA EDAD DE LA PERSONA\n";
	cout<<"3.-MOSTRAR EL INDICE DE LA COORPORAL Y FELICITARLO SI SE ENCUENTRA BIEN \n";
	cout<< "0.-SALIR DEL MENU\n";
	cout<<"INGRESE UNA OPCION :"; cin>>op;
	switch(op){
		case 1:
			system("cls");
		cout<<"   || INGRESAR Y MOSTRAR DATOS PERSONALES ||"<<endl;
		
		system("pause");
        break;
		case 2:
		system("cls");
		cout<<"   || MOSTRAR LA EDAD DE LA PERSONA ||    "<<endl;
		system("pause");
        break;	
		case 3:
		system("cls");
		cout<<"    ||  MOSTRAR EL INDICE COORPORAL ||   "<<endl;
		system("pause");
        break;		
	}
}while(op!=0);

	return(0);
}

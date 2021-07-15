#include <iostream>
#include <fstream>
using namespace std;
void escribir();
	int main(){
		escribir();
		system("pause");
		return 0;
	}
void escribir(){
	ofstream archivo;
	
	archivo.open("principal.txt",ios::out);
	
	if(archivo.fail()){
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	archivo<<" ";
	archivo.close();
}

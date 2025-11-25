#include <iostream>
using namespace std;

class Employee // OJO TENER CLARO QUE CON CHARS LAS CLASES SON INTERESANTES YA QUE HAY QUE USAR PUNTEROS Y NOSE PUEDEN INICIALIZAR FUERA DEL CUERPO DEL CONSTRUCTOR...
{
protected:
	char name[40];
public:
	Employee(char* n = (char*)"") {
		strcpy_s(name, n);  // el desreferenciador de n es igual a "" (por defecto de constructor) luego igualo name a n
	}
	void print_position() {
		cout << " Position not defined" << endl;
	}
		char* GetName() { return name; }
	};
	//In this case, having only a function and since this is very simple, it has been
	//decided to implement it as "inline"

class Manager : public Employee
{
public:
	Manager(char* n = (char*)"") { 
		strcpy_s(name, n); 
	}
	void print_position() { 
		cout << " is a manager" << endl; 
	}
};
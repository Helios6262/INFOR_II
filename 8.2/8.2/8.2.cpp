/* using namespace std;
#include <iostream>
#include <string.h>
#include "student.h"

void main()
{
    student s1;                          // usa valores por defecto ("joe", 0)
    student s2((char*)"Ana", 6.5);      // nombre y media dados
    student s3;

    s3.get();                            // pide nombre y media por teclado

    cout << "Student's List:" << endl;
    s1.prt();
    s2.prt();
    s3.prt();

    cout << "End" << endl; 
}*/

// main.cpp
#include <iostream>
using namespace std;
#include "Student.h"

void main()
{
    int n = 0;
    cout << "Dynamic objects" << endl;

    student* pl[100];                 // array of pointers to dynamic Students (100 empty pointersfor dynamic students)

    // Ejemplo de creación e impresión
    pl[n] = new student((char*)"Ana", 6.0);   // example how to create a new Student
    pl[n]->prt();                             // example how to print data
    n++;

    int opc;
    while (1) {
        cout << "** Menu **\n1.Add 2.Prt 3.Exit? ";
        cin >> opc;

        if (opc == 1) {
            // --- Add ---
            if (n < 100) {
                pl[n] = new student();
                pl[n]-> get();
            }
            else {
                cout << "overflow";
            }
            n++;

        }
        else if (opc == 2) {
            for (int i = 0; i < n;i++) {
                pl[i]->prt();
            } // --- Print ---
        }
        else {
            // 3 u otra cosa: salir
            break; // exits from while
        }
    }

    // Liberar memoria
    for (int i = 0; i < n; ++i)
        delete pl[i];

    cout << "End" << endl;
}
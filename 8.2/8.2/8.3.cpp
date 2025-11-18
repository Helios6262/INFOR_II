// main.cpp
#include <iostream>
using namespace std;
#include "Student.h"

void main()
{
    int n = 0;
    cout << "Dynamic objects" << endl;

    student* pl[100];                 // array of pointers to dynamic Students

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
                pl[n] = new student;  // crea objeto dinámico
                pl[n]->get();         // pide nombre y nota
                n++;
            }
            else {
                cout << "List full" << endl;
            }

        }
        else if (opc == 2) {
            // --- Print ---
            cout << "Students list:" << endl;
            for (int i = 0; i < n; ++i)
                pl[i]->prt();

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
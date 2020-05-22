/*
Código de proyecto final
A01706095
Mayo 2020
*/

#include <iostream>

#include "Hospitalizado.h" // Importa la clase Hospital
#include "Paciente.h"

using namespace std;

int main(){
Hospitalizado paciente1("Juan","Lopez", 2, "21/05/2020");
cout<<"nombre: "<<paciente1.get_nombre()<<endl;
cout<<"apellido: "<<paciente1.get_apellidos()<<endl;
cout<<"dias de estancia: "<<paciente1.get_dest()<<endl;
cout<<"fecha de ingreso: "<<paciente1.get_fingreso()<<endl;

return 0;
};

/*
Avance 2 de proyecto:

Este programa crea un objeto de tipo hospitalizado que hereda de la clase paciente
Para este avance solo se implemento la herencia de paciente a la clase hospitalizado,
aunque para futuras entregas se crearán más, por lo que aqui solo se muestra paciente
y su clase hija hospitalizado para futuras entregas se implementarán las demás clases
incluyendo ambulatorio y las demás.
Solo se crea un objeto de tipo hospitalizado.
*/

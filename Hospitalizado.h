#ifndef HOSPITALIZADO_H
#define HOSPITALIZADO_H

#include <iostream>
#include "Paciente.h"

using namespace std;
// Clase hospitalizado que hereda de clase paciente
class Hospitalizado: public Paciente {
  private:
    int diasEstancia;
    string fechaIngreso;

  public:
    // Declaración del constructor 1
    Hospitalizado();
    Hospitalizado(string nom, string ape, int dest, string fingreso);

    //getters
    int get_dest(){
      return diasEstancia;
    }
    string get_fingreso(){
      return fechaIngreso;
    }
};
// Desarrollo del constructor 1

// Sobrecarga
Hospitalizado::Hospitalizado(){}
//Constructor 1
Hospitalizado::Hospitalizado(string nom, string ape, int dest,
string fingreso):Paciente(nom,ape){
  diasEstancia = dest;
  fechaIngreso = fingreso;
}

#endif //HOSPITALIZADO_H

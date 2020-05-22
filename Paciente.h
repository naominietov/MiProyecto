/*
Declaración de la clase
Clase: Paciente (Clase abstracta)
*/
#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>

using namespace std;

class Paciente{
  protected: // Atributos
    string nombre;
    string apellidos;
    int edad;
    string padecimiento;

  public: // Métodos
	Paciente(){};
    // Constructor1
    Paciente(string nom, string ape){
      nombre = nom;
      apellidos = ape;
    }
    // Constructor2
    Paciente(int ed, string padec){
      edad = ed; //CAMBIAR A ED
      padecimiento = padec;
    }
    //Getters
    string get_nombre();
    string get_apellidos();
    int get_edad();
    string get_padec();

    //Setters
    void set_nombre(string nom); //Establece el nombre del px
    void set_apellidos(string ape); //Establece el apellido del px
    void set_edad(int ed); // Establece edad del px
    void set_padecimiento(string padec); // Establece padecimiento

}; //Fin de la clase Paciente

// Desarrollo de las funciones de los getters
string Paciente::get_nombre(){
  return nombre;
}
string Paciente::get_apellidos(){
  return apellidos;
}
int Paciente::get_edad(){
  return edad;
}
string Paciente::get_padec(){
  return padecimiento;
}

// Desarrollo de las funciones de los setters
void Paciente::set_nombre(string nom){
  nombre = nom;
}
void Paciente::set_apellidos(string ape){
  apellidos = ape;
}
void Paciente::set_edad(int ed){
  edad = ed;
}
void Paciente::set_padecimiento(string padec){
  padecimiento = padec;
}

#endif //PACIENTE_H

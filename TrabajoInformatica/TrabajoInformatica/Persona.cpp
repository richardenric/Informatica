//
//  Persona.cpp
//  TrabajoInformatica
//
//  Created by Richard villanera quiroga on 13/05/2019.
//  Copyright © 2019 Richard villanera quiroga. All rights reserved.
//

#include "Persona.h"
#include <iostream>
using namespace std;
Persona::Persona()
{
    int id=0;
    char nom[60];
    strcpy(nom,"");
    setPersona(id, nom);
}
void Persona::setPersona(int i, char n[60])
{
    setId(i);
    setNombre(n);
}
void Persona::setId(int i)
{
    Identidad=i;
}
void Persona::setNombre(char n[60])
{
    strcpy(nombreCompleto, n);
}
int Persona::obtenerID()
{
    return Identidad;
}
char *Persona::obtenerNombre()
{
    return nombreCompleto;
}
void Persona::capturaPersona()
{
    int id=0;
    char nm[60];
    cout<<"Número de identidad: ";
    cin>>id;
    cin.ignore();
    cout<<"Nombre: ";
    cin.getline(nm, 60);
    setPersona(id, nm);
}
void Persona::imprimirPersona()
{
    cout<<Identidad<<" "<<nombreCompleto<<endl;
}

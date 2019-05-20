//
//  Empleado.cpp
//  TrabajoInformatica
//
//  Created by Richard villanera quiroga on 13/05/2019.
//  Copyright © 2019 Richard villanera quiroga. All rights reserved.
//

#include "Empleado.h"
#include <iostream>
using namespace std;
Empleado::Empleado()
{
    Tiempo he;
    Tiempo hs;
    setEmpleado(he, hs);
}
void Empleado::setEmpleado(Tiempo e, Tiempo s)
{
    setHoraEntrada(e);
    setHoraSalida(s);
}
void Empleado::setHoraEntrada(Tiempo he)
{
    horaEntrada=he;
}
void Empleado::setHoraSalida(Tiempo hs)
{
    horaSalida=hs;
}
void Empleado::capturaEmpleado()
{
    Tiempo e,s;
    cout<<"Hora de entrada"<<endl;
    e.capturaHora();
    cout<<"Hora de salida"<<endl;
    s.capturaHora();
    setEmpleado(e, s);
}
void Empleado::imprimirEmpleado()
{
    imprimirPersona();
    cout<<"Hora de entrada: ";
    horaEntrada.imprimeUniversal();
    cout<<"Hora de salida: ";
    horaSalida.imprimeUniversal();
    cout<<endl;
}

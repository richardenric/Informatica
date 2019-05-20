//
//  Tiempo.cpp
//  TrabajoInformatica
//
//  Created by Richard villanera quiroga on 13/05/2019.
//  Copyright © 2019 Richard villanera quiroga. All rights reserved.
//

#include "Tiempo.h"
#include <iostream>
#include <iomanip>

using namespace std;

Tiempo::Tiempo(int hora,int minuto,int segundo)
{
    sethora(hora, minuto, segundo);
}
void Tiempo::sethora(int hora, int minuto, int segundo)
{
    sethoraEspecial(hora);
    setminuto(minuto);
    setSegundo(segundo);
}
void Tiempo::sethoraEspecial(int h)
{
    hora=(h>=0 && h<24)?h:0; //operador relacional
}
void Tiempo::setminuto(int m)
{
    minuto=(m>=0&& m<60)?m:0;
}
void Tiempo:: setSegundo(int s)
{
    segundo=(s>=0 && s<60)?s:0;
}
int Tiempo::obtenermin() const
{
    return minuto;
}
int Tiempo::obtieneSegundo() const
{
    return segundo;
}
int Tiempo:: obtenerHora() const
{
    return hora;
}
void Tiempo::imprimeUniversal() const
{
    cout<<setfill('0')<<setw(2)<<hora<<":"<<setw(2)<<minuto<<":"<<setw(2)<<segundo;
}
void Tiempo::imprimeEstandar()
{
    cout<<((hora==0 || hora==12)?12:hora%12)<<":"<<setfill('0')<<setw(2)<<segundo<<(hora<12?" AM":" PM");
}
void Tiempo:: capturaHora()
{
    int h=0;
    int m=0;
    int s=0;
    cout<<"Hora: ";
    cin>>h;
    cout<<"Minutos: ";
    cin>> m;
    cout<<"Segundos: ";
    cin>>s;
    sethora(h, m, s);
}

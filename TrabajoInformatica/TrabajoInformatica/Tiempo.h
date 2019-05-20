//
//  Tiempo.h
//  TrabajoInformatica
//
//  Created by Richard villanera quiroga on 13/05/2019.
//  Copyright © 2019 Richard villanera quiroga. All rights reserved.
//

#ifndef Tiempo_h
#define Tiempo_h
class Tiempo
{
public:
    Tiempo(int =0,int =0,int =0); //constructor
    //funciones set
    void sethora(int,int,int);
    void sethoraEspecial(int);
    void setminuto(int);
    void setSegundo(int);
    //funciones obtener
    int obtenerHora() const;
    int obtenermin() const;
    int obtieneSegundo() const;
    //funciones imprimir
    void imprimeUniversal() const; //formato universal hora
    void imprimeEstandar(); //formato estandar de la hora
    //función para capturar la hora
    void capturaHora();
private:
    int hora;//formato 24 horas
    int minuto;
    int segundo;
    
};

#endif /* Tiempo_h */

//
//  Persona.h
//  TrabajoInformatica
//
//  Created by Richard villanera quiroga on 13/05/2019.
//  Copyright © 2019 Richard villanera quiroga. All rights reserved.
//

#ifndef Persona_h
#define Persona_h
class Persona
{
private:
    int Identidad;
    char nombreCompleto[60];
public:
    Persona(); //constructor
    //funciones establecimiento
    void setPersona(int,char[60]);
    void setId(int);
    void setNombre(char [60]);
    //funciones obtener
    int obtenerID();
    char *obtenerNombre();
    //funciones captura datos
    void capturaPersona();
    //función imprimir datos
    void imprimirPersona();
};

#endif /* Persona_h */

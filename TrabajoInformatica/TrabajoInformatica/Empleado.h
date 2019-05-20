//
//  Empleado.h
//  TrabajoInformatica
//
//  Created by Richard villanera quiroga on 13/05/2019.
//  Copyright © 2019 Richard villanera quiroga. All rights reserved.
//

#ifndef Empleado_h
#define Empleado_h
#include "Persona.h"
#include "Tiempo.h"
class Empleado:public Persona
{
public:
    Empleado(); //constructor no recibe parametros
    //funciones set
    void setEmpleado(Tiempo,Tiempo);
    void setHoraEntrada(Tiempo);
    void setHoraSalida(Tiempo);
    //funciones obtener
    Tiempo obtenerHoraEntrada();
    Tiempo obtenerHoraSalida();
    //funcion captura datos
    void capturaEmpleado();
    //funcion imprimir datos
    void imprimirEmpleado();
private:
    Tiempo horaEntrada;
    Tiempo horaSalida;
    
};
#endif /* Empleado_h */

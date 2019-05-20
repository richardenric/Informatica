//
//  main.cpp
//  TrabajoInformatica
//
//  Created by Richard villanera quiroga on 13/05/2019.
//  Copyright © 2019 Richard villanera quiroga. All rights reserved.
//

#include <iostream>
#include "Empleado.h"

using namespace std;
int main()
{
    Empleado e;
    e.capturaPersona();
    e.capturaEmpleado();
    cout <<"-----------IMPRIMIENDO DATOS DE EMPLEADO---------------"<<endl;
    e.imprimirEmpleado();
    
    return 0;
}

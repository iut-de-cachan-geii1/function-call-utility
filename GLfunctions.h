//  Copyright (c) 2020 Antoine Tran Tan
//

#ifndef GLFUNCTIONS_H
#define GLFUNCTIONS_H

#include <string>
#include "GLutilities.h"

// Declarations (ou prototypes) de fonctions pour l'exo 1
bool tester_nombre(int nombre);

// Declarations (ou prototypes) de fonctions pour l'exo 2
bool tester_personnage(std::string personnage);

// Declarations (ou prototypes) de fonctions pour l'exo 3
TConsigneNumerique acquerir(TConsigneAnalogique arg0,TMesure arg1);
TCommandeNumerique traiter(TConsigneNumerique arg0);
TCommandePwm communiquer(TCommandeNumerique arg0 );
TEnergieElectrique alimenter(void);
TEnergieElectriqueModulee distribuer(TEnergieElectrique arg0, TCommandePwm arg1);
TEnergieMecanique convertir(TEnergieElectriqueModulee arg0);


#endif

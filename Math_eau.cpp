#include "Math_eau.h"

//Retourne le volume d'une cuve en litres
double GetVolume(Cuve* uneCuve)
{
    return (uneCuve->GetHauteur() * uneCuve->GetLargeur() * uneCuve->GetProfondeur()) / 1000.;
}

#include "Materiel.h"

Cuve::Cuve()
{
    //ctor
}

Cuve::Cuve(double dfHauteur, double dfLargeur, double dfProfondeur)
{
    m_dfHauteur = dfHauteur;
    m_dfLargeur = dfLargeur;
    m_dfProfondeur = dfProfondeur;
}


Cuve::~Cuve()
{
    //dtor
}

//Assignation des données membres
void Cuve::SetHauteur(double dfHauteur)
{
    m_dfHauteur = dfHauteur;
}

void Cuve::SetLargeur(double dfLargeur)
{
    m_dfLargeur = dfLargeur;
}

void Cuve::SetProfondeur(double dfProfondeur)
{
    m_dfProfondeur = dfProfondeur;
}

//Récupération des données membres
double Cuve::GetHauteur()
{
    return m_dfHauteur;
}

double Cuve::GetLargeur()
{
    return m_dfLargeur;
}

double Cuve::GetProfondeur()
{
    return m_dfProfondeur;
}

#ifndef MATERIEL_H_INCLUDED
#define MATERIEL_H_INCLUDED

class Cuve
{
    public:
        Cuve();
        Cuve(double dfHauteur, double dfLargeur, double dfProfondeur); //Constructeur avec des valeurs en cm
        virtual ~Cuve();

        //Assignation des données membres
        void SetHauteur(double dfHauteur);
        void SetLargeur(double dfLargeur);
        void SetProfondeur(double dfProfondeur);


        //Récupération des données membres
        double GetHauteur();
        double GetLargeur();
        double GetProfondeur();

    protected:

    private:

        double m_dfHauteur; //Hauteur en cm
        double m_dfLargeur; //Largeur en cm
        double m_dfProfondeur; //Profondeur en cm
};

#endif // MATERIEL_H_INCLUDED

#include<iostream>
#include<string>
#include<vector>

#include "main.h"

using namespace std;

Cours::Cours(int c, string n, string t) : code(c) ,
nom(n) , tutor(t){}

Cours::~Cours()
{
    cout << "Objet detruit avec success ! ";
}

void Cours::ajouterEtudiant(Student& etudiant){
    etudiantInscrit.push_back(etudiant);
}

void Cours::afficherInfos(){
    cout << "le cours du code : " << code << "et du nom : "
    << nom << "enseigne par le professeur: " << tutor <<
    "la liste des etudiants inscrit est : " << endl;
    for (int i = 0; i < etudiantInscrit.size(); i++)
    {
        etudiantInscrit[i].affichage();
    }
}
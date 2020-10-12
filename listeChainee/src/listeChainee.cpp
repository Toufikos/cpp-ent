   //============================================================================
// Name        : listeChainee.cpp
// Author      : Toufik
// Version     :
// Copyright   : Your copyright notice
// Description : Liste Chainee in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Element{

	int valeur;
	Element* suivant;Element* suivant;
};

Element* liste = NULL;

void Ajouter(int valeur){

	Element* element = new Element;

	// On fixe la valeur de l'élement
	element->valeur = valeur;

	// Comme on place le nouvel éléement en début
	// de liste, on dit que son suivant est le
	// premier élément de la liste.
	element->suivant = liste;

	// Puis on remet à jour le pointeur vers le
	// premier élément de la liste, qui est notre
	// nouvel élément.
}

Element* Rechercher(int valeur)
{
    Element* element = liste;
    // La méthode de recherche est simple :
    // On se place en première position, et tant
    // qu'il y a des éléments suivants, on suit
    // les flèches, jusqu'à ce qu'on trouve un
    // élément de liste qui contienne la valeur
    // recherchée.

    while(element != NULL && element->valeur != valeur)

        element = element->suivant;

    // Ici, on renvoie une information pertinente :
    // - ou bien on a trouvé quelque chose, auquel
    // cas on renvoie ce quelque chose,
    // - ou bien on n'a rien trouvé et element vaut
    // NULL, qui est la valeur qui indique qu'un élément
    // n'a pas été trouvé.
    return element;

}

void Supprimer(Element* element)
{
    Element* precedent = liste;
    // Si l'élément à supprimer est le premier de
    // la liste, alors le travail est vite fait.
    if(element == liste)
    {
        liste = NULL;
        delete element;
        return;
    }

    // Sinon, il faut rechercher l'élément précédent,
    // et détourner le pointeur de ce précédent pour
    // pointer vers l'élément suivant celui à supprimer.
    // Ainsi, il ne se trouve plus dans la liste.
    while(precedent != NULL && precedent->suivant != element)

        precedent = precedent->suivant;

    if(precedent == NULL) return;
    precedent->suivant = element->suivant;
    delete element;

}

void Afficher()
{

    Element* element = liste;
    while(element != NULL)
    {

        cout << element->valeur << "\t";
        element = element->suivant;

    }
    cout << endl;
}

int main() {
	cout << "Liste Chainée ***" << endl; // prints Liste Chainée

	 Element* e;

	    Ajouter(10);
	    Ajouter(5);
	    Ajouter(13);
	    Ajouter(7);

	    Afficher();

	    e = Rechercher(5); // Supprimer(e);
	
	    Afficher();

	    return 0;
}

#include<iostream>
#include<string>
#include<vector>
using namespace std;

 /*Failure is not a fault.
  Do not reach the goal in time is not a fault.
  The important thing is to reach the goal. AND why not to be the best */

//***********déclaration fonction qui affiche les elements du tableau***********

   void afficher(vector<int> );

//*****************déclaration fonction qui recupère les elements du tableau et fait l'appel à fct affiche

   void saisir(int );

     // fct principale
int main(int argc, char const *argv[]) {

    int tll;

     cout<<"la taille ? ";
     cin>>tll;

     saisir(tll);

  return 0;
}

//***********définition fonction qui affiche les elements du tableau***********

   void afficher(vector<int> t){
     for (int i=0 ; i< t.size() ; i++)
      cout << t[i] << " " ;
        }

//******définition fonction qui recupère les elements du tableau et fait l'appel à fct affiche******

  void saisir(int taille){
    vector<int> res(taille,0);
     for (int i=0 ; i<taille ; i++) {
      cout << " val = ";
       cin >> res[i];
                     }
          afficher(res);
}

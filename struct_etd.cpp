#include<iostream>

using namespace std ;

  //définition de la structure
struct Etudiant{
  string nom[15];
  string prenom[15];
  double note[15];
};

int main(){

     //déclaration de la structure
  struct Etudiant etd;
  int i,n;
    //Récuperation du nomvbre d'étudiants
  cout<<"Combien d'étudiant ? ";
  cin>>n;

    // La saisie des champs de struct
  cout<<"\nVeuillez saisir le nom, prénom et la note de chaque étudiant : "<<endl;
   for(i=0;i<n;i++){
     cout<<"\nNom etd_"<<i+1<<": "; cin>>etd.nom[i];
     cout<<"Prénom etd_"<<i+1<<": "; cin>>etd.prenom[i];
     cout<<"Note etd_"<<i+1<<": "; cin>>etd.note[i];
               }
    //Affichage des champs
  for(i=0;i<n;i++){
    cout<<"\nL'étudiant_"<<i+1<<": "<<endl;
    cout<<"Nom :"<<etd.nom[i]<<endl;
    cout<<"Prénom :"<<etd.prenom[i]<<endl;
    cout<<"Note etd :"<<etd.note[i]<<endl;
              }

  return 0;
}

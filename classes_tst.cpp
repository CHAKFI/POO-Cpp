#include <iostream>
#include <string.h>
#define MAX 100

  // Déclaration globale d'un entier n qui d�finie le nombre d'�tudiant;
     int n;


  //Utiliser la bilbioth�que STANDARD qui contient les deux fonctions cout() et cin()
    using namespace std;

    class person{
        private:
        string nom[MAX];
        string prenom[MAX];
        int age[MAX];

        public:
        void remplissage(){
       	    for(int j=0;j<n;j++){
       	     cout<<"\nPERSON_"<<j+1<<" : "<<endl;
       	  	 cout<<"Nom : "; cin>>nom[j];
       	  	 cout<<"Prenom : "; cin>>prenom[j];
       	  	 cout<<"Age : ";cin>>age[j];
			    }
	              }
        void affichage(){
       	   for(int j=0;j<n;j++){
       	  	cout<<"\nPERSON_"<<j+1<<" : "<<endl;
       	  	cout<<"Nom : "<<nom[j]<<endl;
       	  	cout<<"Prenom : "<<prenom[j]<<endl;
       	  	cout<<"Age : "<<age[j]<<endl;
			        }
			      }

	};


int main(int argc, char** argv) {

	 class person e;

	 // R�cuperer le nombre d'�tudiants;
	 cout<<"veuillez saisir le nombre d'etudiants : ";
	 cin>>n;

	 // Appeler la m�thode Remplissage de la class l'onjet e
	 e.remplissage();

	 cout<<"\n***************************************"<<endl;
     cout<<"***************************************"<<endl;

	 // Appeler la m�thode Affichage de la class par l'objet e
	 e.affichage();



return  0;
}

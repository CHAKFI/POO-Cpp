#include<iostream>

using namespace std;

//************declaration de la fonction*************
    int somTab(int);

//**********fct principale***********
int main(int argc, char const *argv[]) {

    int res,n;

      cout<<"Veuillez entrer la taille de tableau : "<<endl;
      cin>>n;

      cout<<"Veuillez saisir les elements du tableau : "<<endl;
     res = somTab(n);
      cout<<"La somme des elements : "<<res;

  return 0;
}

   //*******definition de la fonction********
      int somTab(int tll){
           int T[tll],som=0;
           for(int i=0;i<tll;i++){
             cout<<"l'element_"<<i+1<<" : ";
             cin>>T[i];

             som=som+T[i];
           }

           return som;
        }

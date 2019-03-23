#include<iostream>

  using namespace std;

//déclaration de fonction
void ajout(int exp, int &var);

//fonction principale
  int main(int argc, char const *argv[]) {

    int p,n;

   p = 5;
   n = 2;

       cout<<" Avant  n = "<<n<<endl;
       ajout(2*p+1,n);
       cout<<" Apres n = "<<n<<endl;

    return 0;
  }

//définiton de fonction
void ajout(int exp, int &var){

  var += exp;

}

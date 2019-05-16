#include<iostream>

using namespace std;


 class first{

     public:
                   //à Observer

    ~first();
     first();
          };

            first::first(){cout<<"appel de CONSTRUCTOR\n";}
            first::~first(){cout<<"appel de DESTRUCTOR";}



int main(int argc, char** argv) {

      /*Comme vous voyez , on a définit le destructeur avant le constructeur
        dans la classe, mais cela ne pose pas de problème, l'ordre est négligeable
        le compilateur fait la différence entre le constructeur et le destructeur par
        le symbole '~' suivi par le nom de destructeur
        donc le constructeur est appelé au moment de la déclaration de l'objet,
        le destructeur est appelé quand il soit hors la visibilié */

     first obj;

  return 0;
}

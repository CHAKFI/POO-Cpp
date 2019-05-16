#include<iostream>
using namespace std;

    class Person{

          string name;

        public:

          Person();  //constructeur par defaut
          Person(string ); //constructeur d'initialisation
          Person(const Person &); //constructeur de copie
     void coutp();

             };
                       //constructeur par defaut
             Person:: Person(){cout<<"appel de constructeur par defaut\n";}
                       //constructeur d'initialisation
             Person :: Person(string nm){
                         cout<<"Appel de constructeur d'initialisation\n";
                         this->name = nm;
                          }
                       //constructeur de reopie
             Person :: Person(const Person & o){
                          cout<<"Appel de constructeur de copie\n";
                          this->name = o.name;
                          }
                      //l'affichage de nom
        void Person :: coutp(){
                         cout<<"\nLe nom saisi est : "<<this->name;
                          }

  int main(int argc, char** argv){

                        //default constructor
              Person obj,obj1;
                        //initialization constructor
              obj = Person("CHAKFI@Ahmed");
              obj.coutp();
              cout<<"\n\n";

                        //copy constructor
                                /*  obj1 = obj; --->C'est une autre methode où le compilateur
                                fait un appel au constructeur de recopie par defaut
                                (dans le cas où on a pas creer un connstr de copie)*/
              obj1 = Person(obj);
              obj1.coutp();

              cout<<"\n \nOK";
            }

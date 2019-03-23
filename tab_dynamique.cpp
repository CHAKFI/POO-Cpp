#include<iostream>
#include<string>
using namespace std;

int all_Dyn();

int main(int argc, char const *argv[]) {

  int size;

      do{
        cout<<"taille ? ";
        cin>>size;
      }while(size <= 0);
//****************************************
   int t1[size] ,t2[size];

      t1 = new int[size];

          cout<<"Veuillez entrer les elements t1: "<<endl;

        for(i=0;i<10;i++){
          cout<<"element_"<<i+1<<" : "<<endl;
          cin>>t1[i];
              }
//***************************************

      t2 = new int[size];

          cout<<"Veuillez entrer les elements t1: "<<endl;

        for(i=0;i<10;i++){
          t2[i] = t1[i] *t1[i];
          }
//***************************************
      delete t1;
      for(i=0;i<10;i++){
        cou<<t1[i];
        }
//***************************************
      delete t2;

  return 0;
}

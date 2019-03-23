#include<iostream>

using namespace std;


int main(int argc, char const *argv[]) {


    int i,j;
    int t[10],min,max;


  cout<<"Veuillez entrer 10 elements : "<<endl;



    for(i=0;i<10;i++){

      cout<<"element_"<<i+1<<" : "<<endl;
      cin>>*(t+i);
      }

      min = t[0];
      max = t[0];
    for(i=1;i<10;i++){
         if(*(t+i) < min) min = *(t+i);
         if(*(t+i) > max) max = *(t+i);
    }

    cout<<"MIN = "<<min<<endl;
    cout<<"MAX = "<<max<<endl;

  return 0;
}

#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){

  int *p,i,j;
  int t[10],a[10],min,max;


cout<<"Veuillez entrer 10 elements : "<<endl;



  for(i=0;i<10;i++){

    cout<<"element_"<<i+1<<" : "<<endl;
    cin>>t[i];
    }

    min = t[0];
    max = t[0];
  for(i=0;i<10;i++){
       if(t[i] < min) min = t[i];
       if(t[i] > max) max = t[i];
  }

  cout<<"MAX = "<<max<<endl;
  cout<<"MIN = "<<min<<endl;


  return 0;
}

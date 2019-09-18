#include <iostream>
using namespace std;

//Variable para el número de casos
int NCasos = 0;

int main(){
  cout << "Pido el número de casos ";
  cin >> NCasos;

  while(NCasos > 0){
    cout<< "Sucede la vez número: " << NCasos << endl;
    NCasos--;
  }

  cout << "Fin";
  return 0;
}

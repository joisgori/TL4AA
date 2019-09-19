#include <iostream>
using namespace std;

//Variables que ocuparé.
int NCasos = 0, tamArreglo;

//Creo mi función y todo para hacer uso de quicksort y arreglar mi arreglo

int main(){
  cout << "Pido el número de casos ";
  cin >> NCasos;
  //Vector de respuesta tendrá el tamaño de número de casos
  int VRespuesta[NCasos];
  while(NCasos > 0){
    //cout<< "Sucede la vez número: " << NCasos << endl;
    cout << "Ingrese el tamaño del arreglo: "; //vector
    cin >> tamArreglo;
    int vector[tamArreglo];
    //Pido los datos con los que se llenará el arreglo.
    for(int i = 0; i<tamArreglo; i++){
      cin >> vector[i];
    }

    for(int i = 0; i<tamArreglo; i++){
      cout << vector[i] << " ";
    }
    NCasos--;
  }

  cout << "Fin";
  /*
  básicamente acá mi respuesta debería imprimirla como estoy 
  haciendo actualmente la versión del vector de prueba
  pero con "\n" o endl;

  return 0;
  */
}


#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

//Variables que ocuparé.
int NCasos = 0, tamArreglo;

//Creo mi función y todo para hacer uso de quicksort y arreglar mi arreglo
// A utility function to swap two elements  
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}


int main(){
  cout << "Pido el número de casos ";
  cin >> NCasos;
  //Vector de respuesta tendrá el tamaño de número de casos
  int VRespuesta[NCasos];
  //pos vector respuesta
  int s = 0;
  while(NCasos > 0){
    //cout<< "Sucede la vez número: " << NCasos << endl;
    cout << "Ingrese el tamaño del arreglo: "; //vector
    cin >> tamArreglo;
    int vector[tamArreglo];
    //Pido los datos con los que se llenará el arreglo.
    for(int i = 0; i<tamArreglo; i++){
      cin >> vector[i];
    }

    quickSort(vector, 0, tamArreglo - 1);

    //Ahora debo analizar el último número del arreglo:
    int num = vector[tamArreglo - 1];
    
    if(num % 2 == 0){
      VRespuesta[s] = num + 2;
    }else{
      VRespuesta[s] = num + 1;
    }

    s++;
    NCasos--;
  }

  //Ahora sí imprimo mi vector de respuesta:

  for(int i = 0; i<NCasos; i++){
  cout << VRespuesta[i] << "\n";
  }


  cout << "Fin";
}

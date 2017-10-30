//Identificar numeros primos
//Dorantes Garcia Jenifer
//23 de Octubre del 2017
#include <iostream>
#include <vector>
using namespace std;
int main(){
  size_t talla =14; 
  vector<int> edad(talla);
  int suma= 0;
  for(int i =0; i<talla; i++){

    cout<<"Digite la edad a la que termino su carrera: "<<endl;
  cin>>edad[i];
  suma += edad[i];
 
}
  for(int j =0; j<talla; j++)
    cout<<edad [j]<<", ";
  cout<<"la edad promedio de graduacion esperada es: "<<suma<<endl;
  cout<<"El promedio de edad a la que se gradua los estudiantes en fìsica es: " <<suma/14<<endl;
  
  return 0;
}

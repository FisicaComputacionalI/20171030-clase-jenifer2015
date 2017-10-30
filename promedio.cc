//Saber la edad promedio a la que se graduan los estudiantes de la licenciatura en fìsica
// Dorantes Garcia Jenifer
//30 de Octubre


#include <iostream>
using namespace std;
int main(){
  int edad[14 ] ;
  int suma= 0;
  for(int i =0; i<14; i++){

    cout<<"Digite la edad a la que termino su carrera"<<endl;
  cin>>edad[i ];
  suma += edad[i ];
 
}
  for(int j =0; j<14; j++)
    cout<<edad [j]<<", ";
  cout<<"la edad promedio de graduacion esperada es: "<<suma<<endl;
  cout<<"El promedio de edad a la que se gradua los estudiantes en fìsicaes: " <<suma/14<<endl;
  
  return 0;
}

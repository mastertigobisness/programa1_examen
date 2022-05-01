#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv){
char empleado[15];
char genero [2];
char personal[10];
float sueldo;
int edadempleado;
cout<<"escriba  nombre de empleado: "<<endl; 
cin>>empleado;
cout<<"escriba la edad: ";
 cin>>edadempleado;
cout<<"escriba el genero: [m] o [f] "<<endl; 
cin>>genero;
cout<<"ingrese puesto: "<<endl;
cin>>personal;
cout<<"Digite el sueldo diario: "<<endl; 
cin>>sueldo;
float cheque;
cheque = sueldo*7;
if(cheque>500){
cout<<"Su cheque semanal es de Q."<<cheque<<endl<<endl;
}else{
cout<<"Felicidades, usted es acreedor de: "<<endl<<endl;
cout<<"bono de despensa semanal: Q.150.00 libre de su sueldo semanal"<<endl;
float bonifi;
bonifi =cheque+150;
cout<<"Total pagado: (incluye el bono despensa) Q."<<bonifi<<endl;
}
cout<<"Es un gusto: "<<empleado<<endl;
cout<<"con la edad de: "<<edadempleado<<" años"<<endl;
cout<<"genero: "<<genero;
system("pause");
return 0;
}


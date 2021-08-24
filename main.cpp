#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int numero=0;
double numero1=0, numero2=0;

//variable global
void registro(){
    cout<<"Ingrese el numero 1: ";
    cin>>numero1;
    cout<<endl<<"Ingrese el numero 2: ";
    cin>>numero2;
    cout<<endl;
}

double raiz_cuadrada(void){
return sqrt(numero);
}


void factorial(int numero){
int resultado=numero;
for(int x=numero;x>1;x--){
resultado*=(x-1);
// resultado=resultado*(x-1)
}
  cout<<"El factorial es: "<<resultado <<endl;
}

//Funciones
int suma(double numero1,double numero2){
return (numero1+numero2);
}
int resta(double numero1, double numero2){
return (numero1-numero2);
}
int multiplicacion(double numero1,double numero2){
return (numero1*numero2);
}
int division(double numero1,double numero2){
return (numero1/numero2);
}
void menu(){
int opcion=0;
  cout<<"--------------------------------------------------------------------------------"<<endl;
  cout<<"|                                     Menu                                     |"<<endl;
  cout<<"--------------------------------------------------------------------------------"<<endl;
  cout<<"1) suma "<<endl<<endl;
  cout<<"2) resta "<<endl<<endl;
  cout<<"3) multiplicacion "<<endl<<endl;
  cout<<"4) division "<<endl<<endl;
  cout<<"5) factorial "<<endl<<endl;
  cout<<"6) raiz cuadrada "<<endl<<endl;
  cout<<"0) salir "<<endl<<endl;
  cout<<"Opcion: ";
  cin>>opcion;
  switch(opcion){
      //Suma

  case 1: {
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                      Suma                                    |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        registro();
        cout<<"El resultado es: "<<suma(numero1,numero2)<<endl;
  }break;
   //Resta
    case 2: {
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                     Resta                                    |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        registro();
        cout<<"El resultado es: "<<resta(numero1,numero2)<<endl;
   }break;
   //Multiplicacion
     case 3: {
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                Multiplicacion                                |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        registro();
        cout<<"El resultado es: "<<multiplicacion(numero1,numero2)<<endl;
   }break;
   //Division
     case 4: {
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                    Division                                  |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        registro();
        cout<<"El resultado es: "<<division(numero1,numero2)<<endl;
   }break;
   //Factorial
     case 5: {
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                   Factorial                                  |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"Ingrese el numero: ";
        cin>>numero1;
        cout<<endl;
        factorial(numero1);
   }break;
   //Raiz cuadrada
     case 6: {
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                 Raiz cuadrada                                |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"Ingrese el numero: ";
        cin>>numero;
        cout<<endl;
        cout<<raiz_cuadrada()<<endl;
   }break;
  }

}

int opc=0;
int main(int argc, char** argv) {



do{
    system("cls");
    menu();
    cout<<endl<<endl<<endl<<endl<<"Desea continuar ejecutando 1[si] 0 [no]: ";
    cin>>opc;
    cout<<endl<<endl<<endl<<"Presione (Enter) para salir."<<endl;
}while(opc!=0);

system("pause>>cls");
return 0;
}

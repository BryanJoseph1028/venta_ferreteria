#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <windows.h>
#include <math.h>
#include <string.h>
struct cliente
{
char nombre [50];
char direccion [50];
char nit [14];
};
cliente rclientes;
main()
{
int ind;
char ventas, preguntas;
int Opciones, Martillos, Desarmadores, Barrenos, Alicates, Cuchillas, Metros, pinzas, cantidad, total, pago, cambio;
do{
system("color B");
cout<<"ingrese la cantidad de regristos"<<endl;
cin>>ind;
for(int i=0; i<ind; i++)
{
cout<<"Ingrese el nombre"<<endl;
gets(rclientes.nombre);
cout<<"Ingrese Direccion"<<endl;
gets(rclientes.direccion);
cout<<"Ingrese Nit"<<endl;
gets(rclientes.nit);
}
cout<<"Bienvenidos a la ventas de herramientas EL MARTILLO"<<ventas<<endl;
cout<<"Opciones:"<<endl;
cout<<"001.Martillos--------------Q65"<<ventas<<endl;
cout<<"232.Desarmadores-----------Q15"<<ventas<<endl;
cout<<"311.Barrenos---------------Q250"<<ventas<<endl;
cout<<"444.Alicates---------------Q40"<<ventas<<endl;
cout<<"567.Cuchillas--------------Q20"<<ventas<<endl;
cout<<"628.Metros-----------------Q25"<<ventas<<endl;
cout<<"732.Pinzas-----------------Q30"<<ventas<<endl;
cout<<"8.salir"<<ventas<<endl;
cout<<"Elija el codigo"<<Opciones<<endl;
     cin>>Opciones;

 switch(Opciones)
 {
 case 001:
 {
 cout<<"Su compra son Martillos"<<Opciones<<endl;
 cin>>Martillos;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Martillos=65;
 total=cantidad*Martillos;
 cout<<"su total es: "<<total<<endl;
 cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=65)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 }
 else
 if(pago<65)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;

 case 232:
 {
 cout<<"Su compra son Desarmadores"<<endl;
 cin>>Desarmadores;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Desarmadores=15;
 total=cantidad*Desarmadores;
 cout<<"su total es: "<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=15)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 }
 else
 if(pago<15)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;

 case 311:
 {
 cout<<"Su compra son Barrenos"<<endl;
 cin>>Barrenos;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Barrenos=250;
 total=cantidad*Barrenos;
 cout<<"su total es: Q"<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=250)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 }
 else
 if(pago<250)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;
 case 444:
 {
 cout<<"Su compra son Alicates"<<endl;
 cin>>Alicates;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Alicates=40;
 total=cantidad*Alicates;
 cout<<"su total es: "<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=40)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 }
 else
 if(pago<40)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;
 case 567:
 {
 cout<<"Su compra son cuchillas"<<endl;
 cin>>Cuchillas;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Cuchillas=20;
 total=cantidad*Cuchillas;
 cout<<"su total es: "<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=20)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 }
 else
 if(pago<80)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;
 case 628:
 {
 cout<<"Su compra son Metros"<<endl;
 cin>>Metros;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 Metros=25;
 total=cantidad*Metros;
 cout<<"su total es: "<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=25)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 }
 else
 if(pago<25)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;
 case 732:
 {
 cout<<"Su compra son Pinzas"<<endl;
 cin>>pinzas;
 cout<<"¿cuantas necesita?"<<cantidad<<endl;
 cin>>cantidad;
 pinzas=30;
 total=cantidad*pinzas;
 cout<<"su total es: "<<total<<endl;
  cout<<"ingrese su pago:"<<pago<<endl;
 cin>>pago;
 if(pago>=30)
 {
 cout<<"recibe cambio"<<endl;
 cambio=pago-total;
 cout<<"Su cambio es "<<cambio<<endl;
 }
 else
 if(pago<20)
 {
 cout<<"No alcanza su pago"<<endl;
 }
 }
 break;
 case 8:
 {
   system("cls");
   cout<<"GRACIAS POR VISITARNOS :) "<<preguntas<<endl;
   cin>>preguntas;
 }

 default:
 {
 cout<<"Esa opcion no se encuentra disponible"<<endl;
 }
 system("pause");
 break;
 }//fin del switch
 }while(ventas>8);

  FILE * arventas;
arventas=fopen("regristros.txt", "w+");
fwrite(&rclientes, sizeof(rclientes), 1, arventas);
fwrite(&rclientes, sizeof(rclientes), 2, arventas);
fwrite(&rclientes, sizeof(rclientes), 3, arventas);
fclose(arventas);
return 0;
getch();
}


#include <conio.h>
#include <iostream>
#define phi 3.14
#include <cmath>
using namespace std;
main ()
{
   int Luas_permukaan_bola;
   float volume_bola;
   float r;


   cout<<"r semula= ";cin>>r;
   cout<<"r akhir = "<<r <<endl;
   
   Luas_permukaan_bola = 4 * phi * pow(r,2);
   cout<<"Luas Permukaan bola: " << Luas_permukaan_bola <<endl; 

   volume_bola = (4/3) * phi * pow(r, 3);
   cout<<"volume bola: " << volume_bola <<endl; 
}

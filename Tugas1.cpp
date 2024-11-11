#include <conio.h>
#include <iostream>
#define phi 3.14
#include <cmath>
using namespace std;
main ()
{
   float Luas_permukaan_bola;
   float volume_bola;
   float r;
    
   cout<<"masukkan r (dalam cm): ";cin>>r;
   
   Luas_permukaan_bola = 4 * phi * pow(r,2);
   cout<<"Luas Permukaan bola: " << Luas_permukaan_bola << "cm2" <<endl; 

   volume_bola = (4.0/3.0) * phi * pow(r, 3);
   cout<<"volume bola: " << volume_bola << "cm3" <<endl; 
}

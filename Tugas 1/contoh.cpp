#include <iostream>
using namespace std;
int main()
{ 
	int bil,x[3];
	cout<<"masukkan satu digit terakhir NIM Anda = "; cin>>bil; 
	if (bil>4) bil=(bil/3)+(bil%3); else bil=bil%3;
	switch(bil)
	{
	 case 1 : x[0]=++bil; x[1]=bil+x[0]; x[2]=bil; break; 
	 case 2 : x[0]=bil; x[1]=bil+x[0]; x[2]=++bil; break;
	 case 3 : x[0]=bil-1; x[1]=(++bil)+x[0]; x[2]=x[1]+x[0]; break;
	 case 4 : x[0]=bil%2; x[1]=++bil; x[2]=x[0]+x[1]; break;
	 default: x[0]=bil/2; x[1]=(++bil)+x[0]+1; x[2]=x[0]+x[1]+bil;
	}
	cout<<x[0]<<" "<<x[1]<<" "<<x[2];
}

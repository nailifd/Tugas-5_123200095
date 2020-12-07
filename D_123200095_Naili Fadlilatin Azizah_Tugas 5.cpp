#include <iostream>
using namespace std;
int main ()
{
	int pilih, p, l, t, i, j, k;
	
	cout<<"Gambar Bangun Datar ===========\n"; cout<<endl;
	cout<<"1. Kotak Bolong\n2. Segitiga\n"; cout<<endl;
	
	cout<<"Pilih :"; cin>>pilih;
	
	switch(pilih){
		case 1 :
			cout<<"Panjang Kotak :\n"; cin>>p;
			cout<<"Lebar Kotak : \n"; cin>>l;
			cout<<endl;
			
			for(int i=l; i<=p; i++);{
				for(int j=l; j<=1; j++){
					if(i==1 || i==p || j==1 || j==l){
						cout<<"*";
					}else{
						cout<<" ";
					}
				}
				cout<<endl;
		break;	
		
		case 2 :
			cout<<"Tinggi Segitiga :\n"; cin>>t;
			cout<<endl;
			
			for(int i=1; i<=t; i++){
				for(int j=1; j<=i; j++){
					cout<<j<<" ";
				}
			cout<<endl;
			cout<<++k;
			}
		break;
		
		case 3 :
			cout<<"Maaf Anda Salah Input";
			cout<<endl;
	}
	return 0;
}
};


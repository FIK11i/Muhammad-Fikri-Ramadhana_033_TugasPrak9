//membuat algoritma perhitungan angka fibonacci
#include <iostream>
#include <conio.h>
using namespace std;

//variabel array bilangan fibonacci
int fibonacci [13]= {0,0,1,1,2,3,5,8,13,21,34,55,89};

//sebagai parameter untuk mencari angka dalam indeks array
int cari(int x)
{
	//untuk menampilkan hasil angka yang dicari dalam indeks
	for (int i=0;i<=13;i++)
	{
		//pencarian angka dengan memasukkan angka sama dengan isi indeks
		if (fibonacci[x]==i)
		{
			//hasil angka fibonacci yang dicari 
			cout<<"Hasil angka fibonacci yang dicari : "<<i;
			break;
		}
	}
	getch ();
}

//penyelesaian dengan rekursif

int main()
{
	//iniliasisasi variabel yang ingin dicari
	int x;
	cout<<endl;
	cout<<"Masukkan indeks angka Fibonacci yang dicari : "; cin>>x;
	
	//proses pencarian variabel pada parameter
	cari(x);
	
	return 0;
}

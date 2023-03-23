#include <iostream>
using namespace std;

int arr[20];	// Membuat array dengan panjang data 20
int n;			// Membuat variabel inputan n

void input()
{	// Procedur input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";	// Membuat inputan jumlah element array
		cin >> n;	// Memanggil variabel inputan n
	}
}
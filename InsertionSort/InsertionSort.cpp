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

		if (n <= 20)
		{	// Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen, \n";	// Menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;								// Membuat jarak per baris program
	cout << "====================" << endl;		// Membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "====================" << endl;

	// Menggunakan perulangan for untuk menyimpan data pada array
	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << ": ";		// Masukan atau menginputkan nilai data n
		cin >> arr[i];					// Masukan nilai data n kedalam array arr
	}
};

// Procedure Insertionsort
void insertionsort()
{
	int temp;	// Membuat variabel data temporer atau penyimpan sementara
	int j;		// Membuat variabel j sebagai penanda

	for (int i = i; i < n; i++)	// 1. Looping dengan i dimulai dari 1 hingga n-1
	{
		temp = arr[i];	// 2. Simpan nilai arr[i] ke variabel sementara temp

	}
}

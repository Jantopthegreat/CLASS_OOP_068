#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << " Masukan Nama : ";
		cin >> nama;
		cout << "Masukan Nilai : ";
		cin >> nilai;

	}
	void printData();
};


void Mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nNilai : " << nilai;
}

class matakuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void inputMK() {
		cout << "\n\nMasukan Kode Matakuliah : ";
		cin >> kode;
		cout << "Masukan Nama Matakuliah : ";
		cin >> namaMK;
		cout << "Masukan SKS : ";
		cin >> sks;
	}

		void tampil() {
			cout << "\nData MataKuliah : ";
			cout << "\nKode Matakuliah : " << kode;
			cout << "\nNama Matakuliah : " << namaMK;
			cout << "\nSKS : " << sks;


		}
	};

int main()
{
	Mahasiswa mhs;
	matakuliah mk;

	mhs.input();
	mhs.printData();

	mk.inputMK();
	mk.tampil();

}

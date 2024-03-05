#include <iostream>
using namespace std;

int main()
{
	int nilaiMatematika, nilaiFisika;
	float rerata;
	string status;

	cout << "Masukkan nilai Matematika : ";
	cin >> nilaiMatematika;

	cout << "masukkan nilai Fisika : ";
	cin >> nilaiFisika;

	rerata = static_cast<float>(nilaiFisika + nilaiMatematika) / 2;

	if (nilaiMatematika >= 70 || rerata >= 60 )
	{
		status = "Lulus";
	}
	else {
		status = "Tidak Lulus";
	}

	cout << "Nilai Fisika = " << nilaiFisika << endl;
	cout << "Nilai Matematika = " << nilaiMatematika << endl;
	cout << "Rata - Rata Nilai = " << rerata << endl;
	cout << "Status Kelulusan = " << status << endl;
	return 0;
}

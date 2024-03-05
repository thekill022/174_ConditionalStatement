#include <iostream>
using namespace std;

int main()
{
	int nBilA, nBilB;
	string status;
	
	srand(time(0));

	nBilA = rand() % 10;
	nBilB = rand() % 10;

	if (nBilA == nBilB)
	{
	status = "Bilangan A sama dengan bilangan B";
	}
	else if (nBilA < nBilB)
	{
		status = "Bilangan A lebih kecil dari bilangan B";
	}
	else
	{
		status = "Bilangan A lebih besar dari bilangan B";
	}

	cout << "Bilangan A : " << nBilA << endl;
	cout << "Bilangan B : " << nBilB << endl;
	cout << "Status : " << status << endl;
	return 0;
}

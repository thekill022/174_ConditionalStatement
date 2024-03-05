#include <iostream>
using namespace std;

int main()
{
    int bilangan; 
    string status;

    srand(time(0));

    bilangan = (rand() % 6) + 1;

    cout << "bilangannya adalah " << bilangan << endl;

    if (bilangan % 2 == 0)
    {
        status = "Genap";
    }
    else
    {
        status = "Ganjil";
    }

    cout << "bilangan adalah bilangan " << status << endl;
    return 0;
}

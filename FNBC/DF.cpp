#include "DF.h"

using namespace std;

DF::DF() :Lside(""), Rside("")
{
}

void DF::in()
{
	// get left side
	cout << "Lside : "; cin >> Lside; cout << endl;
	// get right side
	cout << "Rside : "; cin >> Rside; cout << endl;

}

void DF::out()
{
	cout << Lside << "->" <<Rside << endl;
}



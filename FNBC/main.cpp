#include "main.h"


int main(int argc, char* argv[])
{
	cout << "Mini Projet\n";

	RELATION relation;
	cout << "Enter number of elm(Relation)\n";
	int elm;
	cin >> elm;

	relation.get_Relation(elm);
	cout << "Enter number of elm(DF)\n";
	cin >> elm;
	relation.get_df(elm);
	/*lst.get_df(elm);*/
	relation.out();
	relation.df_out();
	return 0;
}
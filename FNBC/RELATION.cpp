#include "RELATION.h"

using namespace std;


RELATION::RELATION()
{
	_celulle_liste.start = NULL;
	_celulle_liste.queue = NULL;
	_key.start = NULL;
	_key.queue = NULL;

	nbElem = 0;
}

void RELATION::get_Relation(int nbOfElm)
{
	Celulle celulle;
	for (int i = 0; i < nbOfElm; i++)
	{
		cout << "chaamp " << i + 1 << ": ";
		cin >> celulle.champ;
		Set_Last(celulle);
		cout << endl;
	}
}

void RELATION::in()
{
	cout << "Enter relation\n";
}


void RELATION::out()
{
	if (!Empty_Liste())
	{
		Celulle* nCour = _celulle_liste.start;
		cout << "Relation : {";

		while (nCour != NULL)
		{
			nCour->out();
			nCour = nCour->next;
		}
		cout << "\n***************\n";
	}
}

bool RELATION::Empty_Liste()
{
	return(_celulle_liste.start == NULL) ? true : false;
}

void RELATION::Set_Last(Celulle data)
{
	Celulle *temp;
	temp = Create_Node(data);
	if (Empty_Liste())
	{
		_celulle_liste.start = temp;
		_celulle_liste.queue = temp;
	}
	else
	{
		_celulle_liste.queue->next = temp;
		_celulle_liste.queue = temp;
	}
	nbElem++;
}

Celulle * RELATION::Create_Node(Celulle data)
{
	Celulle* temp = NULL;
	temp = new Celulle;
	if (temp == NULL)
	{
		cout << "Erreur Memory Allocation";
		EXIT_FAILURE;
	}
	else
	{
		temp->champ = data.champ;
		temp->next = NULL;
	}

	return temp;
}

void RELATION::get_df(int nbOfElm)
{
	liste.get_df(nbOfElm);
}

void RELATION::df_out()
{
	liste.out();
}


void Celulle::out()
{
	if (next==NULL)
	{
		cout << champ << "}"<<endl;

	}else
	cout << champ << ",";
}


RELATION::~RELATION()
{

}

void search(std::string elm, RELATION relation)
{


}

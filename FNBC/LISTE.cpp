#include "LISTE.h"

using namespace std;

df::df()
{
	start = NULL;
	queue = NULL;
	nbElem = 0;
}

void df::out()
{
	if (!Empty_Liste())
	{
		node* nCour = start;
		cout<<"Afficher liste : \n";

		while (nCour!=NULL)
		{
			nCour->data.out();
			nCour = nCour->next;
		}
		cout << "\n***************\n";
	}
}

node * df::Create_Node(node data)
{
	node* temp = NULL;
	temp = new node;
	if (temp==NULL)
	{
		cout << "Erreur Memory Allocation";
			EXIT_FAILURE;
	}
	else
	{
		temp->data = data.data;
		temp->next = NULL;
	}

	return temp;
}

void df::Set_Last(node data)
{
	node *temp;
	temp = Create_Node(data);
	if (Empty_Liste())
	{
		start = temp;
		queue = temp;
	}
	else
	{
		queue->next = temp;
		queue = temp;
	}
	nbElem++;
}
void df::get_df(int nbOfElm)
{
	node df;
	for (int i = 0; i < nbOfElm; i++)
	{
		cout << "DF " << i + 1 << ": "<<endl;
		df.data.in();
		Set_Last(df);
		cout << endl;
	}
}
bool df::Empty_Liste()
{
	return(start==NULL) ? true : false;
}
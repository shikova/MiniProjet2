#ifndef df_HEADER
#define  df_HEADER
#include"DF.h"

//nouede de la dépendance fonctionnelle
struct node
{
	DF data;
	node* next;
};



class df
{

public:

	df();
	void out();
	node* Create_Node(node);
	bool Empty_Liste();
	void Set_Last(node);
	void get_df(int nbOfElm);


private:
	int nbElem;
	node* start;
	node* queue;
};



#endif // !df_HEADER

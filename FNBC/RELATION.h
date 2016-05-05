#pragma once
#include <iostream>
#include <string>
#include "DF.h"
#include"LISTE.h"
struct Celulle
{
	std::string champ;
	Celulle* next;
	void out();
};
struct Celulle_Liste
{
	Celulle* start;
	Celulle* queue;
};

class RELATION
{
private:
	int nbElem;
	Celulle_Liste _celulle_liste;
	df liste;
	Celulle_Liste _key;
public:
	RELATION();
	void get_Relation(int nbOfElm);
	void in();
	void out();
	bool Empty_Liste();
	void Set_Last(Celulle);
	Celulle* Create_Node(Celulle);
	void get_df(int nbOfElm);
	void df_out();
	~RELATION();
private:

};
void search(std::string ,RELATION);

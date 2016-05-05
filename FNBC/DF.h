#ifndef DF_HEADER
#define DF_HEADER


#include <iostream>
#include <string>
//la dépendance fonctionnelle
class DF
{
public:
	DF();
	void in();
	void out();

private:
	std::string Lside;
	std::string Rside;
};

#endif // !DF_HEADER


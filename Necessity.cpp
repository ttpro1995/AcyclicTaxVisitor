//Group 9 - APCS 13ctt - a example of visitor 
#include "Necessity.h"
#include "NecessityVisitor.h"
Necessity::Necessity(int a)
{
	price = a;
}



double::Necessity::accept(Visitor& visitor)
{
	if (NecessityVisitor* v = dynamic_cast<NecessityVisitor*>(&visitor))//is able to cast ? use "=" not "=="
	{
	return	v->visit(*this);
	}
	else
	{
		//error
	}
}

double ::Necessity::getPrice()
{
	return price;
}

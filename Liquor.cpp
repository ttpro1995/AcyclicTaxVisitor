#include "Liquor.h"

#include "LiquorVisitor.h"
//Group 9 - APCS 13ctt - a example of visitor 
Liquor::Liquor(int a)
{
	price = a;
}



double Liquor::getPrice()
{
	return price;
}

double::Liquor::accept(Visitor& visitor)
{
	if (LiquorVisitor* v = dynamic_cast<LiquorVisitor*>(&visitor))//is able to cast ? use "=" not "=="
	{
	return	v->visit(*this);
	}
	else
	{
		//error
	}
}

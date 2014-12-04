#include "Tobacco.h"
#include "TobaccoVisitor.h"
//Group 9 - APCS 13ctt - a example of visitor 
Tobacco::Tobacco(int a)
{
	price = a;
}



double ::Tobacco::getPrice()
{
	return price;
}

double::Tobacco::accept(Visitor& visitor)
{
	
	if (TobaccoVisitor* v = dynamic_cast<TobaccoVisitor*>(&visitor))//is able to cast ? use "=" not "=="
		{
			return	v->visit(*this);
		}
		else
		{
			//error
		}
	
}
#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
#include "Visitor.h"

#include "NecessityVisitor.h"
#include "TobaccoVisitor.h"
#include "LiquorVisitor.h"
class TaxHolidayVisitor :
	public Visitor
{
public:


	double visit(Necessity&); //5 %
	double visit(Tobacco&);//10%
	double visit(Liquor&);//15%
};


#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
#include "Visitor.h"
#include "NecessityVisitor.h"
#include "TobaccoVisitor.h"
#include "LiquorVisitor.h"
class TaxVisitor :public Visitor
{
public:

	double visit(Necessity&); //10 %
	double visit(Tobacco&);//20%
	double visit(Liquor&);//30%


};


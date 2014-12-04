#pragma once
#include "Liquor.h"


class LiquorVisitor
{
public:
	virtual double visit(Liquor&) = 0;
	LiquorVisitor();
	~LiquorVisitor();
};


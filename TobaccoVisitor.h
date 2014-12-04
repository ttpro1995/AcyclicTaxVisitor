#pragma once
#include "Tobacco.h"
class TobaccoVisitor
{
public:
	virtual double visit(Tobacco&) = 0;
	TobaccoVisitor();
	~TobaccoVisitor();
};


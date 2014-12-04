#pragma once
#include "Necessity.h"
class NecessityVisitor
{
public:
	virtual double visit(Necessity&)=0;
	NecessityVisitor();
	~NecessityVisitor();
};


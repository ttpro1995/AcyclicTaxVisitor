#pragma once

class Necessity;
class NecessityVisitor
{
public:
	virtual double visit(Necessity&)=0;
	NecessityVisitor();
	~NecessityVisitor();
};


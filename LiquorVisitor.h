#pragma once


class Liquor;
class LiquorVisitor
{
public:
	virtual double visit(Liquor&) = 0;
	LiquorVisitor();
	~LiquorVisitor();
};


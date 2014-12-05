#pragma once
class Tobacco;
class TobaccoVisitor
{
public:
	virtual double visit(Tobacco&) = 0;
	TobaccoVisitor();
	~TobaccoVisitor();
};


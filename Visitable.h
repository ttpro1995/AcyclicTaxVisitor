#pragma once
//Group 9 - APCS 13ctt - a example of visitor 
//#include "Visitor.h" //not working

#include "Visitor.h"

class Visitable
{
public:

	 virtual double accept(Visitor&)=0;
};



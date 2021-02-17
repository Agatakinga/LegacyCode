// Legacy_Code.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Printer.h"
#include "RustyPrinter.h"

void ClientCode(const Printer *target)
{
	std::cout << target->Print() << std::endl;
}

int main()
{
	Printer* ClassicPrinter = new Printer;
	ClientCode(ClassicPrinter);

	RustyPrinter* OldPrinter = new RustyPrinter;
	//OldPrinter->OldStylePrint();
	//ClientCode(OldPrinter);

	delete ClassicPrinter;
	delete OldPrinter;
}

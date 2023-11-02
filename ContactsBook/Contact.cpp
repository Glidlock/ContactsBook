#include "framework.h"
#include "Contact.h"

Contact::Contact() : name("-"), location("-"), telNumber("-")
{}

Contact::Contact(std::string name, std::string location, std::string telNumber) 
	: name(name), location(location), telNumber(telNumber)
{}

Contact::~Contact()
{}

std::string Contact::getName() const
{
	return name;
}

std::string Contact::getLocation() const
{
	return location;
}

std::string Contact::getTelNumber() const
{
	return telNumber;
}

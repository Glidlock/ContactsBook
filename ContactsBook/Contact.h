#pragma once
class Contact
{
	std::string name;
	std::string location;
	std::string telNumber;
public:
	Contact();
	Contact(std::string name, std::string location, std::string telNumber);
	~Contact();
	std::string getName() const;
	std::string getLocation() const;
	std::string getTelNumber() const;
};


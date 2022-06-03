#include <iostream>

struct Address 
{
	std::string country;
	std::string city;
	std::string street;
	int house_number;
	int flat_number;
	int index;
};

void display_struct(const Address* const str)
{
	std::cout << "Country: " << str->country << std::endl;
	std::cout << "City: " << str->city << std::endl;
	std::cout << "Street: " << str->street << std::endl;
	std::cout << "House number: " << str->house_number << std::endl;
	std::cout << "Flat number: " << str->flat_number << std::endl;
	std::cout << "Index: " << str->index << std::endl;
}

int main()
{
	Address* new_add = new Address;

	new_add->country = "Non-existing country";
	new_add->city = "Non-existing city";
	new_add->street = "Non-existing street";
	new_add->house_number = rand() % 100;
	new_add->flat_number = rand() % 100;
	new_add->index = rand() % 100000 + 900000;

	display_struct(new_add);

	delete new_add;
	return 0;
}
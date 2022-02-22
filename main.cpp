#include <iostream>
#include <math.h>
#include <windows.h>

int main()
{
	constexpr double yen = 0.0087;
	constexpr double kroner = 0.11;
	constexpr double pounds = 1.36;

	char choice;
	double convert;
	std::cout << "Conversion calculator" << std::endl;
	std::cout << "Please enter either Yen (y), Kroner (k) or Pounds (p) into Dollar and the ammount you wish to convert" << std::endl;
	std::cin >> choice >> convert;

	switch (choice)
	{
	case 'y': // Yen | conversion rate = 0.0087 USD
		std::cout << convert << " yen is worth " << yen * convert << " in USD\n";
		break;

	case 'k': // Kroner | conversion rate = 0.11 USD
		std::cout << convert << " kroner is worth " << kroner * convert << " in USD\n";
		break;

	case 'p': // Pounds | conversion rate = 1.36 USD
		std::cout << convert << " pounds is worth " << pounds * convert << " in USD\n";
		break;

	default:
		std::cout << "Invalid selection entered. Please note that it is case sensitive!" << std::endl;
		break;
	}
}

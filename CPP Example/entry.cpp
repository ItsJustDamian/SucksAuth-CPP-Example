#include <Windows.h>
#include <iostream>
#include "auth.h"
#include "xorstr.hpp"

int main()
{
	SucksAuth::Initialize(XorStr("Application_Id"), XorStr("Encryption_Key"));

	std::string license, expires;
	int sub_type;
	std::cout << "Enter license key -> ";
	std::cin >> license;

	if (!SucksAuth::Login(license, &expires, &sub_type))
		return -1;

	std::cout << "Cheat expires in -> " << expires;
	std::cout << "Sub type -> " << sub_type;
	std::cin.get();
	return 0;
}
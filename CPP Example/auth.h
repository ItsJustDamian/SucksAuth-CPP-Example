#pragma once
#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>

namespace SucksAuth
{
	// Needs to be called before any other api calls, this will set the default stuff for the api
	void Initialize(std::string application_id, std::string encryption_key);
	// Call this to login and get the required tokens (Set expire date ptr to get pretty expire date)
	bool Login(std::string license_key, std::string* expire_date = nullptr);
	// Must login first, otherwise it will cause false bans
	std::vector<unsigned char> Download(std::string file_id);
	// This will ban the user by as many as possible identifiers
	void Ban();
	// This will add data to the logs
	void Log(std::string msg);
}

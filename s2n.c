#include"ope.h"
#include<sstream>
#include<iostream>
template<class T>
T __StringToNum__(std::string const& str)
{
	std::istringstream iss(str);
	T num;
	iss >> num;
	return num;
}

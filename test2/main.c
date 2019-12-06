#include<stdio.h>
#include<iostream>
#include"info.h"
#include"ope.h"
#include"s2n.h"
using std::string;
int main(int args, char *argv[])
{
	if(args!=4)
	{
		show::bug();
		return 0;
	}
	string type = argv[1];
	float res;
	float n1 = __StringToNum__<float>(argv[2]);
	float n2 = __StringToNum__<float>(argv[3]);
	if(type == "-add")
		res = __Add__(n1, n2);
	else
		res = __Sub__(n1, n2);
	std::cout<<argv[1]<<"\tresult: \t"<<res<<std::endl;
	return 0;
}

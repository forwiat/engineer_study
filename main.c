#include<iostream>
#include"ope.h"
#include"info.h"
int main(int argc, char *argv[])
{
	if(argc!=4)
	{
		show::bug();
		return 0;
	}
	std::string type = argv[1];
	std::string argu1 = argv[2];
	std::string argu2 = argv[3];
	float a = __StringToNum__<float>(argu1);
	float b = __StringToNum__<float>(argu2);
	float c;
	if(type=="-add")
		c = __ADD__<float>(a, b);
	else if(type=="-sub")
		c = __SUB__<float>(a, b);
	else if(type=="-mul")
		c = __MUL__<float>(a, b);
	else
		c = __DIV__<float>(a, b);
	std::cout<<"result: "<<c<<std::endl;
	return 0;
}


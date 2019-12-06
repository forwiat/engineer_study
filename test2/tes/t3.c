#include<stdio.h>
#include<typeinfo>
#include<cstring>
#include<iostream>
using std::cout;
using std::endl;
int main(int argc, char *argv[])
{
	std::string type = argv[1];
	//cout<<typeid(argv[1][0].name)<<endl;
	cout<<"*"<<argv[1]<<"*"<<endl;
	cout<<"#"<<"-add"<<"#"<<endl;
	//if(strcmp(argv[1], "-add") == 0)
	if(type=="-add")
	{
		cout<<"equal"<<endl;
	}
	else
		cout<<"not equal"<<(argv[1]=="-add")<<endl;
	return 0;
}

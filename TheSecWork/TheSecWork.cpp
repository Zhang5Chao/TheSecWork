// TheSecWork.cpp : 定义控制台应用程序的入口点。
//
#include <iostream>
using namespace std;

double ZhuanH(double f)
{
	double c;
	c=(5.0/9)*(f-32);
	return c;
}
int main()
{
	double f;
	cout<<"input the f";
	cin>>f;
	cout<<ZhuanH( f);
	cin>>f;


}


// TheSecWork.cpp : �������̨Ӧ�ó������ڵ㡣
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


// copy constructor.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CComplex {
public:
	double real;
	double image;
	CComplex()
	{
		real = 100;
		image = 200;
		cout << "默认构造函数    " << real << "+" << image << "i" << endl;
	}
	void setvalue(double r, double i)
	{
		real = r;
		image = i;
	}
	CComplex(const CComplex &c)
	{
		real = c.real;
		image = c.image;
		cout << "复制构造函数    " << real << "+" << image << "i" << endl;
	}
	void display()
	{
		cout << real << "+" << image << "i" << endl;
	}
};




int main()
{
	CComplex oc;
	oc.display();
	oc.setvalue(500, 600);
	CComplex oc2(oc);
	oc.display();
	oc2.display();
	return 0;
}

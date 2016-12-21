#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
using namespace std;
class Human
{
	int x;
public:
	Human();
	~Human();
	void set_val(int);
	int display(){return x;};
};

#endif // HUMAN_H

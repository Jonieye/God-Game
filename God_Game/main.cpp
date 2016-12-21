#include <stdio.h>
#include <string>
using namespace std;
#include <iostream>
using namespace std;
#include "Human.cpp"
using namespace std;

int main(int argc, char **argv)
{
	
	cout<<"hello world\n";
	Human ted;
	ted.set_val(3);
	cout<< to_string(ted.display());
	return 0;
}

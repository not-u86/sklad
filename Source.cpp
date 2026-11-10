#include "autorization.hpp"
#include <iostream>
#include <Windows.h>
#include <string>
#include <io.h>
#include <fcntl.h>
using namespace std;
int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	
	Start();

		return 0;
}
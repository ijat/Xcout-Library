/*
Xcout Library for C++
=====================

Created by: Ijat
Website: Ijat.my
Last modified: Feb 2015
License: This work is licensed under the Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License. To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/3.0/ or send a letter to Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.

*/

#ifndef XCOUT_H
#define XCOUT_H

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void xcout(const char *x, int ms = 30) {
	for (int unsigned i = 0; i <= strlen(x) - 1; i++)
	{
		cout << x[i];
		Sleep(ms);
	}
	x = 0;
	return;
}

#endif // !XCOUT_H

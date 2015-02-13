/*
Xcout Library for C++
=====================

Created by: Ijat
Website: Ijat.my
Last modified: Feb 2015
License:
	(c) 2014-2015 Ijat
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
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

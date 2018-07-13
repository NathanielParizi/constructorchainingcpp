/*
 * ConstructorChaining.cpp
 *
 *  Created on: Jul 10, 2018
 *      Author: Nathaniel Parizi
 */
// Partial constructor chaining in C++ is referred to as "delegating constructors"

#include <iostream>
using namespace std;
#include "Player.h"

int main(){

	string myName;
	cout << "Whats your name?" << endl;
	cin >> myName;
	int myLevel;
	cout << "Set your level " << endl;
	cin >> myLevel;
	Player p1;
	Player p2("Justin");
	Player p3("Jean",21);


	p2.setLevel(15);

	p1.setLevel(myLevel);
	p1.setName(myName);

	cout << p1.toString() << " " <<  endl;
	cout << p2.toString() << " " <<  endl;
	cout << p3.toString() << " " <<  endl;

	return 0;
}


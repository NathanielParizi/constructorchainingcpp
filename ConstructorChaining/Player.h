/*
 * Player.h
 *
 *  Created on: Jul 10, 2018
 *      Author: Nathaniel Parizi
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
using namespace std;
#include <sstream>

class Player {

private:
	string name;
	int level;

	//Constructor chaining example in C++
public:
	Player();

	Player(string newName, int level);

	string toString();
	void setLevel(int level);
	int getLevel();
	void setName(string name);
	string getName();

};

#endif /* PLAYER_H_ */

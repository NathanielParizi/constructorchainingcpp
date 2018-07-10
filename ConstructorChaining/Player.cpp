/*
 * Player.cpp
 *
 *  Created on: Jul 10, 2018
 *      Author: Nathaniel Parizi
 */


#include "Player.h"
#include <sstream>

Player::Player(){

	 name = "";
	 level = 1;

}

Player::Player(string newName, int newLevel){
	name = newName;
	level = newLevel;
}

string Player::toString() {

	stringstream ss;

	ss << "Name: ";
	ss << name + " "  ;
	ss << "Level: ";
	ss << level ;
	ss << "! ";


	return ss.str();
}

void Player::setLevel(int newLevel){
	level = newLevel;
}

int Player::getLevel(){
	return level;
}

void Player::setName(string newName){
	name= newName;

}

string Player::getName(){

	return name;
}

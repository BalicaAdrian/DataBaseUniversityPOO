#pragma once
#include<iostream>
#include <vector>
#include "Room.h"
#include"Person.h"
#include<string>
class Activity {
public:
	Activity();
	Activity(Room*, Person*, std::string);
	void SetRoom(Room*);
	void SetOwner(Person*);
	void SetDescription(std::string);
	std::string GetRoom();
	std::string GetOwner();
	std::string GetDescription();
private:
	Room* m_Room;
	Person* m_Owner;
	std::string m_Description;
};

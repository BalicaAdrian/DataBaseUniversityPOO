#pragma once
#include<iostream>
#include"Room.h"
#include "Repository.h"
class RoomRepository :
	public Repository<Room>
{
public:
	Room* SearchByName(std::string);
	RoomRepository();
	~RoomRepository();
};


#include "pch.h"
#include "RoomRepository.h"


Room * RoomRepository::SearchByName(std::string Room)
{
	for (int i = 0; i < m_Entities.size(); i++)
		if (m_Entities[i]->GetRoomName() == Room)
			return m_Entities[i];
	throw std::runtime_error("Room wasn't found!");
}

RoomRepository::RoomRepository()
{
}


RoomRepository::~RoomRepository()
{
}

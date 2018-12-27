#include "pch.h"
#include "Activity.h"

Activity::Activity(Room * Location , Person * Owner, std::string Description)
{
	m_Room = Location;
	m_Owner = Owner;
	m_Description = Description;
}

void Activity::SetRoom(Room* Room)
{
	m_Room = Room;

}

void Activity::SetOwner(Person * Person)
{
	m_Owner = Person;
}

void Activity::SetDescription(std::string Description)
{
	m_Description = Description;
}

std::string Activity::GetRoom()
{
	return m_Room->GetRoomName();
}

std::string Activity::GetOwner()
{
	return m_Owner->GetLastName();
}

std::string Activity::GetDescription()
{
	return m_Description;
}


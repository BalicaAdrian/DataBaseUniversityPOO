#include "pch.h"
#include "ActivityRepository.h"
#include <vector>


Activity * ActivityRepository::SearchByLocation(std::string NameRoom)
{
	for (int i = 0; i < m_Entities.size(); i++)
		if (m_Entities[i]->GetRoom() == NameRoom)
			return m_Entities[i];
	throw std::runtime_error("Room doesn't exit for this activity!");
}

std::vector<Activity *> ActivityRepository::SearchByOwner(std::string Owner)
{
	std::vector<Activity*> Activities;
	for (int i = 0; i < m_Entities.size(); i++)
		if (m_Entities[i]->GetOwner() == Owner)
			Activities.push_back(m_Entities[i]);
	if (Activities.size() == 0)
		throw std::runtime_error("Doesn't exist owner for this activity!");
		
}

Activity* ActivityRepository::SearchByDescription(std::string Description)
{
	for (int i = 0; i < m_Entities.size(); i++)
		if (m_Entities[i]->GetDescription() == Description)
			return m_Entities[i];
	throw std::runtime_error("Activity with this owner doesn't exist!");
}

ActivityRepository::ActivityRepository()
{
}


ActivityRepository::~ActivityRepository()
{
}

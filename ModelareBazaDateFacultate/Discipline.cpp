#include "pch.h"
#include <iostream>
#include "Discipline.h"

Discipline::Discipline(std::string name, std::vector<Activity*> activities)
{
	m_Name = name;
	m_Activities = activities;
}

void Discipline::SetName(std::string name)
{
	m_Name = name;
}

void Discipline::SetActivities(std::vector<Activity*> acitivities)
{
	m_Activities = acitivities;
}

std::string Discipline::GetName()
{
	return m_Name;
}

std::vector<Activity*> Discipline::GetActivities()
{
	return m_Activities;
}

Activity * Discipline::GetActivity(std::string description)
{
	for (int i = 0; i < m_Activities.size(); i++) {
		if (m_Activities[i]->GetDescription() == description)
			return m_Activities[i];
	
	}
	throw std::runtime_error("This activity doesn't exist ");

}

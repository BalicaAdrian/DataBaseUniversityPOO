#include "pch.h"
#include <iostream>
#include "Discipline.h"
#include "StudentRole.h"

Discipline::Discipline(std::string name , Activity * activity)
{
	m_Name = name;
	m_Activities.push_back(activity);
}

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

void Discipline::AddActivity(Activity * activity)
{
	m_Activities.push_back(activity);
}

void Discipline::AddPersonToCourse(Person * person)
{
	m_PeopleFromCourse.push_back(person);
	StudentRole* student = NULL;
	try {
		student = dynamic_cast<StudentRole*>(person->searchRole(1));
	}
	catch (std::runtime_error const e)
	{}
	if (student != NULL)
		student->addMark(NULL, this);
}

void Discipline::RemovePersonFromCourse(int cnp)
{ 
	std::vector<Person*>::iterator it;
	int ok = 0;
	for (it = m_PeopleFromCourse.begin(); it != m_PeopleFromCourse.end(); it++) {
		if ((*it)->GetCNP() == cnp) {
			m_PeopleFromCourse.erase(it);
			ok = 1; 
			break;

		}

	}
	if (ok == 0)
		throw std::runtime_error("participant wasn't found");
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

int Discipline::GetSizeActivities()
{
	return m_Activities.size();
}

int Discipline::GetnumberofParticipants()
{
	return m_PeopleFromCourse.size();
}

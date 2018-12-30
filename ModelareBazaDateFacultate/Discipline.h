#pragma once
#include<iostream>
#include"Activity.h"
#include<vector>



class Discipline {
public:
	Discipline(std::string, Activity*);
	Discipline(std::string, std::vector<Activity*>);
	void SetName(std::string);
	void SetActivities(std::vector<Activity*>);
	void AddActivity(Activity*);
	void AddPersonToCourse(Person*);
	void RemovePersonFromCourse(int);
	std::string GetName();
	std::vector<Activity*> GetActivities();
	Activity* GetActivity(std::string );


protected:
	std::string m_Name;
	std::vector<Activity*>m_Activities;
	std::vector<Person*> m_PeopleFromCourse;
 };
#pragma once
#include<iostream>
#include "ActivityRepository.h"
#include "DisciplineRepository.h"
#include "PersonRepository.h"
#include "RoomRepository.h"
#include "ClassBookRepository.h"
class Menu {
public:
	enum Type {
		PERSON=1,
		ACTIVItY,
		DISCIPLINE,
		CLASSBOOK,
		//REPOSITORY,
		EXIT
	};
	
	bool Check(std::string);
	void StartMenu();
	void PersonMenu();
	void ActivityMenu();
	void DisciplineMenu();
	void ClassBookMenu();
	//void RepositoryMenu();

protected:
	PersonRepository persons;
	RoomRepository rooms;
	ActivityRepository activities;
	ClassBookRepository classbooks;
	DisciplineRepository disciplines;
};
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
		REPOSITORY,
		EXIT
	};
	
	bool Check(std::string);
	void StartMenu();
	void PersonMenu();
	void ActivityMenu();
	void DisciplineMenu();
	void ClassBookMenu();
	//void RepositoryMenu();
	//FUNCITON FOR MENU Person
	void AddPerson();
	void AddRole(Person*);
	void DeletePerson();
	//functions for menu activity
	void AddActivity();
	void DeleteActivity();
	//functions for Discipline
	void CreateDiscipline();
	void DeleteDiscipline();
	void EnrollStudent();
	void RemoveStudentfromDiscipline();

	// functions for classbook
	void CreateClassBook();
	void DeleteClassBook();
	void AddStudent();
	void RemovestudentFromBook();
	void AddMark();
	void FindStudent();

	
protected:
	PersonRepository persons;
	RoomRepository rooms;
	ActivityRepository activities;
	ClassBookRepository classbooks;
	DisciplineRepository disciplines;
};
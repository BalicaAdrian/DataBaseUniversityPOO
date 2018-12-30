#pragma once
#include<iostream>
#include"Role.h"
#include"Person.h"
#include "Mark.h"
#include <vector>
#include "Discipline.h"

class StudentRole:public Role {
public:
	StudentRole();
	StudentRole(int, int, int);
	int GetGroup();
	void SetGroup(int);
	int GetID();
	void SetID(int);
	int GetYear();
	void SetYear(int);
	void addMark(float,Discipline*);
	void removeMark(std::string);
	void updateMark(std::string, float);
	int GetMarkSize();
	float MarkFromDiscipline(std::string);
    
protected:
	int m_Group;
	int m_ID;
	int m_Year;
	std::vector<Mark*>m_Marks;
};
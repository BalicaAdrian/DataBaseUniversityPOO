#pragma once
#include<iostream>
#include"Role.h"
#include"Person.h"

class StudentRole:public Role {
public:
	StudentRole();
	int GetGroup();
	void SetGroup(int);
	int GetID();
	void SetID(int);
	int GetYear();
	void SetYear(int);
protected:
	int m_Group;
	int m_ID;
	int m_Year;
	
};
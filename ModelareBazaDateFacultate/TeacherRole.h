#pragma once

#include<iostream>
#include"Role.h"
#include"Person.h"

class TeacherRole :public Role {
public:
	TeacherRole();
	TeacherRole(std::string);
	void SetSubject(std::string);
	std::string GetSubject();
	
protected:
	std::string m_Subject;
};
#include "pch.h"
#include<iostream>
#include "Person.h"
#include"TeacherRole.h"
TeacherRole::TeacherRole()
	:Role(Role::TEACHER_ROLE ){


}

TeacherRole::TeacherRole(std::string subject):Role(Role::TEACHER_ROLE)
{ 
	m_Subject = subject;
}

void TeacherRole::SetSubject(std::string subject)
{
	m_Subject = subject;
}

std::string TeacherRole::GetSubject()
{
	return m_Subject;
}

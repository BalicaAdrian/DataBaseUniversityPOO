#pragma once
#include<iostream>
#include "Role.h"

class Role {
public:
	enum TypeRole {
		STUDENT_ROLE=1 ,
		TEACHER_ROLE  
	};
	Role(TypeRole);
	TypeRole GetMyType(){ return m_MyType; }
	virtual ~Role() {};

protected:
	TypeRole m_MyType;
	
};
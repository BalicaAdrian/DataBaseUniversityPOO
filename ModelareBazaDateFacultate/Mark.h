#pragma once
#include <iostream>
#include "Discipline.h"
class Mark{
public:
	Mark(float, Discipline*);
	void SetNote(float);
	float GetNote();
	void SetDiscipline(Discipline*);
     std::string GetDiscipline();
protected:
	float m_Grade;
	Discipline* m_Discipline;
};
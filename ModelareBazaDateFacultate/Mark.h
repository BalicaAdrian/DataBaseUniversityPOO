#pragma once
#include <iostream>
#include "Discipline.h"

class Mark {
public:
	void SetNote(float);
	float GetNote();
	void SetDiscipline(Discipline*);
	Discipline* GetDiscipline();
protected:
	float m_Note;
	Discipline* m_Discipline;
};
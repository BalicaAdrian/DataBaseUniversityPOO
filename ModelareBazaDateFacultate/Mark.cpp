#include "pch.h"
#include <iostream>
#include "Mark.h"

Mark::Mark(float grade, Discipline * discipline)
{
	m_Discipline = discipline;
	m_Grade = grade;
}

void Mark::SetNote(float note)
{
	m_Grade = note;
}

float Mark::GetNote()
{
	return m_Grade;
}

void Mark::SetDiscipline(Discipline * discipline)
{
	m_Discipline = discipline;
}

std::string Mark::GetDiscipline()
{
	return m_Discipline->GetName();
}

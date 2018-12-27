#include "pch.h"
#include <iostream>
#include "Mark.h"

void Mark::SetNote(float note)
{
	m_Note = note;
}

float Mark::GetNote()
{
	return m_Note;
}

void Mark::SetDiscipline(Discipline * discipline)
{
	m_Discipline = discipline;
}

Discipline * Mark::GetDiscipline()
{
	return m_Discipline;
}

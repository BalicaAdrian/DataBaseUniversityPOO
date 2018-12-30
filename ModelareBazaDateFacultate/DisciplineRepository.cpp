#include"pch.h"
#include<iostream>
#include "DisciplineRepository.h"

Discipline * DisciplineRepository::SearchByName(std::string name)
{
	std::vector<Discipline*>::iterator it;
	for (it = m_Entities.begin(); it != m_Entities.end(); it++) {
		if ((*it)->GetName() == name) {
			return *it;
		}
		throw std::runtime_error("This discipline doesn;t exist!");
	}
	
}

#pragma once
#include<iostream>
#include "Discipline.h"
#include"Repository.h"

class DisciplineRepository : public Repository<Discipline> {
public: 
	Discipline* SearchByName(std::string);
protected:

};

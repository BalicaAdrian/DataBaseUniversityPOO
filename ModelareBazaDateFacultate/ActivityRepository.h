#pragma once
#include <iostream>
#include "Repository.h"
#include "Activity.h"
#include <vector>
class ActivityRepository :
	public Repository<Activity>
{
public:
	Activity* SearchByLocation(std::string);
	std::vector<Activity*> SearchByOwner(std::string);
	Activity* SearchByDescription(std::string);

	ActivityRepository();
	~ActivityRepository();
protected:
	

};


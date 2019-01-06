#pragma once
#include <iostream>
#include <vector>
template <class Entity>
class Repository
{
public:
	void add(Entity*);
	void remove(Entity *);
	

	protected:
		std::vector<Entity*>m_Entities;
};

template <class Entity>
inline void Repository<Entity>::add(Entity* entity) {
	m_Entities.push_back(entity);
	
}
template <class Entity>
inline void Repository<Entity>::remove(Entity* entity) {

	for(int i=0;i<m_Entities.size();i++)
		if (m_Entities[i] == entity)
		{
			m_Entities[i] = m_Entities[m_Entities.size() - 1];
			m_Entities.pop_back();
		}

}


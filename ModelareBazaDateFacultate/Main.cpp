
#include "pch.h"
#include <iostream>
#include "Person.h"
#include <vector>
#include"Role.h"
#include "StudentRole.h"
#include"PersonRepository.h"
#include "Repository.h"
#include"TeacherRole.h"
int main()
{
	//int m;
	//std::vector<Person*>Persons;
	//Person t2("Adrian","balica",315215,"readia@yahoo.com"), tt1("Gigi", "dadca", 14325262),t1;
	/*std::cin >> t1;
	std::cout << t1;
	std::cout << "\n";
	std::cout << t2;
	std::cout << "\n";
	std::cout << tt1;
	*/
	
	
	/* Citire n persoane
	std::cout << "Dati numarul de persoane:";
	std::cin >> m;

	for (int i = 0; i < m; i++) {
		Person *t = new Person;
		std::cin >> *t;
		Persons.push_back(t);

	}
	for (int i = 0; i < m; i++) {
		std::cout << *(Persons[i])<<"\n";
	}
	*/

	/*std::vector<Person*>Persons;
	 Person *t=new Person;
	 t->AddRole(new StudentRole);
	std::cin >> *t;
	Persons.push_back(t);
	//Persons[0]->AddRole(new StudentRole());
	//if(Persons[0]->GetRoles()[0]==)
	//std::cout << *(Persons[0]);
	

	//std::cout << Persons[0]->GetRoles()[0];*/
	
	/*PersonRepository PR;
	//PR.add(new Person("Doru", "Alin", 1111, "student", "ada@dada"));

	Person *t = new Person;
	t->AddRole(new StudentRole);
	std::cin >> *t;
	PR.add(t);



	Person *p = NULL;

	try {
		p = PR.SearchByFirstName("Doru");
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
	}
	std::cout << *p;*/
	PersonRepository PR;
	int n; 
	std::cout << "Give number of persons:"; std::cin >> n;
	for (int i = 0; i < n; i++) {
		int c;
		std::cout << "What role you want this person to have(1-student,2-teacher:";
		do{std::cin >> c;
		switch (c) {
			//do {
		case 1: {
			Person *t = new Person;
			t->AddRole(new StudentRole);
			std::cin >> *t;
			PR.add(t); break;
		}
		case 2: {Person *t = new Person;
			t->AddRole(new TeacherRole);
			std::cin >> *t;
			PR.add(t); }
			} 
		} while (c != 0);
	}
}


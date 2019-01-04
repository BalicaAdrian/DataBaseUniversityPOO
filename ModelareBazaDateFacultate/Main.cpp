
#include "pch.h"
#include <iostream>
#include "Person.h"
#include <vector>
#include"Role.h"
#include "StudentRole.h"
#include"PersonRepository.h"
#include "Repository.h"
#include"TeacherRole.h"
#include "ClassBook.h"
#include "RoomRepository.h"
#include "ActivityRepository.h"
#include"Menu.h"
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
	/*PersonRepository PR;
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
	}*/
	/*PersonRepository pr;
	pr.add(new Person("Adrian", "Balica", 123455, "adrian@gmail.com"));
	pr.add(new Person("Gigi", "Becali", 124355, "becali@gmail.com"));
	Person* p = NULL;
	try {
		p = pr.SearchByEmail("adrian@gmail.com");
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
	}
	p->AddRole(new StudentRole(1, 2, 252));
	p->AddRole(new TeacherRole);
	if (p != NULL) {
		std::cout << p->GetEmail() << "\n";
	}
	Person* q;

	q = pr.SearchByEmail("becali@gmail.com");
	q->AddRole(new StudentRole(4, 2, 252));
	q->AddRole(new TeacherRole);

	std::vector<Person*> pers;
	try {
		pers = pr.SearchByRole(2);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
	}
	for (int i = 0; i < pers.size(); i++) {
		std::cout << pers[i]->GetFirstName() << "\n";
	}

	ClassBook cl(252, "2018-2019");
	try {
		cl.addStudent(p);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
	}
	//Person* q;
	/*q = pr.SearchByEmail("balica@gmail.com");
	q->AddRole(new StudentRole(4, 2, 252));
	q->AddRole(new TeacherRole);
	std::cout << cl.GetSizeOfBook() << "\n";
	cl.addStudent(q);
	std::cout << cl.GetSizeOfBook() << "\n";
	cl.RemoveByCNP(124355);
	std::cout << cl.GetSizeOfBook() << "\n";*/

	/*Discipline D("POO", new Activity);
	Person *g = new Person("Gigi", "Becali", 124355, "becali@gmail.com");
	g->AddRole(new StudentRole(2, 2, 252));
	StudentRole* s = dynamic_cast<StudentRole*>(g->searchRole(1));
	std::cout << s->GetMarkSize() << "\n";
	D.AddPersonToCourse(g);
	std::cout << s->GetMarkSize() << "\n";
	s->updateMark("POO", 5.56955);
	std::cout<<"Nota de la materie Poo a studentului Gigi Becali Este:"<<s->MarkFromDiscipline("POO");
	std::cout << "\n";
	//RoomTest

	RoomRepository R;
	Room *r;
	R.add(new Room("Sala 251"));
	r = R.SearchByName("Sala 251");
	std::cout << (*r).GetRoomName();
	// ActivityTest
	ActivityRepository A;
	Activity* a;
	A.add(new Activity(r, g, "Seminar"));
	a = A.SearchByLocation("Sala 251");
	std::cout << "\n" << a->GetDescription() << " " << a->GetOwner() << " " << a->GetRoom();
	}*/

 Menu menu;
 menu.StartMenu();
}




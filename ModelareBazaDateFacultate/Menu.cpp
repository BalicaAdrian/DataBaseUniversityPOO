#include"pch.h"
#include "Menu.h"
#include "StudentRole.h"
#include "TeacherRole.h"
using namespace std;
bool Menu::Check(std::string input)
{
	int nr = 0;
	try {
		nr = std::stoi(input);
	}
	catch (std::invalid_argument) {
		return false;
	}
	return true;
}

void Menu::StartMenu()
{
FirstMenu:
	std::cout << "                    Start Menu\n\n";
	std::cout << "1. Persons\n2. Activities\n3. Disciplines\n4. ClassBook\n5. Repositories \n6. Exit\n";//5. Repositories
	std::string input;
start:
	do {
		cout << ">>";
		cin >> input;
		
	} while (!Check(input));

	int Sinput = std::stoi(input);
	switch (Sinput) {
	case Type::PERSON:
		PersonMenu();
		goto FirstMenu;

	case Type::ACTIVItY:
		ActivityMenu();
		goto FirstMenu;
	
	case Type::DISCIPLINE:
		DisciplineMenu();
		goto FirstMenu;

	case Type::CLASSBOOK:
		ClassBookMenu();
		goto FirstMenu;

	case Type::REPOSITORY:
		RepositoryMenu();
		goto FirstMenu;

	case Type::EXIT:
		break;

	default:
		std::cout << "Wrong input!\n";
		goto start;
		break;

	}
}

void Menu::PersonMenu()
{
	enum Type {
		ADDPERSON = 1,
		DELETEPERSON,
		ADDROLE,
		RETURN
	};
FirstMenu:
	std::cout << "                    Person Menu\n\n";
	std::cout << "1. AddPerson\n2. DeletePerson\n3.AddRoleToPerson\n4. Return\n";
	std::string input;
start:
	do {
		cout << ">>";
		cin >> input;

	} while (!Check(input));

	int Sinput = std::stoi(input);
	switch (Sinput) {
	case Type::ADDPERSON:
		system("cls");
		AddPerson();
		system("cls");
		//cout << (*persons.SearchByFirstName("Balica"));
		goto FirstMenu;

	case Type::DELETEPERSON:
		system("cls");
		DeletePerson();
		system("cls");
		goto FirstMenu;

	case Type::ADDROLE: {
		system("cls");
		std::string firstname, lastname;
		cout << "Enter first name= "; cin >> firstname;
		cout << "Enter last name= "; cin >> lastname;
		Person* Newperson;
		Newperson = persons.SearchByFullName(lastname, firstname);

		AddRole(Newperson);
		system("cls");
		goto FirstMenu; }


	case Type::RETURN:
		break;

	default:
		std::cout << "Wrong input!\n";
		goto start;
		break;

	}

}

void Menu::ActivityMenu()
{
	enum Type {
		ADDACTIVITY = 1,
		DELETEACTIVITY,
		RETURN

	};

FirstMenu:
	std::cout << "                    Activity Menu\n\n";
	std::cout << "1. Add Activity\n2. Delete Activity\n3. Return\n\n";
	std::string input;
	start:
	do {
		std::cout << ">";
		std::cin >> input;
	} while (!Check(input));
	int Sinput = std::stoi(input);
	switch (Sinput) {
	case ADDACTIVITY:
		system("cls");
		AddActivity();
		system("cls");
		goto FirstMenu;

	case DELETEACTIVITY:
		system("cls");
		DeleteActivity();
		system("cls");
		goto FirstMenu;

	case RETURN:
		break;

	default:
		std::cout << "Wrong input!\n";
		goto start;
		break;
	}
}

void Menu::DisciplineMenu()
{
	enum Type {
		CREATEDISCIPLINE = 1,
		DELETEDISCIPLINE,
		ENROLLSTUDENT,
		REMOVESTUDENT,
		RETURN
	};
FirstMenu:
	std::cout << "                    Discipline Menu\n\n";
	std::cout << "1. Create discipline\n2. Delete discipline\n3. Enroll student\n4. Remove student\n5. Return\n\n";
	std::string input;
start:
	do {
		std::cout << ">";
		std::cin >> input;
	} while (!Check(input));
	int Sinput = std::stoi(input);
	switch (Sinput) {
	case CREATEDISCIPLINE:
		system("cls");
		CreateDiscipline();
		system("cls");
		goto FirstMenu;

	case DELETEDISCIPLINE:
		system("cls");
		DeleteDiscipline();
		system("cls");
		goto FirstMenu;
	case ENROLLSTUDENT:
		system("cls");
		EnrollStudent();
		system("cls");
		goto FirstMenu;
	case REMOVESTUDENT:
		system("cls");
		RemoveStudentfromDiscipline();
		system("cls");
		goto FirstMenu;

	case RETURN:
		break;

	default:
		std::cout << "Wrong input!\n";
		goto start;
		break;
	}
}

void Menu::ClassBookMenu()
{
	enum Type {
		CREATECLASSBOOK = 1,
		DELETECLASSBOOK,
		ADDSTUDENT,
		REMOVESTUDENT,
		ADDMARK,
		SEARCHSTUDENT,
		RETURN
	};
FirstMenu:
	std::cout << "                    Classbook Menu\n\n";
	std::cout << "1. Create classbook\n2. Delete classbook\n3. Add student\n4. Remove student\n5. Add mark\n6. Search student\n\n7. Return\n\n";
	std::string input;
start:
	do {
		std::cout << ">";
		std::cin >> input;
	} while (!Check(input));
	int Sinput = std::stoi(input);
	switch (Sinput) {
	case CREATECLASSBOOK:
		system("cls");
		CreateClassBook();
		system("cls");
		goto FirstMenu;

	case DELETECLASSBOOK:
		system("cls");
		DeleteClassBook();
		system("cls");
		goto FirstMenu;
	case ADDSTUDENT:
		system("cls");
		AddStudent();
		system("cls");
		goto FirstMenu;
	case REMOVESTUDENT:
		system("cls");
		RemovestudentFromBook();
		system("cls");
		goto FirstMenu;
	case ADDMARK:
		system("cls");
		AddMark();
		system("cls");
		goto FirstMenu;
	case SEARCHSTUDENT:
		system("cls");
		FindStudent();
		system("cls");
		goto FirstMenu;

	case RETURN:
		break;

	default:
		std::cout << "Wrong input!\n";
		goto start;
		break;
	}
}

void Menu::RepositoryMenu()
{
	enum Type {
		SEARCH = 1,
		RETURN

	};

Menu:
	std::cout << "                    Repository Menu\n\n";
	std::cout << "1. Search through repositories\n2. Return\n\n";
	std::string input;

start:
	do {
		std::cout << ">";
		std::cin >> input;
	} while (!Check(input));
	int Sinput = std::stoi(input);
	switch (Sinput) {
	case SEARCH:
		system("cls");
		SearchThroughRepositories();
		system("cls");
	case RETURN:
		system("cls");
		break;
	default:
		cout << "Wrong input!\n";
		goto start;
	}
}

void Menu::AddPerson()
{
	Person* Newperson = new Person();
	cin >> *Newperson;
	cout << "Do you want to add a role for this person? n 1.Yes\n2.No\n";
	std::string input;
start:
	do {
		std::cout << ">";
		std::cin >> input;
	} while (!Check(input));
	int Sinput = std::stoi(input);
	switch (Sinput) {
	case 1:
		AddRole(Newperson);
		system("cls");
		break;

	case 2:
		system("cls");
		break;

	default:
		cout << "Wrong input! \n";
		goto start;
}
	persons.add(Newperson);
}

void Menu::AddRole(Person * Newperson)
{
	enum Type {
		STUDENTROLE=1,
		TEACEHRROLE,
		RETURN,
	};
	FirstMenu:
	std::cout << "1. Student role\n2. Teacher role\n3.Return\n";
	std::string input;
start:
	do {
		std::cout << ">";
		std::cin >> input;
	} while (!Check(input));
	int Sinput = std::stoi(input);
	switch (Sinput) {
	case STUDENTROLE: {
		int ID, studyYear, studyGroup;
		cout << "ID Number  :";
		cin >> ID;
		cout << "Study Year(1,2,3,4)  :";
		cin >> studyYear;
		cout << "StudyGroup  :";
		cin >> studyGroup;
		Newperson->AddRole(new StudentRole(ID, studyYear, studyGroup));
		system("cls");
		goto FirstMenu;
	}
	case TEACEHRROLE: {
		std::string Subject;
		cout << "Enter SUbject:";
		cin >> Subject;
		Newperson->AddRole(new TeacherRole(Subject));
		system("cls");
		goto FirstMenu;
	}
	case RETURN:
		system("cls");
		break;

	default:
		std::cout << "Wrong input!\n";
		goto start;
	}
	}

void Menu::DeletePerson()
{
	enum TYPE {
		DELETEBYFULLNAME=1,
		DELETEBYCNP,
		RETURN
	};

FirstMenu:
	cout << "1. Delete by full name\n2. Delete by CNP\n\n3. Return\n\n";
	std::string input;
start:
	do {
		std::cout << ">";
		std::cin >> input;
	} while (!Check(input));
	int Sinput = std::stoi(input);
	switch (Sinput) {
	case DELETEBYFULLNAME: {
		std::string firstname, lastname;
		cout << "Enter firstname:";
		cin >> firstname;;
		cout << "Enter LastName:";
		cin >> lastname;
		Person* Newperson;
		Newperson = persons.SearchByFullName(lastname, firstname);
		persons.remove(Newperson);
		system("cls");
		goto FirstMenu;
	}
	case DELETEBYCNP: {
		int cnp;
		cout << "Enter CNP:"; cin >> cnp;
		Person*Newperson;
		Newperson = persons.SearchByCNP(cnp);
		persons.remove(Newperson);
		system("cls");
		goto FirstMenu;
	}
	case RETURN:
		system("cls");
		break;
	default:
		std::cout << "Wrong input!\n";
		goto start;
	}
}

void Menu::AddActivity()
{
	std::string name;
	cout << "Enter activity name:"; cin >> name;
	Person * owner;

start:
	std::string firstname, lastname, roomname;
	cout << "Enter owner first name= ";
	cin >> firstname;
	cout << "Enter owner last name= ";
	cin >> lastname;

	try {
		owner = persons.SearchByFullName(lastname, firstname);

	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto start;
	}
	cout << "Enter room name:"; cin >> roomname;
	Room* room = new Room(roomname);
	rooms.add(room);
	Activity* newActivity = new Activity(room, owner, name);
	activities.add(newActivity);

}

void Menu::DeleteActivity()
{
start:
	std::string activityname;
	Activity *newactivity = NULL;
	cout << "Name of activity :"; cin >> activityname;
	try {
		newactivity = activities.SearchByDescription(activityname);

	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto start;
	}
	activities.remove(newactivity);
}

void Menu::CreateDiscipline()
{
	std::string disciplinename, activityname;
	int nr;
	cout << "Enter discipline name :"; cin >> disciplinename;
	cout << "How manu activities does discipline has?"; cin >> nr;
	std::vector<Activity*> mActivities;
	Activity* newactivity = NULL;
	for (int i = 0; i < nr; i++) {
	start:

		std::cout << "Enter activity name= ";
		std::cin >> activityname;
		try {
			newactivity = activities.SearchByDescription(activityname);
		}
		catch (std::runtime_error const e) {
			std::cout << e.what() << "\n";
			goto start;
		}
		mActivities.push_back(newactivity);
	}
	Discipline* discipline = new Discipline(disciplinename, mActivities);
	disciplines.add(discipline);
	
}

void Menu::DeleteDiscipline()
{
start:
	std::string disciplinename;
	cout << "Enter discipline name:";
	cin >> disciplinename;
	Discipline* newdiscipline;

	try {
		newdiscipline = disciplines.SearchByName(disciplinename);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto start;
	}
	disciplines.remove(newdiscipline);

}

void Menu::EnrollStudent()
{
	std::string firstname, lastname, disciplinename;
	Person* newstudent;
	Discipline* newdiscipline;

FirstStart:
	cout << "Enter student first name: ";
	cin >> firstname;
	cout << "Enter student last name: ";
	cin >> lastname;
	try {
		newstudent = persons.SearchByFullName(lastname, firstname);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto FirstStart;
	}

SecondStart:
	cout << "Enter dsicipline for enroll:";
	cin >> disciplinename;
	try {
		newdiscipline = disciplines.SearchByName(disciplinename);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto SecondStart;
	}
	newdiscipline->AddPersonToCourse(newstudent);

}

void Menu::RemoveStudentfromDiscipline()
{
	std::string  disciplinename;
	int cnp;
	Discipline* newdiscipline;
FirstStart:

	cout << "Enter dsicipline for enroll:";
	cin >> disciplinename;
	try {
		newdiscipline = disciplines.SearchByName(disciplinename);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto FirstStart;
	}
	cout << "Enter student cnp: ";
	cin >> cnp;
	
	try {
		newdiscipline->RemovePersonFromCourse(cnp);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto FirstStart;
	}
}

void Menu::CreateClassBook()
{
	std::string year;
	int studygroup;
	std::cout << "Please enter year: ";
	std::cin >> year;
	std::cout << "{;ease enter study group: ";
	std::cin >> studygroup;
	ClassBook* classBook = new ClassBook(studygroup, year);
	classbooks.add(classBook);

}

void Menu::DeleteClassBook()
{
	std::string year;
	int studygroup;
	ClassBook* newclassBook;

start:
	std::cout << "Please enter year: ";
	std::cin >> year;
	std::cout << "Please enter study group: ";
	std::cin >> studygroup;
	try {
		newclassBook =classbooks.SearchByGroupandYear(studygroup, year);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto start;
	}
	classbooks.remove(newclassBook);
}

void Menu::AddStudent()
{
	std::string firstname, lastname, classbookyear;
	int studygroup;
	Person* newstudent;
	ClassBook* newclassbook;

FirstStart:
	cout << "Enter student first name: ";
	cin >> firstname;
	cout << "Enter student last name: ";
	cin >> lastname;
	try {
		newstudent = persons.SearchByFullName(lastname, firstname);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto FirstStart;
	}

SecondStart:
	std::cout << "Enter classbook year: ";
	std::cin >> classbookyear;
	std::cout << "Enter classbook study group: ";
	std::cin >> studygroup;
	try {
		newclassbook = classbooks.SearchByGroupandYear(studygroup, classbookyear);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto SecondStart;
	}
	try {
		newclassbook->addStudent(newstudent);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto FirstStart;
	}
}

void Menu::RemovestudentFromBook()
{
	std::string  classbookyear;
	int cnp;
	int studygroup;
	ClassBook* newclassbook;
		start:
	std::cout << "Enter classbook year: ";
	std::cin >> classbookyear;
	std::cout << "Enter classbook study group: ";
	std::cin >> studygroup;
	try {
		newclassbook = classbooks.SearchByGroupandYear(studygroup, classbookyear);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto start;
	}
	std::cout << "Enter students cnp: ";
	std::cin >> cnp;
	
	newclassbook->RemoveByCNP(cnp);
	
}

void Menu::AddMark()
{
	Discipline * newdiscipline;
	ClassBook* newclassbook;
	std::string  year, disciplinename;
	int group,cnp;
	float mark;

FirstStart:
	cout << "Enter classbooks year : ";
	cin >> year;
	cout << "Enter classbooks study group: ";
	cin >> group;
	try {
		newclassbook = classbooks.SearchByGroupandYear(group, year);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto FirstStart;
	}

SecondStart:
	cout << "Enter discipline:"; cin >> disciplinename;
	try {
		newdiscipline = disciplines.SearchByName(disciplinename);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto SecondStart;
	}
ThirdMenu:
	std::cout << "Students cnp: ";
	std::cin >> cnp;
	
	try {
		newclassbook->searchByCNP(cnp);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto ThirdMenu;
	}
	std::cout << "Mark: ";
	std::cin >> mark;
	newclassbook->addMark(newdiscipline, mark, cnp);
}

void Menu::FindStudent()
{
	std::string firstname, lastname, year;
	Person* newstudent;

start:
	std::cout << "Enter students first name= ";
	std::cin >> firstname;
	std::cout << "Enter students last name= ";
	std::cin >> lastname;
	std::cout << "Enter year of study(ex:1/2/3/4)= ";
	std::cin >> year;
	try {
		newstudent = classbooks.searchbyFullNameAndYear(lastname, firstname, year);
	}
	catch (std::runtime_error const e) {
		std::cout << e.what() << "\n";
		goto start;
	}
	std::cout << *newstudent;
	system("pause");
}

void Menu::SearchThroughRepositories()
{  Menuzero:
	enum Type {
		Persons=1,
		Rooms,
		Activities,
		Classbooks,
		Disciplines,
		Return
	};
	cout << "What repositories you want to check?\n";
	cout << "1. Persons\n2. Rooms\n3. Activities\n4. Classbooks\n5. Disciplines\n\n6. Return\n\n";
	std::string input;
start:
	do {
		cout << ">>";
		cin >> input;

	} while (!Check(input));

	int Sinput = std::stoi(input);
	switch (Sinput) {
	case Persons: {
		std::string firstname, lastname;
		Person* newperson;

	FirstMenu:
		cout << "Enter students first name= ";
		cin >> firstname;
		cout << "Enter students last name= ";
		cin >> lastname;
		try {
			newperson = persons.SearchByFullName(lastname, firstname);
		}
		catch (std::runtime_error const e) {
			std::cout << e.what() << "\n";
			goto FirstMenu;
		}
		std::cout << *newperson;
		goto Menuzero;
	}

	case Activities: {
		std::string activityname;
		Activity* newactivity;

	SecondMenu:
		cout << "Name of activity:"; cin >> activityname;
		try {
			newactivity = activities.SearchByDescription(activityname);

		}
		catch (std::runtime_error const e) {
			std::cout << e.what() << " \n";
			goto SecondMenu;
		}
		cout << "Owner:" << newactivity->GetOwner() << " ";
		cout << "Lacation :" << newactivity->GetRoom() << "\n";
		goto Menuzero;
	}

	case Rooms: {
		std::string name;
	ThirdMenu:
		cout << "Enter room name:"; cin >> name;
		try {
			rooms.SearchByName(name);
		}
		catch (std::runtime_error const e) {
			std::cout << e.what() << "\n";
			goto ThirdMenu;
		}
		std::cout << "This room exist!";
		goto Menuzero;
	}
	case Classbooks: {
		std::string year;
		int group;
		ClassBook* Classbook;
	ForuthMenu:
		cout << "Enter year:"; cin >> year;
		cout << "Give the group:"; cin >> group;
		try {
			Classbook = classbooks.SearchByGroupandYear(group, year);
		}
		catch (std::runtime_error const e) {
			std::cout << e.what() << "\n";
			goto ForuthMenu;
		}
		cout << "Classbook has a number of" << Classbook->GetSizeOfBook() << "students";
		goto Menuzero;
	}
	case Disciplines: {
		std::string disciplinename;
		Discipline* newdiscipline;
	MenuFive:
		cout << "Disciplines name:"; cin >> disciplinename;
		try {
			newdiscipline = disciplines.SearchByName(disciplinename);
		}
		catch (std::runtime_error const e) {
			goto MenuFive;
		}
		cout << "Discipline has a number of" << newdiscipline->GetSizeActivities() << " activities \n";
		cout << "Discipline has a number of" << newdiscipline->GetnumberofParticipants() << " participants \n";
		system("pause");
	}

	case Return:
		system("cls");
		break;

	default:
		cout << "Wrong input!\n";
		goto start;
	}




	}











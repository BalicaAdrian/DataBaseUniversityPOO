#include"pch.h"
#include "Menu.h"
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
	std::cout << "1. Persons\n2. Activities\n3. Disciplines\n4. ClassBook\n \n5. Exit\n";//5. Repositories
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

	/*case Type::REPOSITORY:
		RepositoryMenu();
		goto FirstMenu;*/

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
		REMOVEROLE,
		RETURN
	};
FirstMenu:
	std::cout << "                    Person Menu\n\n";
	std::cout << "1. AddPerson\n2. DeletePerson\n3.AddRoleToPerson\n4. RemoveRole\n5. Return\n";
	std::string input;
start:
	do {
		cout << ">>";
		cin >> input;

	} while (!Check(input));

	int Sinput = std::stoi(input);
	switch (Sinput) {
	case Type::ADDPERSON:
		//TODO
		goto FirstMenu;

	case Type::DELETEPERSON:
		//TODO
		goto FirstMenu;

	case Type::ADDROLE:
		//todo
		goto FirstMenu;

	case Type::REMOVEROLE:
		//todo
		goto FirstMenu;

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
		//todo
		goto FirstMenu;

	case DELETEACTIVITY:
		//todo
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
		//todo
		goto FirstMenu;

	case DELETEDISCIPLINE:
		//todo
		goto FirstMenu;
	case ENROLLSTUDENT:
		//todo
		goto FirstMenu;
	case REMOVESTUDENT:
		//todo
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
		//todo
		goto FirstMenu;

	case DELETECLASSBOOK:
		//todo
		goto FirstMenu;
	case ADDSTUDENT:
		//todo
		goto FirstMenu;
	case REMOVESTUDENT:
		//todo
		goto FirstMenu;
	case ADDMARK:
		//todo
		goto FirstMenu;
	case SEARCHSTUDENT:
		//todo
		goto FirstMenu;

	case RETURN:
		break;

	default:
		std::cout << "Wrong input!\n";
		goto start;
		break;
	}
}





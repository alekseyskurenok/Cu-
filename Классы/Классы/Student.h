#pragma once
#include <string>
class Student
{
	std::string Family;
	std::string Name;
	std::string Patronymic;
	std::string BirthYear;
	std::string PhoneNumber;
	std::string CityOfResidence;
	std::string Institution;
	std::string GroupNumber;
public:
	Student(){};
	Student(std::string NewFamily, std::string NewName, std::string NewPatronymic, std::string NewBirthYear, std::string NewPhoneNumber,
		std::string NewCityOfResidence, std::string NewInstitution, std::string NEwGroupNumber) :Family(NewFamily), Name(NewName), Patronymic(NewPatronymic), BirthYear(NewBirthYear), PhoneNumber(NewPhoneNumber),
		CityOfResidence(NewCityOfResidence), Institution(NewInstitution), GroupNumber(NEwGroupNumber) {};
	Student(std::string NewFamily, std::string NewName,std::string NewBirthYear, std::string NewPhoneNumber,
		std::string NewCityOfResidence, std::string NewInstitution, std::string NEwGroupNumber) :Family(NewFamily), Name(NewName), BirthYear(NewBirthYear), PhoneNumber(NewPhoneNumber),
		CityOfResidence(NewCityOfResidence), Institution(NewInstitution), GroupNumber(NEwGroupNumber) {};
	std::string getFamily() const;
	std::string getBirthYear() const;
	std::string getName() const;
	std::string getPatronymic() const;
	std::string getPhoneNumber() const;
	std::string getCityOfResidence() const;
	std::string getInstitution() const;
	std::string getGroupNumber() const;
	void setFamily(const std::string);
	void setName(const std::string);
	void setPatronymic(const std::string);
	void setBirthYear(const std::string);
	void setPhoneNumber(const std::string);
	void setCityOfResidence(const std::string);
	void setInstitution(const std::string);
	void setGroupNumber(const std::string);
	~Student();
};


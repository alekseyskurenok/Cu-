#include "Student.h"

 std::string Student::getFamily() const
{
	 return Family;
}

 void Student::setFamily(const std::string NewFamily)
 {
	std::string Family = NewFamily; 
 }

 std::string Student::getBirthYear() const
 {
	 return BirthYear;
 }

 void Student::setBirthYear(const std::string NewBirthYear)
 {
	 std::string BirthYear = NewBirthYear;
 }

 std::string Student::getName() const
 {
	 return Name;
 }

 void Student::setName(const std::string NewName)
 {
	 std::string Name = NewName;
 }

 std::string Student::getPatronymic() const
 {
	 return Patronymic;
 }

 void Student::setPatronymic(const std::string NewPatronymic)
 {
	 std::string Patronymic = NewPatronymic;
 }

 std::string Student::getPhoneNumber() const
 {
	 return PhoneNumber;
 }

 void Student::setPhoneNumber(const std::string NewPhoneNumber)
 {
	 std::string PhoneNumber = NewPhoneNumber;
 }

 std::string Student::getCityOfResidence() const
 {
	 return CityOfResidence;
 }

 void Student::setCityOfResidence(const std::string NewCityOfResidence)
 {
	 std::string CityOfResidence = NewCityOfResidence;
 }

 std::string Student::getInstitution() const
 {
	 return Institution;
 }

 void Student::setInstitution(const std::string NewInstitution)
 {
	 std::string Institution = NewInstitution;
 }

 std::string Student::getGroupNumber() const
 {
	 return GroupNumber;
 }

 void Student::setGroupNumber(const std::string NewGroupNumber)
 {
	 std::string Institution = NewGroupNumber;
 }
 
Student::~Student()
{
}

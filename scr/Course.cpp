#include "Course.h"
#include <list>
Course::Course(const std::string &teacherName, const std::string &roomName)
{
    this->teacherName = teacherName;
    this->roomName = roomName;
}

Course::Course(const std::list<std::string> &teacherNames, const std::string &roomName)
{
    this->teacherNames = teacherNames;
    this->roomName = roomName;
}
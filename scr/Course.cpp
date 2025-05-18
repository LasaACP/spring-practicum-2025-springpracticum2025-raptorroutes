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

// need this for a couple of functions later on (this should not be used when creating real courses but i dont care enough to make it protedted and make graph a friend class)
Course::Course()
{
    this->teacherName = "";
    this->roomName = "";
}

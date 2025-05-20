#include "Course.h"

Course::Course(const string &teacherName, const string &roomName)
{
    this->teacherName = teacherName;
    this->roomName = roomName;
}

Course::Course(const list<string> &teacherNames, const string &roomName)
{
    this->teacherNames = teacherNames;
    this->roomName = roomName;
}

// need this for a couple of functions later on (this should not be used when creating real courses but i dont care enough to make it protedted and make graph a friend class)
Course::Course() {
    this->teacherName = "";
    this->roomName = "";
}

bool Course::equals(const Course& other) const {
    return this->teacherName == other.teacherName && this->roomName == other.roomName;
}

bool Course::notEquals(const Course& other) const {
    return this->teacherName != other.teacherName || this->roomName != other.roomName;
}
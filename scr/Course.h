#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <list>

class Course
{

public:
    std::string teacherName;
    std::list<std::string> teacherNames;
    std::string roomName;

    // Constructor
    Course(const std::string &teacherName, const std::string &roomName);

    Course(const std::list<std::string> &teacherNames, const std::string &roomName);
};

#endif // COURSE_H
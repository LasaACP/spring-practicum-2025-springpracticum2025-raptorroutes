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

    Course();

    bool operator!=(const Course& rhs) const { // it took so long to remember(look up) how to do this and its not even worth it, i should have just made a equals function
        return teacherName != rhs.teacherName || roomName != rhs.roomName || teacherNames != rhs.teacherNames;
    }

    bool operator==(const Course& rhs) const {
        return teacherName == rhs.teacherName && roomName == rhs.roomName && teacherNames == rhs.teacherNames;
    }
};

#endif // COURSE_H
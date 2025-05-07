#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {

public:
    std::string teacherName;
    std::string roomName;

    // Constructor
    Course(const std::string& teacherName, const std::string& roomName);

};

#endif // COURSE_H
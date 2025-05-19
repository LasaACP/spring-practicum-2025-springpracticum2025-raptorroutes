#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <list>
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <map>

using namespace std;

class Course
{

public:
    string teacherName;
    list<string> teacherNames;
    string roomName;

    // idk what this does but it fixed and error
    bool operator<(const Course& other) const {
        if (roomName != other.roomName)
            return roomName < other.roomName;
        return teacherName < other.teacherName;
    }
    
    // Constructor
    Course(const string &teacherName, const string &roomName);

    Course(const list<string> &teacherNames, const string &roomName);

    Course();

    bool equals(const Course& other) const;
    bool notEquals(const Course& other) const;
};

#endif // COURSE_H
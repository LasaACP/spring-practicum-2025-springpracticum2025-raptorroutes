#ifndef GRAPH_H
#define GRAPH_H

#include <map>
#include <string>
#include <list>
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <utility>

#include "Course.h"

using namespace std;

// Weighted undirected graph
class Graph {
    // Each edge is represented as a pair: (neighbor, weight)
    map<Course, list<pair<Course, double>>> adjList;

public:
    Graph();

    // Adds an undirected edge with a weight between u and v
    void addEdge(const Course& u, const Course& v, double weight);
    //  bellman ford algorithm to find the shortest path from a source to a destination
    vector<Course> bellmanFord(const Course& source, const Course& destination, map<Course, Course>& predecessors) const;

    // function to get a node given the a course name
    Course getNode(const string& courseName) const;
};

#endif // GRAPH_H
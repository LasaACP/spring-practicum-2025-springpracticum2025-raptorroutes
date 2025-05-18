#include "Graph.h"
#include "Course.h"

using namespace std;

// just felt like i needed this
Graph::Graph() {
    adjList.clear();
}

// add edge from v to u as an undirected weighted graph
void Graph::addEdge(const Course& u, const Course& v, double weight){
    adjList[u].push_back(make_pair(v, weight));
    adjList[v].push_back(make_pair(u, weight));
}

vector<Course> Graph::bellmanFord(const Course& source, const Course& destination, map<Course, Course>& predecessors) const{
    
    // pretty much a copy of how to do the algorithm... hopefully it works
    map<Course, double> distance;
    for (const auto& pair : adjList) {
        distance[pair.first] = numeric_limits<double>::infinity();
        predecessors[pair.first] = Course();
    }
    distance[source] = 0.0;

    size_t V = adjList.size();
    for (size_t i = 1; i < V; ++i) {
        for (const auto& pair : adjList) {
            const Course& u = pair.first;
            for (const auto& neighbor : pair.second) {
                const Course& v = neighbor.first;
                double weight = neighbor.second;
                if (distance[u] + weight < distance[v]) {
                    distance[v] = distance[u] + weight;
                    predecessors[v] = u;
                }
            }
        }
    }

    // reconstruct the path from source to destination
    vector<Course> path; // path 
    if (distance.find(destination) != distance.end() && distance.at(destination) != numeric_limits<double>::infinity()) { // ensure that a path actually exists
        for (Course at = destination; at != source; at = predecessors[at]) {
            path.push_back(at); // just like a stack
            if (predecessors.find(at) == predecessors.end()) {
                // no path exists
                cout << "No path exists from " << source.roomName << " to " << destination.roomName << "\n"; // i hate endl, \n is just better
            }
        }
        if (!path.empty() || source == destination) {
            path.push_back(source);
            reverse(path.begin(), path.end()); // reverse the path to get the correct order
        }
    }
    return path;
}




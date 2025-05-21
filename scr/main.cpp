#include <iostream>
#include <string>
#include <list>

#include "Course.h"
#include "Graph.h"

using namespace std;
int main(int argc, char *argv[]) {
    if (argc !=3){
        return 1;
    } else {
    string arg1 = argv[1];
    string arg2 = argv[2];


    // 100s hall
    Course c101  = Course("Park",           "101");
    Course c102  = Course("Nurse",          "102");
    Course c103  = Course("Pressler",       "103");
    Course c104  = Course("JasonEscandell", "104");
    Course c105  = Course("Williams",       "105");
    Course c107  = Course("Pinkston",       "107");
    Course c108  = Course("Castro",         "108");
    Course c109A = Course("Snyder",         "109A");
    Course c109B = Course("Sharp",          "109B");
    Course c110A = Course("Lange",          "110A");
    Course c110B = Course("Baley",          "110B");

    // extra 100s hall
    Course c126  = Course("MainOffice",    "126");
    Course c133  = Course("WritingCenter", "133");
    Course c134  = Course("Library",       "134");
    Course c134D = Course("Welin",         "134D");

    // 200s hall
    Course c201  = Course("AcademicCounselors", "201"); 
    Course c202  = Course("HirokoKarch",        "202");
    Course c204  = Course("Zhong",              "204");
    Course c205  = Course("Ramírez",            "205");
    Course c206  = Course("Preston",            "206");
    Course c207A = Course("Contreras",          "207A");
    Course c207B = Course("Walker",             "207B");
    Course c210  = Course("Breland",            "210");

    // 300s hall
    Course c301  = Course("Tabor",         "301");
    Course c302  = Course("AdamEscandell", "302");
    Course c303  = Course("SiFuentes",     "303");
    Course c304  = Course("Goodell",       "304");
    Course c307  = Course("Pettigrew",     "307");
    Course c308  = Course("Flowers",       "308");
    Course c309A = Course("JosueGarcia",   "309A");
    Course c309B = Course("MarcKarch",     "309B");
    Course c310A = Course("Moody",         "310A");
    Course c310B = Course("Martanovic",    "310B");

    // 400s hall
    Course c401  = Course("Kossa",     "401");
    Course c402  = Course("Parra",     "402");
    Course c405  = Course("Brockhoff", "405");
    Course c406  = Course("Ahmed",     "406");
    Course c409  = Course("Harrelson", "409");
    Course c410  = Course("Willie",    "410");

    // 500s hall
    Course c501  = Course("BookRoom",      "501");
    Course c502  = Course("Saldana",       "502");
    Course c503  = Course("CollegeCenter", "503");
    Course c504  = Course("Czaplinski",    "504");
    Course c505  = Course("Shockey",       "505");
    Course c506  = Course("Mueller",       "506");

    // 700s hall
    Course c700  = Course("GranadoOffice", "700");
    Course c701  = Course("KevinGarcia",   "701");
    Course c702  = Course("Granado",       "702");
    Course c703  = Course("DeBerry",       "703");
    Course c704  = Course("Villanueva",    "704");
    Course c705  = Course("Baldwin",       "705");
    Course c706  = Course("Cuttill",       "706");
    Course c707  = Course("Zamora",        "707");
    Course c708A = Course("Hewitt",        "708A");
    Course c708B = Course("Fisher",        "708B");
    Course c709  = Course("Mokry",         "709");
    Course c710  = Course("MetalShop",     "710");
    Course c711A = Course("Gonzalez",      "711A");
    Course c711B = Course("WoodShop",      "711B");

    // fine arts hall
    Course c166 = Course("Band",      "166");  
    Course c155 = Course("Choir",     "155");
    Course c156 = Course("Orchestra", "156"); 

    // gyms
    Course c073  = Course("BigGym",      "073");
    Course c098  = Course("SmallGym",    "098");
    Course c001D = Course("DanceOffice", "001D");
    Course c606A = Course("Dance",       "606A");
    Course c606B = Course("JazzBand",    "606B");
    Course c118  = Course("WeightRoom",  "118");
    Course c117  = Course("SportsMed",   "117");
    Course c001L = Course("LockerRoom1", "001L");
    Course c002L = Course("LockerRoom2", "002L");
    Course c003L = Course("LockerRoom3", "003L");
    Course c004L = Course("LockerRoom4", "004L");
    Course c005L = Course("LockerRoom5", "005L");

    // Cafeteria
    Course c001C = Course("Cafeteria", "001C");

    

    // Edges (all measurements are in meters)
    Graph g = Graph();
    
    // 100s hall
    g.addEdge(c101,  c102,  2.0);
    g.addEdge(c101,  c103,  10.0);
    g.addEdge(c103,  c104,  2.0);
    g.addEdge(c103,  c105,  10.0);
    g.addEdge(c105,  c107,  10.0);
    g.addEdge(c107,  c108,  2.0);
    g.addEdge(c107,  c109B, 10.0);
    g.addEdge(c109B, c110B, 2.0);
    g.addEdge(c109B, c109A, 10.0);
    g.addEdge(c109A, c110A, 2.0);

    g.addEdge(c102,  c104,  10.0);
    g.addEdge(c104,  c108,  20.0);
    g.addEdge(c108,  c110B, 10.0);
    g.addEdge(c110B, c110A, 10.0);

    // 200s hall
    g.addEdge(c201,  c202,  2.0);
    g.addEdge(c201,  c205,  30.0);
    g.addEdge(c202,  c204,  11.25);
    g.addEdge(c204,  c206,  11.25);
    g.addEdge(c205,  c207A, 11.25);
    g.addEdge(c207A, c207B, 11.25);
    g.addEdge(c207B, c210,  2.0);

    g.addEdge(c202,  c204,  11.25);
    g.addEdge(c204,  c206,  11.25);
    g.addEdge(c206,  c210,  23.5);
    
    // 300s hall
    g.addEdge(c301,  c302,  2.0);
    g.addEdge(c301,  c303,  16.66);
    g.addEdge(c303,  c304,  2.0);
    g.addEdge(c303,  c307,  16.66);
    g.addEdge(c307,  c308,  2.0);
    g.addEdge(c307,  c309B, 11.66);
    g.addEdge(c309B, c310B, 2.0);
    g.addEdge(c309B, c309A, 11.66);
    g.addEdge(c309A, c310A, 2.0);

    g.addEdge(c302,  c304,  16.66);
    g.addEdge(c308 , c310B, 11.66);
    g.addEdge(c310B, c310A, 11.66);

    // 400s hall
    g.addEdge(c401,  c402,  2.0);
    g.addEdge(c401,  c405,  22.5);
    g.addEdge(c405,  c406,  2.0);
    g.addEdge(c405,  c409,  22.5);
    g.addEdge(c406,  c410,  24.375);

    g.addEdge(c402,  c406,  22.5);
    g.addEdge(c409,  c410,  11.5);

    // 500s hall
    g.addEdge(c501,  c502,  2.0);
    g.addEdge(c502,  c503,  4.0);
    g.addEdge(c503,  c504,  2.0);
    g.addEdge(c503,  c505,  25.0);
    g.addEdge(c505,  c506,  2.0);
    
    // 700s hall
    // this one is complicated
    g.addEdge(c701,  c703,  14.57);
    g.addEdge(c703,  c700,  16.0);
    g.addEdge(c703,  c705,  18.94);
    g.addEdge(c705,  c707,  14.57);
    g.addEdge(c707,  c709,  10.92);
    g.addEdge(c700,  c702,  9.0);
    g.addEdge(c705,  c711A, 2.0);
    g.addEdge(c707,  c711B, 2.0);
    g.addEdge(c708B, c708A, 25.78);
    g.addEdge(c708A, c710,  12.89);
    g.addEdge(c708B, c706,  20.265);
    g.addEdge(c706,  c704,  20.625);
    g.addEdge(c702,  c708B, 17.0);   

    // extra 100s hall
    g.addEdge(c126,  c134,  2.0);
    g.addEdge(c134,  c133,  27.78);
    g.addEdge(c134,  c134D, 5.0);

    // fine arts hall
    g.addEdge(c155,  c166,  22.5);
    g.addEdge(c155,  c156,  5.0);

    // gym section
    g.addEdge(c073,  c001D, 30.0);
    g.addEdge(c606A, c606B, 13.63);
    g.addEdge(c606A, c001L, 2.0);
    g.addEdge(c606B, c098,  4.0);
    g.addEdge(c606B, c118,  15.68);
    g.addEdge(c118,  c117,  14.5);
    g.addEdge(c117,  c002L, 18.0);
    g.addEdge(c002L, c003L, 10.5);
    g.addEdge(c003L, c004L, 18.0);
    g.addEdge(c004L, c005L, 27.5);

    // now all of the connections between the each of the halls and different sections of the school
    // 100s to 200s
    Course n101_126 = Course("101_126", "101_126");
    g.addEdge(c101, n101_126, 3.33);
    g.addEdge(c126, n101_126, 9.375);
    Course n126_201 = Course("126_201", "126_201");
    g.addEdge(c126, n126_201, 30.5);
    g.addEdge(c201, n126_201, 3.33);
    // 100s to 300s
    Course n104_108 = Course("104_108", "104_108");
    g.addEdge(c104, n104_108, 7.66);
    g.addEdge(c108, n104_108, 10.66);
    g.addEdge(c105, n104_108, 37.5);
    Course n303_307 = Course("303_307", "303_307");
    g.addEdge(c303, n303_307, 6.66);
    g.addEdge(c307, n303_307, 6.66);
    g.addEdge(n104_108, n303_307, 0.0);
    // 300s to 500s
    Course n302_506 = Course("302_506", "302_506");
    g.addEdge(c302, n302_506, 5.0);
    g.addEdge(c301, n302_506, 6.0);
    g.addEdge(c506, n302_506, 12.0);
    g.addEdge(n302_506, c505, 12.0);
    Course n701_outside = Course("701_outside", "701_outside");
    g.addEdge(c701, n701_outside, 7.28);
    g.addEdge(n701_outside, c001C, 10.92);
    g.addEdge(n701_outside, n302_506, 36.5);
    // 500s to 400s
    Course n502_402 = Course("502_402", "502_402");
    g.addEdge(c502, n502_402, 6.0);
    g.addEdge(c402, n502_402, 9.0);
    Course n156_outside = Course("156_outside", "156_outside");
    g.addEdge(c156, n156_outside, 10.92);
    g.addEdge(n156_outside, n502_402, 37.0);
    g.addEdge(n156_outside, c001C, 40.04);
    // 200s to 400s
    Course n206_210 = Course("206_210", "206_210");
    g.addEdge(c206, n206_210, 6.0);
    g.addEdge(c210, n206_210, 8.0);
    Course n405_409 = Course("405_409", "405_409");
    g.addEdge(c405, n405_409, 6.0);
    g.addEdge(c409, n405_409, 8.0);
    g.addEdge(n206_210, n405_409, 37.5);

    // other connections
    g.addEdge(c073, c410, 45.0);
    g.addEdge(c156, c073, 26.38);
    g.addEdge(c001C, c156, 40.63);
    Course n166_155 = Course("166_155", "166_155");
    g.addEdge(c166, n166_155, 15.0);
    g.addEdge(c005L, n166_155, 55.5);
    g.addEdge(n302_506, n101_126, 37.0);
    g.addEdge(n502_402, n126_201, 37.0);
    // end of the creation of the graph


    // TAKE INPUT FROM USER
    // this will give us the Source Room Number or Teacher Name
    string userSource = arg1;
    string userDestination = arg2;

    // find the source node and the destination node
    Course source = g.getNode(userSource);

    Course destination = g.getNode(userDestination);

    // error dectiotion is not used because  

    if (source.equals( Course()) || destination.equals(Course())) {
        cerr << "Invalid source or destination\n";
    }
    

    // use the bellman ford algorithm to find the shortest path
    map<Course, Course> predecessors;
    vector<Course> path = g.bellmanFord(source, destination, predecessors);
    
    // print the path
    if (path.empty()) {
        cerr << "No path exists from " << source.roomName << " (" << source.teacherName << ")" << " to " << destination.roomName << " (" << destination.teacherName << ")"  <<  "\n";
    } else {
        // cout << "Shortest path from " << source.roomName << " (" << source.teacherName << ")"" to " << destination.roomName << " (" << destination.teacherName << ")"  << ":\n";
        for (const auto& course : path) {
            cout << "L" << course.roomName << " ";
        }
        // cout << "\n";
    }

    return 0;
}
}



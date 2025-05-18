#include <iostream>
#include "Course.h"
#include <string>
#include <list>

using namespace std;
int main()
{
    // This is a simple C++ program that prints "Hello, World!" to the console.
    std::cout << "Hello, World!" << std::endl;

    // 100s hall
    Course c101 = Course(std::string("Seung Hyun (Sally) Park"), std::string("101"));
    Course c102 = Course(std::string("Nurse"), std::string("102"));
    Course c103 = Course(std::string("Sophie Pressler"), std::string("103"));

    // creating a list to use for pass through on all rooms with multiple teachers
    std::list<std::string> n;
    n.push_back("Ben Burford");
    n.push_back("Jason Escandell");
    Course c104 = Course(n, std::string("104"));

    Course c105 = Course(std::string("Lauren Williams"), std::string("105"));
    Course c107 = Course(std::string("Caroline (Dr) Pinkston"), std::string("107"));
    Course c108 = Course(std::string("Scotty Castro"), std::string("108"));
    Course c109A = Course(std::string("Corey Snyder"), std::string("109A"));
    Course c109B = Course(std::string("Brad Sharp"), std::string("109B"));
    Course c110A = Course(std::string("Michelle Lange"), std::string("110A"));
    Course c110B = Course(std::string("Shannon Baley"), std::string("110B"));

    // extra 100s hall
    Course c126 = Course(std::string("Main Office"), std::string("126"));
    Course c133 = Course(std::string("Writing Center"), std::string("133"));
    Course c134 = Course(std::string("Library"), std::string("134"));
    Course c134D = Course(std::string("Amy Welin"), std::string("134D"));

    // 200s hall
    Course c201 = Course(std::string("Mr. Smith"), std::string("201"));
    Course c202 = Course(std::string("Hiroko Karch"), std::string("202"));
    Course c204 = Course(std::string("Valerie Zhong"), std::string("204"));
    Course c205 = Course(std::string("Mr. Smith"), std::string("205"));
    Course c206 = Course(std::string("Rachel Preston"), std::string("206"));
    Course c207A = Course(std::string("Nancy Contreras"), std::string("207A"));

    n.clear();
    n.push_back("Sigrid Scherber");
    n.push_back("Margaret Walker");
    Course c207B = Course(n, std::string("207B"));

    Course c210 = Course(std::string("Eric Breland"), std::string("210"));

    // 300s hall
    Course c301 = Course(std::string("Maricruz Aguayo Tabor"), std::string("301"));
    Course c302 = Course(std::string("Adam Escandell"), std::string("302"));
    Course c303 = Course(std::string("Adela SiFuentes"), std::string("303"));
    Course c304 = Course(std::string("John Goodell"), std::string("304"));
    Course c307 = Course(std::string("Kim Pettigrew"), std::string("307"));
    Course c308 = Course(std::string("Jason Flowers"), std::string("308"));
    Course c309A = Course(std::string("Josue Garcia"), std::string("309A"));
    Course c309B = Course(std::string("Marc Karch"), std::string("309B"));
    Course c310A = Course(std::string("Mr. Smith"), std::string("310A"));
    Course c310B = Course(std::string("Eric Martanovic"), std::string("310B"));

    // 400s hall
    Course c401 = Course(std::string("Emily Kossa"), std::string("401"));
    Course c402 = Course(std::string("Victoria Parra"), std::string("402"));
    Course c405 = Course(std::string("David Brockhoff"), std::string("405"));
    Course c406 = Course(std::string("Farhana Ahmed"), std::string("406"));
    Course c409 = Course(std::string("Sarah Harrelson"), std::string("409"));
    Course c410 = Course(std::string("Shontel Willie"), std::string("410"));

    // 500s hall
    Course c501 = Course(std::string("Book Room"), std::string("501"));

    n.clear();
    n.push_back("Joseph Saldana");
    n.push_back("Joseph	Saldana");
    n.push_back("Johnathan Nelson");
    n.push_back("Vincent Cruz");
    n.push_back("Alastair MacPhail");
    Course c502 = Course(n, std::string("502"));
    Course c502 = Course(n, "502");

    Course c503 = Course(std::string("College Center"), std::string("503"));
    Course c504 = Course(std::string("San Czaplinski"), std::string("504"));
    Course c505 = Course(std::string("James Shockey"), std::string("505"));
    Course c506 = Course(std::string("Rainer Mueller"), std::string("506"));
    Course c503 = Course(std::string("College Center"), "503");

    // 700s hall
    Course c700 = Course(std::string("Mr. Smith"), std::string("700"));
    Course c701 = Course(std::string("Kevin Garcia"), std::string("701"));
    Course c702 = Course(std::string("Jodi Granado"), std::string("702"));
    Course c704 = Course(std::string("Tim Villanueva"), std::string("704"));
    Course c705 = Course(std::string("Mr. Smith"), std::string("705"));
    Course c706 = Course(std::string("Shaun Cuttill"), std::string("706"));
    Course c707 = Course(std::string("Nancy Zamora"), std::string("707"));
    Course c708A = Course(std::string("Mr. Smith"), std::string("708A"));
    Course c708B = Course(std::string("Mr. Smith"), std::string("708B"));
    Course c709 = Course(std::string("Vanessa Mokry"), std::string("709"));
    Course c710 = Course(std::string("Mr. Smith"), std::string("710"));

    // Emmanuel Gonzalez is one of these
    Course c711A = Course(std::string("Mr. Smith"), std::string("711A"));
    Course c711B = Course(std::string("Mr. Smith"), std::string("711B"));

    // fine arts hall
    Course c166 = Course(std::string("Band"), std::string("166"));
    Course c155 = Course(std::string("Chior"), std::string("155"));

    std::cout << "Course Name: " << c101.roomName << std::endl;
    return 0;
}

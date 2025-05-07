#include <iostream>
#include "Course.h"

int main(){
    // This is a simple C++ program that prints "Hello, World!" to the console.
    std::cout << "Hello, World!" << std::endl;

    // 100s hall
    Course c101  = Course("Mr. Smith", "101");
    Course c102  = Course("Mr. Smith", "102");
    Course c103  = Course("Mr. Smith", "103");
    Course c104  = Course("Mr. Smith", "104");
    Course c105  = Course("Mr. Smith", "105");
    Course c107  = Course("Mr. Smith", "107");
    Course c108  = Course("Mr. Smith", "108");
    Course c109A = Course("Mr. Smith", "109A");
    Course c109B = Course("Mr. Smith", "109B");
    Course c110A = Course("Mr. Smith", "110A");
    Course c110B = Course("Mr. Smith", "110B");

    // extra 100s hall
    Course c126  = Course("Main Office", "126");
    Course c133  = Course("Writing Center", "133");
    Course c134  = Course("Library", "134");
    Course c134D = Course("Mr. Smith", "134D");

    
    // 200s hall
    Course c201  = Course("Mr. Smith", "201");
    Course c202  = Course("Mr. Smith", "202");
    Course c204  = Course("Mr. Smith", "204");
    Course c205  = Course("Mr. Smith", "205");
    Course c206  = Course("Mr. Smith", "206");
    Course c207A = Course("Mr. Smith", "207A");
    Course c207B = Course("Mr. Smith", "207B");
    Course c210  = Course("Mr. Smith", "210");

    // 300s hall
    Course c301  = Course("Mr. Smith", "301");
    Course c302  = Course("Mr. Smith", "302");
    Course c303  = Course("Mr. Smith", "303");
    Course c304  = Course("Mr. Smith", "304");
    Course c307  = Course("Mr. Smith", "307");
    Course c308  = Course("Mr. Smith", "308");
    Course c309A = Course("Mr. Smith", "309A");
    Course c309B = Course("Mr. Smith", "309B");
    Course c310A = Course("Mr. Smith", "310A");
    Course c310B = Course("Mr. Smith", "310B");

    // 400s hall
    Course c401  = Course("Mr. Smith", "401");
    Course c402  = Course("Mr. Smith", "402");
    Course c405  = Course("Mr. Smith", "405");
    Course c406  = Course("Mr. Smith", "406");
    Course c409  = Course("Mr. Smith", "409");
    Course c410  = Course("Mr. Smith", "410");

    // 500s hall
    Course c501  = Course("Book Room", "501");
    Course c502  = Course("Mr. Smith", "502");
    Course c503  = Course("College Center", "503");
    Course c504  = Course("Mr. Smith", "504");
    Course c505  = Course("Mr. Smith", "505");
    Course c506  = Course("Mr. Smith", "506");


    // 700s hall
    Course c700  = Course("Mr. Smith", "700");
    Course c701  = Course("Mr. Smith", "701");
    Course c702  = Course("Mr. Smith", "702");
    Course c704  = Course("Mr. Smith", "704");
    Course c705  = Course("Mr. Smith", "705");
    Course c706  = Course("Mr. Smith", "706");
    Course c707  = Course("Mr. Smith", "707");
    Course c708A = Course("Mr. Smith", "708A");
    Course c708B = Course("Mr. Smith", "708B");
    Course c709  = Course("Mr. Smith", "709");
    Course c710  = Course("Mr. Smith", "710");
    Course c711A = Course("Mr. Smith", "711A");
    Course c711B = Course("Mr. Smith", "711B");

    // fine arts hall
    Course c166 = Course("Band", "166");
    Course c155 = Course("Chior", "155");



    std::cout << "Course Name: " << c101.roomName << std::endl;
    return 0;
}
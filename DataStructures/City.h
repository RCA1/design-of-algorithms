/***
 *     
 *     PROGRAM #1 BY: RAYVIN CARL AMADOR
 *
 *     FALL 2017 - CSC2400 DESIGN OF ALGORITHMS
 *     PROFESSOR:DR. DAVID BROWN
 *     DUE DATE: FRIDAY OCTOBER 13, 2017
 *
 *     In this assignment, you will be implementing a Graph using both an adjacency matrix 
 *     and an adjacency list. You will use the adjacency matrix to perform a depth first 
 *     search and the adjacency list to perform a breadth first search. Make sure to account 
 *     for all connected components.
 *
 *     The vertices of the Graph will be read in from a text file as in the following file:
 *          -Romanian Cities
 *          -Top Sort Verts
 *     The edges of the Graph will be read in from a text file as in the following file:
 *          -Romanian Mileages
 *          -Top Sort Edges
 *
 *     The program will run by specifying the vertices and edges text files as command line arguments. 
 *     See the sample output below (the order in which the vertices and edges were added determines 
 *     the output order, depending on search method):
 *          c:\Program1\Cities.exe romanian_cities.txt romanian_mileages.txt
 *
 */

/***
 *     
 *     CITY CLASS BY: RAYVIN CARL AMADOR
 *     USED FOR CSC2400 PROGRAM 1 BFS/DFS
 *     FALL 2017
 *
 */

#if !defined CITY_H
#define CITY_H

#include <iostream>
#include <string>
using namespace std;

class City
{
	private:
		string city_name;
		int weight;
		int visited;

	public:
		City();
		~City();
		
		void addCity(string name);
		string getCityName();	
		void changeVisitedStatus(int status);
		int getVisitedStatus();
		
		void addWeight(int item);
		int getWeight();	
};

City::City()
{
	visited = 0;
	weight = 0;
}

void City::changeVisitedStatus(int status)
{
	visited = status;
}

City::~City()
{

}

string City::getCityName()
{
	return city_name;
}

void City::addWeight(int w)
{
	weight = w;
}

int City::getWeight()
{
	return weight;
}

int City::getVisitedStatus()
{
	return visited;
}

void City::addCity(string name)
{
	city_name = name;
}

#endif
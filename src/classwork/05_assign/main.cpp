//write include statemetns
#include"rectangle.h"
#include<iostream>
#include<vector>

using std::cout; using std::vector;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	vector<Rec> rectangles{ Rec(4, 5), Rec(10, 10), Rec(100, 10) };
	int total = 0;
	for (auto act : rectangles)
	{
		cout << act.get_area() << "\n";
		total += act.get_area();
	}
	cout << total << "\n";

	return 0;
}
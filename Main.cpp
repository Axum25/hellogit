#include <iostream>
#include <vector>
#include "Data.h"

using namespace std;
void selectionSort(auto& x);

int main()
{ 
  vector <Data> V;
  V.push_back({7,21.01});
	
	Data d;
	
	V.push_back(d);
	
	
	d.setX(10);
	d.setY(12.10);
	V.push_back(d);
	
  selectionSort(V);

	for (int i = 0; i < V.size(); i++)
	{
		cout << V[i].getX() << ",";
		cout << V[i].getY() << endl;

		/**
		* Alternative for loop method
		* 
		* 	for (auto a: V)
		* 		{
		* 			cout << a.getX() << ",";
		* 			cout << a.getY() << endl;
		* 		}
		* 
		* 'a' is just a variable name
		*/
  }
	return 0;
}

void selectionSort(auto& x)
{
  for (int i = 0; i < x.size(); i++)
  {
    int min_index = i;

    for (int j = i+1; j < x.size(); j++)
    {
	//IMPORTANT - 'x' (the x value is the sort key)-
      if (x[min_index].getX() > x[j].getX())
    //IMPORTANT
      {
        min_index = j;
      }
    }
    swap(x[i], x[min_index]);
  }
}

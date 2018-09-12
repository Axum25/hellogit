#include <iostream>
#include <vector>
#include "Data.h"

using namespace std;

int main()
{
	/**
	vector <int> v1;
	vector <int> v2 = {5,8,22};
	vector <int> v3(1000,0);
	
	v1.push_back(12);
	v2.push_back(17);
	v2.push_back();
	
	cout << "V2 has "<<v2.size()<<"elements";
	*/
	
	vector <Data> V;
	v.push_back({7,21.01});
	
	Data d;
	
	v.push_back(d);
	
	
	d.setX(10);
	d.setY(12.10);
	V.push_back(d);
	
	for (int i = 0; i < v.size(); i++)
	{
		cout << V[i].getX()<<",";
		cout << V[i].getY()<<endl;
	}
		/**
		* Alternative for loop method
		* 
		* 	for (auto a: V)
		* 		{
		* 			cout << a.getX()<<",";
		* 			cout << a.getY()<<endl;
		* 		}
		* 
		* 'a' is just a variable name
		*/
	return 0;
}

#ifndef DATA_H_
#define DATA_H_

Class Data
{
	Public:
		Data();
		Data(int a, float b);
		
		int getX();
		void setX();
		
		float getY();
		void setY(float b);
	
	Private:
		int x;
		float y;
	
}; #endif

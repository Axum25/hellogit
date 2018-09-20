#ifndef DATA_H_
#define DATA_H_

class Data
{
	public:
		Data();
		Data(int a, float b);
		
		int getX();
		void setX(int a);
		
		float getY();
		void setY(float b);
	
	private:
		int x;
		float y;
	
};
#endif

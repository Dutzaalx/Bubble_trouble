#pragma once
#include "Graphics.h"





class Ball
{


public: 
	Ball(int xb, int yb, int rb) : x(xb), y(yb), r(rb)
	{
		ishit = false;
	}
//*************************************************

//*************************************************
	int x;
	int y;
	int r;
	bool ishit;

};

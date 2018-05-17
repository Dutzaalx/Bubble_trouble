/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include <vector>



class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */

	void DrawBox(int x, int y, int r, int g, int b);
	bool OverlapTest(int x_box0, int y_box0, int x_box1, int y_box1);
	void Game::DrawBall(int x, int y, int r);
	void DrawArrow(int x, int y);
	int ClampArrow(int y);
	void DrawFace(int x, int y);
	void ArrowBallCollision(int xa, std::vector<int> vy, int xb, int yb);
	void Game::MoveBall(int& x, int& y, int &dx, int &dy,int r);
	
	int ClampScreenX(int& x);
	int ClampScreenY(int& y);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;


	/********************************/
	/*  User Variables              */

	int x_mobile = 400;
	int y_mobile = gfx.ScreenHeight - 6;
	int radius = 50;
	static  constexpr int maxh = 100;
	int x_fixed = 300;
	int y_fixed = 300;
	int x_arrow;
	int y_arrow = gfx.ScreenHeight - 1;
	int offset = 100;

	bool launchArrow = false;
	bool ballBreak = false;

	std::vector<int> v = { 0,1 };

	int dx = 1;
	int dy = 3;


	int x_fixed_left;
    int y_fixed_left;
	int x_fixed_right;
	int y_fixed_right;

	int dx_left = -1;
	int dy_left = 3;

	int dx_right = 1;
	int dy_right = 3;


	size_t count = 0;
	/********************************/
};
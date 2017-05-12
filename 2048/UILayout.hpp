//
//  UILayout.hpp
//  2048
//
//  Created by haijian on 2017/05/11.
//  Copyright © 2017 haijian. All rights reserved.
//

#ifndef UILayout_hpp
#define UILayout_hpp

#include <stdio.h>
#include <curses.h>

#endif /* UILayout_hpp */

#pragma once
class UILayout
{
public:
	UILayout();
	~UILayout();

	// Get Screen Size
	// void GetScreenSize(){
	// 	CONSOLE_SCREEN_BUFFER_INFO csbi;
	// 	int ret;
	// 	ret = GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	// 	if (ret) {
	// 		screenX = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	// 		screenY = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
	// 	}
	// }
    // void GetScreenSize(){
    //     wresize(getwin(CURSES), 30, 30);
		// wresize(getwin(),30, 30);
		// CONSOLE_SCREEN_BUFFER_INFO csbi;
		// int ret;
		// ret = GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
		// if (ret) {
		// 	screenX = csbi.srWindow.Right - csbi.srWindow.Left + 1;
		// 	screenY = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
		// }


	// Print X of spaces
	void PositionX(int x){
		for (int i = 0; i < x; i++) {
			printw(" ");
		}
	}

	// Print Y of \n
	void PositionY(int y){
		for (int i = 0; i < y; i++) {
			printw("\n");
		}
	}

	// Get screenX to int
	// int GetScreenX(){
	// 	return screenX;
	// }

	void UIGameOver(){
		printw("GAME OVER\n");
	}

	void PrintScore(int x){
		// printw("+---------------------------+\n");
		// printw("|    SCORE          BEST    |\n");
		// printw("|                           |\n");
		// printw("+---------------------------+\n");
		PositionX(x);
		printw("JOIN THE NUMBERS AND GET TO 2048\n");
	}

private:
	// Variables for Screen Size X & Y
	// int screenX;
	// int screenY;
};

#ifndef GAME_H
#define GAME_H

#include<iostream>			
#include <algorithm>			
#include<time.h>			
#include <cctype>
#include<stdlib.h>
#include <fstream>
#include <random>
#include <math.h>
#include <Windows.h>




using namespace std;

class Game 
{
	
protected:

	int x1,x2,y1,y2;
	int m; int n;
	int GME[4][4];
	int AGME[4][4];


public:
	int wynik;
	int Karta1,Karta2; int Click;
	int ID_TAB_0;

	Game();
	~Game();
	
	int get0(int i,int j);
	bool SetChooseX(int i, int j);
	bool SetChooseY(int i, int j);
	void GetChooseX();
	void GetChooseY();
	bool Wygrana();

	bool Sprawdzaj();
	void Back();

};

#endif









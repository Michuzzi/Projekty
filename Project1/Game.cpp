#include "Game.h"
#include "stdafx.h"


Game::~Game()
{
};

Game::Game()
{
int x;
GME[0][0]=0;		AGME[0][0]=8;
GME[0][1]=0;		AGME[0][1]=8;
GME[0][2]=0;		AGME[0][2]=1;
GME[0][3]=0;		AGME[0][3]=1;
GME[1][0]=0;		AGME[1][0]=2;
GME[1][1]=0;		AGME[1][1]=2;
GME[1][2]=0;		AGME[1][2]=3;
GME[1][3]=0;		AGME[1][3]=3;
GME[2][0]=0;		AGME[2][0]=4;
GME[2][1]=0;		AGME[2][1]=4;
GME[2][2]=0;		AGME[2][2]=5;
GME[2][3]=0;		AGME[2][3]=5;
GME[3][0]=0;		AGME[3][0]=6;
GME[3][1]=0;		AGME[3][1]=6;
GME[3][2]=0;		AGME[3][2]=7;
GME[3][3]=0;		AGME[3][3]=7;
			   
srand((unsigned)time(0));
for( m=0 ; m<4 ; m++)
	{		
for ( n=0 ; n<4 ; n++)
{
	do
	{
		random_shuffle(AGME[0],AGME[4]);
			x++;
			break;
		}while(x<16);
	}
}

};

int Game::get0(int i, int j)
{
	return GME[i][j];
}

bool Game::SetChooseX(int a1, int A)
{
	int i = 0;
	int j = 0; 

			if( a1>=1 && a1<=4)
			{
				i=1;
			}			
			if(A>=1 && A<=4) 
			{
				j=1;
			}
			if (i+j == 2)
			{
				x1 = a1;
				x2 = A;										
				return true;
			}
			return false;	
};
void Game::GetChooseX()
{
	for(int i=0;i<4;i++)
		{
			
			for(int j=0;j<4;j++)
			{
				GME[x1-1][x2-1] = AGME[x1-1][x2-1];
			}
		
		}
};
bool Game::SetChooseY(int b1, int B)
{
	int i = 0;
	int j = 0; 

			if( b1>=1 && b1<=4)
			{
				i=1;
			}
			
			if(B>=1 && B<=4) 
			{
				j=1;
			}

			if (i+j == 2)
			{
				y1 = b1;
				y2 = B;								
				return true;
			}
			return false;
};



void Game::GetChooseY()
{
	for(int i=0;i<4;i++)
		{
			
			for(int j=0;j<4;j++)
			{
			GME[y1-1][y2-1] = AGME[y1-1][y2-1];
				
			}
		}
};
void Game::Back()
{
	for(int i=0;i<4;i++)
		{			
			for(int j=0;j<4;j++)
			{
				GME[x1-1][x2-1] = 0;
				GME[y1-1][y2-1] = 0;	
			}		
		}
}
bool Game::Sprawdzaj()
{
	
	bool sprawdzaj;
	
	if ( AGME[x1-1][x2-1] == AGME[y1-1][y2-1])
	{
		sprawdzaj = true;
	}
	else 
	{
		sprawdzaj = false;
		Back();
	}

	return sprawdzaj;
}

bool Game::Wygrana()
{
	bool wygrana;
	int x=0;

	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{		
			if(GME[i][j] == 0)
			{
				wygrana = true;
			}
			else
			{
			x++;
			}		
		}
	if(x == 16)
	{
		wygrana = false;
	}		
	}
return wygrana;
}

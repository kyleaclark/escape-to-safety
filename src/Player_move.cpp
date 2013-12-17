#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>




using namespace std;



int count, level, ticker, bla;

int num_1 = 1, var_1 = 1, var_2 = 1, var_3 = 1, var_4 = 1, var_5 = 1, var_6 = 1, next = 1;
int KAC = 1;

char option, difficulty;

char X = 'X', P = '*';

bool ACTIVE = true; 

char l_maze[12][12] = {
                            {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
                           };

char d_maze[12][12] = {
                            {'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
                           };

char check[12][12] = {
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
                           };



int x, y;


void Gotxy();
void Display();
void Player_move();

//0 line
void show_0_0();
void show_1_0();
void show_2_0();
void show_3_0();
void show_4_0();
void show_5_0();
void show_6_0();
void show_7_0();
void show_8_0();
void show_9_0();
void show_10_0();
void show_11_0();
//1st line
void show_0_1();
void show_2_1();
void show_6_1();
void show_9_1();
void show_11_1();
//2nd line
void show_0_2();
void show_2_2();
void show_5_2();
void show_6_2();
void show_9_2();
void show_11_2();
//3rd line
void show_0_3();
void show_1_3();
void show_2_3();
void show_3_3();
void show_5_3();
void show_9_3();
void show_11_3();
//4th line
void show_0_4();
void show_3_4();
void show_5_4();
void show_6_4();
void show_7_4();
void show_9_4();
void show_11_4();
//5th line
void show_0_5();
void show_1_5();
void show_2_5();
void show_3_5();
void show_4_5();
void show_5_5();
void show_7_5();
void show_8_5();
void show_9_5();
void show_10_5();
void show_11_5();
//6th line
void show_1_6();
void show_3_6();
void show_7_6();
void show_9_6();
void show_9_6();
void show_11_6();
//7th line
void show_1_7();
void show_3_7();
void show_5_7();
void show_6_7();
void show_7_7();
void show_9_7();
void show_11_7();
//8th line
void show_1_8();
void show_2_8();
void show_3_8();
void show_5_8();
void show_9_8();
void show_11_8();
//10th line
void show_0_9();
void show_1_9();
void show_5_9();
void show_7_9();
void show_8_9();
void show_9_9();
void show_11_9();
//11th line
void show_0_10();
void show_5_10();
void show_5_10_S();
//12th line
void show_0_11();
void show_1_11();
void show_2_11();
void show_3_11();
void show_5_11();
void show_6_11();
void show_7_11();
void show_8_11();
void show_9_11();
void show_10_11();
void show_11_11();

void color_change();
void color_y();



void intro();
void help();
void end();
void Game_play();



void Player_move()
{


      
      Player_move();
      
}






char key, key_2;
int move;


intro();
 
if(num_1 != 0 && ticker != -1)
 {

 do
	{
  do
   {
     
//user move

	 
	if(bla == -1)
		  {
		  num_1 = 0;
		  ticker = -1;
		  }
  if(num_1 != 0 && ticker != -1)
 {
 Display();
		do
		 {
		 
		 
		
		if(kbhit())			//if a key is pressed
		{		            
			key = getch();	//get the key
			key_2 = getch();
			move = (char)key_2;//change it to an int
            Sleep(100);	
            count++;
            ticker = level - count;
            bla = ticker;  		
			var_2 = 0;
			break;
		}

	}while(var_2 == 1);
	
//end

		//1st line

      if(d_maze[0][0] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_0_1();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_1_0();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}
          
          }while(var_1 == 1);
        }
       if(d_maze[1][0] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               fill_map();
               l_maze[1][0] = X;
			   var_1 = 0;
               break;
              }
            case DOWN;
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
        if(d_maze[2][0] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_1_0();
               var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_3_0();
               var_1 = 0;
               break;
              }
               if(move == 77)
             {
               show_2_1();
			   var_1 = 0;
               break;
              }
			   else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
        if(d_maze[3][0] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_2_0();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_4_0();
               var_1 = 0;
               break;
          }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
       if(d_maze[4][0] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_3_0();
               var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_5_0();
               var_1 = 0;
               break;
          }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
	   if(d_maze[5][0] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_6_0();
               var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_4_0();
               var_1 = 0;
               break;
          }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
	   if(d_maze[6][0] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_5_0();
               var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_7_0();
               var_1 = 0;
               break;
              }
               if(move == 77)
             {
               show_6_1();
               var_1 = 0;
               break;
              }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
	   if(d_maze[7][0] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_8_0();
               var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_6_0();
               var_1 = 0;
               break;
          }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
	    if(d_maze[8][0] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_9_0();
               var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_7_0();
               var_1 = 0;
               break;
          }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
		if(d_maze[9][0] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_10_0();
               var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_8_0();
               var_1 = 0;
               break;
              }
               if(move == 77)
             {
               show_9_1();
               var_1 = 0;
               break;
              }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
		 if(d_maze[10][0] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_11_0();
               var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_9_0();
               var_1 = 0;
               break;
          }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
        if(d_maze[11][0] == '*' && var_1 == 1)
       {
        do
         {
            if(move == 72)
             {
               show_10_0();
               var_1 = 0;
               break;
              }
               if(move == 77)
             {
               show_11_1();
               var_1 = 0;
               break;
              }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
		
		//2nd line

       if(d_maze[0][1] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_0_2();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_0_0();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[2][1] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_2_2();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_2_0();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[6][1] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_6_2();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_6_0();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[9][1] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_9_2();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_9_0();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[11][1] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_11_2();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_11_0();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }

//2nd line

       if(d_maze[0][2] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_0_3();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_0_1();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[2][2] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_2_3();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_2_1();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[5][2] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_5_3();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_6_2();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[6][2] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_5_2();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_6_1();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[9][2] == '*' && var_1 == 1)
        {
        do
         {
           if(move == 77)
             {
               show_9_3();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_9_1();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[11][2] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_11_3();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_11_1();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }

//3rd line

       if(d_maze[0][3] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_0_4();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_0_2();
			   var_1 = 0;
               break;
			}
			if(move == 80)
             {
               show_1_3();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[1][3] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_2_3();
			   var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_0_3();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[2][3] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_3_3();
			   var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_1_3();
			   var_1 = 0;
               break;
			}
			if(move == 75)
             {
               show_2_2();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[3][3] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_2_3();
			   var_1 = 0;
               break;
              }
            if(move == 77)
             {
               show_3_4();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[5][3] == '*' && var_1 == 1)
        {
        do
         {
           if(move == 77)
             {
               show_5_4();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_5_2();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[9][3] == '*' && var_1 == 1)
         {
         do
          {
           if(move == 77)
             {
               show_9_4();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_9_2();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
         }
	   if(d_maze[11][3] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_11_4();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_11_2();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
//4th line

       if(d_maze[0][4] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_0_5();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_0_3();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[3][4] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_3_5();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_3_3();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[5][4] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_6_4();
			   var_1 = 0;
               break;
              }
            if(move == 77)
             {
               show_5_5();
			   var_1 = 0;
               break;
			}
			if(move == 75)
             {
               show_5_3();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[6][4] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_5_4();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_7_4();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[7][4] == '*' && var_1 == 1)
        {
        do
         {
           if(move == 77)
             {
               show_7_5();
			   var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_6_4();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[9][4] == '*' && var_1 == 1)
         {
         do
          {
           if(move == 77)
             {
               show_9_5();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_9_3();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
         }
	   if(d_maze[11][4] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_11_5();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_11_3();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        
        //6th line

       if(d_maze[0][5] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_1_5();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_0_4();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[1][5] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_1_6();
			   var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_0_5();
			   var_1 = 0;
               break;
			}
			if(move == 80)
             {
               show_2_5();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[2][5] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_3_5();
			   var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_1_5();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[3][5] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_2_5();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_4_5();
			   var_1 = 0;
               break;
			}
			if(move == 75)
             {
               show_3_4();
			   var_1 = 0;
               break;
              }
            if(move == 77)
             {
               show_3_6();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[4][5] == '*' && var_1 == 1)
        {
        do
         {
           if(move == 72)
             {
               show_3_5();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_5_5();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[5][5] == '*' && var_1 == 1)
         {
         do
          {
           if(move == 72)
             {
               show_4_5();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_5_4();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
         }
	   if(d_maze[7][5] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_7_6();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_7_4();
			   var_1 = 0;
               break;
			}
			if(move == 80)
             {
               show_8_5();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[8][5] == '*' && var_1 == 1)
         {
         do
          {
           if(move == 72)
             {
               show_7_5();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_9_5();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
         }
        if(d_maze[9][5] == '*' && var_1 == 1)
         {
         do
          {
           if(move == 77)
             {
               show_9_6();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_9_4();
			   var_1 = 0;
               break;
			}
			if(move == 72)
             {
               show_8_5();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_10_5();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
         }
         if(d_maze[10][5] == '*' && var_1 == 1)
         {
         do
          {
           if(move == 72)
             {
               show_9_5();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_11_5();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
         }
         if(d_maze[11][5] == '*' && var_1 == 1)
         {
         do
          {
           if(move == 72)
             {
               show_10_5();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_11_4();
			   var_1 = 0;
               break;
			}
			if(move == 77)
             {
               show_11_6();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
         }
         //7th line

       if(d_maze[1][6] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_1_7();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_1_5();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[3][6] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_3_7();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_3_5();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[7][6] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 75)
             {
               show_7_5();
			   var_1 = 0;
               break;
              }
            if(move == 77)
             {
               show_7_7();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[9][6] == '*' && var_1 == 1)
       {
        do
         {
			if(move == 75)
             {
               show_9_5();
			   var_1 = 0;
               break;
              }
            if(move == 77)
             {
               show_9_7();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[11][6] == '*' && var_1 == 1)
        {
        do
         {
           if(move == 75)
             {
               show_11_5();
			   var_1 = 0;
               break;
              }
            if(move == 77)
             {
               show_11_7();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        
   //8th line

       if(d_maze[1][7] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_1_8();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_1_6();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[3][7] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_3_8();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_3_6();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[5][7] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_5_8();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_6_7();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[6][7] == '*' && var_1 == 1)
       {
        do
         {
			if(move == 72)
             {
               show_5_7();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_7_7();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[7][7] == '*' && var_1 == 1)
        {
        do
         {
           if(move == 72)
             {
               show_6_7();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_7_6();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[9][7] == '*' && var_1 == 1)
        {
        do
         {
           if(move == 77)
             {
               show_9_8();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_9_6();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[11][7] == '*' && var_1 == 1)
        {
        do
         {
           if(move == 77)
             {
               show_11_8();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_11_6();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }

//9th line

       if(d_maze[1][8] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_1_9();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_1_7();
			   var_1 = 0;
               break;
			}
			if(move == 80)
             {
               show_2_8();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[2][8] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_1_8();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_3_8();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
       if(d_maze[3][8] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_2_8();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_3_7();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[5][8] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_5_9();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_5_7();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[9][8] == '*' && var_1 == 1)
       {
        do
         {
			if(move == 75)
             {
               show_9_7();
			   var_1 = 0;
               break;
              }
            if(move == 77)
             {
               show_9_9();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[11][8] == '*' && var_1 == 1)
        {
        do
         {
           if(move == 77)
             {
               show_11_9();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_11_7();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        
        //9th line

       if(d_maze[0][9] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_0_10();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_1_9();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[1][9] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_0_9();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_1_8();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[5][9] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_5_10();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_5_8();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[7][9] == '*' && var_1 == 1)
       {
        do
         {
            if(move == 80)
             {
               show_8_9();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[8][9] == '*' && var_1 == 1)
        {
        do
         {
           if(move == 72)
             {
               show_7_9();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_9_9();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[9][9] == '*' && var_1 == 1)
        {
        do
         {
           if(move == 72)
             {
               show_8_9();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_9_8();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        if(d_maze[11][9] == '*' && var_1 == 1)
        {
        do
         {
            if(move == 75)
             {
               show_11_8();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
        
        //11th line

       if(d_maze[0][10] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_0_11();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_0_9();
			   var_1 = 0;
               break;
			}
			if(move == 80)
             {
               show_5_10_S();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   if(d_maze[5][10] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 77)
             {
               show_5_11();
			   var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_5_9();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}          
          }while(var_1 == 1);
        }
	   
	   //12th line

      if(d_maze[0][11] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 75)
             {
               show_0_10();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_1_11();
			   var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}
          
          }while(var_1 == 1);
        }
       if(d_maze[1][11] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_0_11();
			   var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_2_11();
               var_1 = 0;
               break;
			}
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
        if(d_maze[2][11] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_1_11();
               var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_3_11();
               var_1 = 0;
               break;
              }
			   else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
        if(d_maze[3][11] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_2_11();
			   var_1 = 0;
               break;
              }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
	   if(d_maze[5][11] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_6_11();
               var_1 = 0;
               break;
              }
            if(move == 75)
             {
               show_5_10();
               var_1 = 0;
               break;
          }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
	   if(d_maze[6][11] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 72)
             {
               show_5_11();
               var_1 = 0;
               break;
              }
            if(move == 80)
             {
               show_7_11();
               var_1 = 0;
               break;
              }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
	   if(d_maze[7][11] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_8_11();
               var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_6_11();
               var_1 = 0;
               break;
          }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
	    if(d_maze[8][11] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_9_11();
               var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_7_11();
               var_1 = 0;
               break;
          }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
		if(d_maze[9][11] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_10_11();
               var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_8_11();
               var_1 = 0;
               break;
              }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
		 if(d_maze[10][11] == '*' && var_1 == 1)
       {
        do
         {
           if(move == 80)
             {
               show_11_11();
               var_1 = 0;
               break;
              }
            if(move == 72)
             {
               show_9_11();
               var_1 = 0;
               break;
          }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
        if(d_maze[11][11] == '*' && var_1 == 1)
       {
        do
         {
            if(move == 72)
             {
               show_10_11();
               var_1 = 0;
               break;
              }
               if(move == 77)
             {
               
               var_1 = 0;
               num_1 = 0;
               end();
               break;
              }
			else
			{
				var_1 = 0;
				break;
			}
          }while(var_1 == 1);
        }
       

        var_1 = 1;
		var_2 = 1;
		}
      }while(ticker != -1);
      }while(num_1 == 1);
      }
      end();

}



void Gotoxy() //name of the function
{
   COORD coord;  //this is for declaring a coordinate
   coord.X = x;  //this is declaring the x-axis as the the value of x
   coord.Y = y;  //this is declaring the y-axis as the the value of y
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);  //this is positioning the cursor
}





void Display()
{

var_3 = 1;

   if(next == 1 && var_3 == 1)
     {
     SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 4 | FOREGROUND_INTENSITY); 
     cout  << "\t---------------------------\n"
           << "\t| " << l_maze[0][0] << " " << l_maze[0][1] << " " << l_maze[0][2] << " "  << l_maze[0][3] << " " << l_maze[0][4] << " " << l_maze[0][5]
           << " " << l_maze[0][6] << " " << l_maze[0][7] << " " << l_maze[0][8] << " "  << l_maze[0][9] << " " << l_maze[0][10] << " " << l_maze[0][11] << " |\n"
           << "\t| " << l_maze[1][0] << " " << l_maze[1][1] << " " << l_maze[1][2] << " "  << l_maze[1][3] << " " << l_maze[1][4] << " " << l_maze[1][5]
           << " " << l_maze[1][6] << " " << l_maze[1][7] << " " << l_maze[1][8] << " "  << l_maze[1][9] << " " << l_maze[1][10] << " " << l_maze[1][11] << " |\n"
           << "\t| " << l_maze[2][0] << " " << l_maze[2][1] << " " << l_maze[2][2] << " "  << l_maze[2][3] << " " << l_maze[2][4] << " " << l_maze[2][5]
           << " " << l_maze[2][6] << " " << l_maze[2][7] << " " << l_maze[2][8] << " "  << l_maze[2][9] << " " << l_maze[2][10] << " " << l_maze[2][11] << " |\n"
           << "\t| " << l_maze[3][0] << " " << l_maze[3][1] << " " << l_maze[3][2] << " "  << l_maze[3][3] << " " << l_maze[3][4] << " " << l_maze[3][5]
           << " " << l_maze[3][6] << " " << l_maze[3][7] << " " << l_maze[3][8] << " "  << l_maze[3][9] << " " << l_maze[3][10] << " " << l_maze[3][11] << " |\n"
           << "\t| " << l_maze[4][0] << " " << l_maze[4][1] << " " << l_maze[4][2] << " "  << l_maze[4][3] << " " << l_maze[4][4] << " " << l_maze[4][5]
           << " " << l_maze[4][6] << " " << l_maze[4][7] << " " << l_maze[4][8] << " "  << l_maze[4][9] << " " << l_maze[4][10] << " " << l_maze[4][11] << " |\n"
           << "\t| " << l_maze[5][0] << " " << l_maze[5][1] << " " << l_maze[5][2] << " "  << l_maze[5][3] << " " << l_maze[5][4] << " " << l_maze[5][5]
           << " " << l_maze[5][6] << " " << l_maze[5][7] << " " << l_maze[5][8] << " "  << l_maze[5][9] << " " << l_maze[5][10] << " " << l_maze[5][11] << " |\n"
           << "\t| " << l_maze[6][0] << " " << l_maze[6][1] << " " << l_maze[6][2] << " "  << l_maze[6][3] << " " << l_maze[6][4] << " " << l_maze[6][5]
           << " " << l_maze[6][6] << " " << l_maze[6][7] << " " << l_maze[6][8] << " "  << l_maze[6][9] << " " << l_maze[6][10] << " " << l_maze[6][11] << " |\n"
           << "\t| " << l_maze[7][0] << " " << l_maze[7][1] << " " << l_maze[7][2] << " "  << l_maze[7][3] << " " << l_maze[7][4] << " " << l_maze[7][5]
           << " " << l_maze[7][6] << " " << l_maze[7][7] << " " << l_maze[7][8] << " "  << l_maze[7][9] << " " << l_maze[7][10] << " " << l_maze[7][11] << " |\n"
           << "\t| " << l_maze[8][0] << " " << l_maze[8][1] << " " << l_maze[8][2] << " "  << l_maze[8][3] << " " << l_maze[8][4] << " " << l_maze[8][5]
           << " " << l_maze[8][6] << " " << l_maze[8][7] << " " << l_maze[8][8] << " "  << l_maze[8][9] << " " << l_maze[8][10] << " " << l_maze[8][11] << " |\n"
           << "\t| " << l_maze[9][0] << " " << l_maze[9][1] << " " << l_maze[9][2] << " "  << l_maze[9][3] << " " << l_maze[9][4] << " " << l_maze[9][5]
           << " " << l_maze[9][6] << " " << l_maze[9][7] << " " << l_maze[9][8] << " "  << l_maze[9][9] << " " << l_maze[9][10] << " " << l_maze[9][11] << " |\n"
           << "\t| " << l_maze[10][0] << " " << l_maze[10][1] << " " << l_maze[10][2] << " "  << l_maze[10][3] << " " << l_maze[10][4] << " " << l_maze[10][5]
           << " " << l_maze[10][6] << " " << l_maze[10][7] << " " << l_maze[10][8] << " "  << l_maze[10][9] << " " << l_maze[10][10] << " " << l_maze[10][11] << " |\n"
           << "\t| " << l_maze[11][0] << " " << l_maze[11][1] << " " << l_maze[11][2] << " "  << l_maze[11][3] << " " << l_maze[11][4] << " " << l_maze[11][5]
           << " " << l_maze[11][6] << " " << l_maze[11][7] << " " << l_maze[11][8] << " "  << l_maze[11][9] << " " << l_maze[11][10] << " " << l_maze[11][11] << " \n"
           << "\t---------------------------\n";           
           next = 0;
           var_3 = 0;
     }
     if(next != 1)
      {
    
        
     color_y();
      x = 9;
      y = 1; 
      Gotoxy();
      cout << " " << d_maze[0][0] << " " << d_maze[0][1] << " " << d_maze[0][2] << " "  << d_maze[0][3] << " " << d_maze[0][4] << " " << d_maze[0][5]
           << " "; color_change(); cout << d_maze[0][6] << " " << d_maze[0][7] << " " << d_maze[0][8]; color_y(); cout << " "  << d_maze[0][9] << " " << d_maze[0][10] << " " << d_maze[0][11];
      x = 9;
      y = 2; 
     Gotoxy();      
      cout << " " << d_maze[1][0] << " "; color_change(); cout << d_maze[1][1] << " " << d_maze[1][2]; color_y(); cout << " "  << d_maze[1][3] << " "; color_change(); cout << d_maze[1][4]; color_y(); cout << " " << d_maze[1][5]
           << " " << d_maze[1][6] << " " << d_maze[1][7] << " " << d_maze[1][8] << " "  << d_maze[1][9] << " "; color_change(); cout << d_maze[1][10]; color_y(); cout << " " << d_maze[1][11];
      x = 9;
      y = 3; 
      Gotoxy();     
      cout     << " " << d_maze[2][0] << " " << d_maze[2][1] << " " << d_maze[2][2] << " "  << d_maze[2][3] << " "; color_change(); cout << d_maze[2][4]; color_y(); cout << " " << d_maze[2][5]
           << " "; color_change(); cout << d_maze[2][6] << " " << d_maze[2][7]; color_y(); cout << " " << d_maze[2][8] << " "; color_change(); cout << d_maze[2][9] << " " << d_maze[2][10]; color_y(); cout << " " << d_maze[2][11];
      x = 9;
      y = 4; 
      Gotoxy();     
      cout     << " " << d_maze[3][0] << " "; color_change(); cout << d_maze[3][1] << " " << d_maze[3][2]; color_y(); cout << " "  << d_maze[3][3] << " " << d_maze[3][4] << " " << d_maze[3][5]
           << " " << d_maze[3][6] << " " << d_maze[3][7] << " " << d_maze[3][8] << " "; color_change(); cout << d_maze[3][9] << " " << d_maze[3][10]; color_y(); cout << " " << d_maze[3][11];
      x = 9;
      y = 5; 
      Gotoxy();     
      cout     << " " << d_maze[4][0] << " ";  color_change(); cout << d_maze[4][1] << " " << d_maze[4][2] << " " << d_maze[4][3] << " " << d_maze[4][4]; color_y(); cout << " " << d_maze[4][5]
           << " "; color_change(); cout << d_maze[4][6] << " " << d_maze[4][7] << " " << d_maze[4][8] << " " << d_maze[4][9] << " " << d_maze[4][10] << " " << d_maze[4][11];  color_y();
      x = 9;
      y = 6; 
      Gotoxy();     
      cout     << " " << d_maze[5][0] << " "; color_change(); cout << d_maze[5][1]; color_y(); cout << " " << d_maze[5][2] << " "  << d_maze[5][3] << " " << d_maze[5][4] << " " << d_maze[5][5]  
           << " "; color_change(); cout << d_maze[5][6]; color_y(); cout << " " << d_maze[5][7] << " " << d_maze[5][8] << " "  << d_maze[5][9] << " " << d_maze[5][10] << " " << d_maze[5][11];
      
      if(ticker != 0 && ticker != 1 && ticker != 2 && ticker != 3 && ticker != 4 && ticker != 5 && ticker != 6 && ticker != 7 && ticker!= 8 && ticker!= 9)
      {          
      x = 55;
      y = 6; 
      Gotoxy();
      SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 2 | FOREGROUND_INTENSITY);
      cout << ticker;
      color_y();     
      }
      else if(ticker == 0 | ticker == 1 | ticker == 2 | ticker == 3 | ticker == 4 | ticker == 5 | ticker == 6 | ticker == 7 | ticker == 8 | ticker == 9)
      {
      x = 55;
      y = 6; 
      Gotoxy();
      SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 2 | FOREGROUND_INTENSITY);
      cout << " " << ticker;
      color_y(); 
      }
                
      x = 9;
      y = 7; 
      Gotoxy();     
      cout     << " " << d_maze[6][0] << " " << d_maze[6][1] << " " << d_maze[6][2] << " "; color_change(); cout << d_maze[6][3]; color_y(); cout << " " << d_maze[6][4] << " "; color_change(); cout << d_maze[6][5]
      << " " << d_maze[6][6]; color_y(); cout << " " << d_maze[6][7] << " "; color_change(); cout << d_maze[6][8] << " " << d_maze[6][9] << " " << d_maze[6][10]; color_y(); cout << " " << d_maze[6][11];
      x = 9;
      y = 8; 
      Gotoxy();     
      cout     << " " << d_maze[7][0] << " "; color_change(); cout << d_maze[7][1] << " " << d_maze[7][2] << " " << d_maze[7][3]; color_y(); cout << " " << d_maze[7][4] << " " << d_maze[7][5]
           << " " << d_maze[7][6] << " " << d_maze[7][7] << " "; color_change(); cout << d_maze[7][8]; color_y(); cout << " "  << d_maze[7][9] << " "; color_change(); cout << d_maze[7][10]; color_y(); cout << " " << d_maze[7][11];
      x = 9;
      y = 9; 
      Gotoxy();     
      cout     << " " << d_maze[8][0] << " "; color_change(); cout << d_maze[8][1] << " " << d_maze[8][2] << " " << d_maze[8][3] << " " << d_maze[8][4]; color_y(); cout << " " << d_maze[8][5]
           << " "; color_change(); cout << d_maze[8][6] << " " << d_maze[8][7] << " " << d_maze[8][8];  color_y(); cout << " "  << d_maze[8][9] << " "; color_change(); cout << d_maze[8][10]; color_y(); cout << " " << d_maze[8][11];
      x = 9;
      y = 10; 
      Gotoxy();     
      cout     << " " << d_maze[9][0] << " " << d_maze[9][1] << " " << d_maze[9][2] << " "  << d_maze[9][3] << " " << d_maze[9][4] << " " << d_maze[9][5]
           << " " << d_maze[9][6] << " " << d_maze[9][7] << " " << d_maze[9][8] << " "  << d_maze[9][9] << " "; color_change(); cout << d_maze[9][10]; color_y(); cout << " " << d_maze[9][11];
      x = 9;
      y = 11; 
      Gotoxy();     
      cout     << " " << d_maze[10][0] << " "; color_change(); cout << d_maze[10][1] << " " << d_maze[10][2] << " " << d_maze[10][3] << " " << d_maze[10][4];  color_y(); cout << " " << d_maze[10][5]
           << " "; color_change(); cout << d_maze[10][6] << " " << d_maze[10][7] << " " << d_maze[10][8] << " " << d_maze[10][9] << " " << d_maze[10][10];  color_y(); cout << " " << d_maze[10][11];
      x = 9;
      y = 12; 
      Gotoxy();     
      cout     << " " << d_maze[11][0] << " " << d_maze[11][1] << " " << d_maze[11][2] << " "  << d_maze[11][3] << " " << d_maze[11][4] << " " << d_maze[11][5]
           << " " << d_maze[11][6] << " " << d_maze[11][7] << " " << d_maze[11][8] << " "  << d_maze[11][9] << " "; color_change(); cout << d_maze[11][10]; color_y(); cout << " " << d_maze[11][11];
           
           var_3 = 0;
        }

           
           /*cout << "\t---------------------------\n"
           << "\t| " << d_maze[0][0] << " " << d_maze[0][1] << " " << d_maze[0][2] << " "  << d_maze[0][3] << " " << d_maze[0][4] << " " << d_maze[0][5]
           << " " << d_maze[0][6] << " " << d_maze[0][7] << " " << d_maze[0][8] << " "  << d_maze[0][9] << " " << d_maze[0][10] << " " << d_maze[0][11] << " |\n"
           << "\t| " << d_maze[1][0] << " " << d_maze[1][1] << " " << d_maze[1][2] << " "  << d_maze[1][3] << " " << d_maze[1][4] << " " << d_maze[1][5]
           << " " << d_maze[1][6] << " " << d_maze[1][7] << " " << d_maze[1][8] << " "  << d_maze[1][9] << " " << d_maze[1][10] << " " << d_maze[1][11] << " |\n"
           << "\t| " << d_maze[2][0] << " " << d_maze[2][1] << " " << d_maze[2][2] << " "  << d_maze[2][3] << " " << d_maze[2][4] << " " << d_maze[2][5]
           << " " << d_maze[2][6] << " " << d_maze[2][7] << " " << d_maze[2][8] << " "  << d_maze[2][9] << " " << d_maze[2][10] << " " << d_maze[2][11] << " |\n"
           << "\t| " << d_maze[3][0] << " " << d_maze[3][1] << " " << d_maze[3][2] << " "  << d_maze[3][3] << " " << d_maze[3][4] << " " << d_maze[3][5]
           << " " << d_maze[3][6] << " " << d_maze[3][7] << " " << d_maze[3][8] << " "  << d_maze[3][9] << " " << d_maze[3][10] << " " << d_maze[3][11] << " |\n"
           << "\t| " << d_maze[4][0] << " " << d_maze[4][1] << " " << d_maze[4][2] << " "  << d_maze[4][3] << " " << d_maze[4][4] << " " << d_maze[4][5]
           << " " << d_maze[4][6] << " " << d_maze[4][7] << " " << d_maze[4][8] << " "  << d_maze[4][9] << " " << d_maze[4][10] << " " << d_maze[4][11] << " |\n"
           << "\t| " << d_maze[5][0] << " " << d_maze[5][1] << " " << d_maze[5][2] << " "  << d_maze[5][3] << " " << d_maze[5][4] << " " << d_maze[5][5]
           << " " << d_maze[5][6] << " " << d_maze[5][7] << " " << d_maze[5][8] << " "  << d_maze[5][9] << " " << d_maze[5][10] << " " << d_maze[5][11] << " |\n"
           << "\t| " << d_maze[6][0] << " " << d_maze[6][1] << " " << d_maze[6][2] << " "  << d_maze[6][3] << " " << d_maze[6][4] << " " << d_maze[6][5]
           << " " << d_maze[6][6] << " " << d_maze[6][7] << " " << d_maze[6][8] << " "  << d_maze[6][9] << " " << d_maze[6][10] << " " << d_maze[6][11] << " |\n"
           << "\t| " << d_maze[7][0] << " " << d_maze[7][1] << " " << d_maze[7][2] << " "  << d_maze[7][3] << " " << d_maze[7][4] << " " << d_maze[7][5]
           << " " << d_maze[7][6] << " " << d_maze[7][7] << " " << d_maze[7][8] << " "  << d_maze[7][9] << " " << d_maze[7][10] << " " << d_maze[7][11] << " |\n"
           << "\t| " << d_maze[8][0] << " " << d_maze[8][1] << " " << d_maze[8][2] << " "  << d_maze[8][3] << " " << d_maze[8][4] << " " << d_maze[8][5]
           << " " << d_maze[8][6] << " " << d_maze[8][7] << " " << d_maze[8][8] << " "  << d_maze[8][9] << " " << d_maze[8][10] << " " << d_maze[8][11] << " |\n"
           << "\t| " << d_maze[9][0] << " " << d_maze[9][1] << " " << d_maze[9][2] << " "  << d_maze[9][3] << " " << d_maze[9][4] << " " << d_maze[9][5]
           << " " << d_maze[9][6] << " " << d_maze[9][7] << " " << d_maze[9][8] << " "  << d_maze[9][9] << " " << d_maze[9][10] << " " << d_maze[9][11] << " |\n"
           << "\t| " << d_maze[10][0] << " " << d_maze[10][1] << " " << d_maze[10][2] << " "  << d_maze[10][3] << " " << d_maze[10][4] << " " << d_maze[10][5]
           << " " << d_maze[10][6] << " " << d_maze[10][7] << " " << d_maze[10][8] << " "  << d_maze[10][9] << " " << d_maze[10][10] << " " << d_maze[10][11] << " |\n"
           << "\t| " << d_maze[11][0] << " " << d_maze[11][1] << " " << d_maze[11][2] << " "  << d_maze[11][3] << " " << d_maze[11][4] << " " << d_maze[11][5]
           << " " << d_maze[11][6] << " " << d_maze[11][7] << " " << d_maze[11][8] << " "  << d_maze[11][9] << " " << d_maze[11][10] << " " << d_maze[11][11] << " \n"
           << "\t---------------------------\n";*/

}

//0 line

void show_0_0()
{
			   d_maze[0][0] = P;
               d_maze[1][0] = check[1][0];
               d_maze[1][1] = check[1][1];
               d_maze[0][1] = check[0][1];
}

void show_1_0()
{
			   d_maze[1][0] = P;
			   d_maze[0][0] = check[0][0];
			   d_maze[0][1] = check[0][1];
               d_maze[1][1] = check[1][1];
               d_maze[2][0] = check[2][0];
			   d_maze[2][1] = check[2][1];
}

void show_2_0()
{
			   d_maze[2][0] = P;
			   d_maze[1][0] = check[1][0];
			   d_maze[1][1] = check[1][1];
               d_maze[2][1] = check[2][1];
               d_maze[3][0] = check[3][0];
			   d_maze[3][1] = check[3][1];
}

void show_3_0()
{
			   d_maze[3][0] = P;
			   d_maze[2][0] = check[2][0];
			   d_maze[2][1] = check[2][1];
               d_maze[3][1] = check[3][1];
               d_maze[4][0] = check[4][0];
			   d_maze[4][1] = check[4][1];
}

void show_4_0()
{
			   d_maze[4][0] = P;
			   d_maze[3][0] = check[3][0];
			   d_maze[3][1] = check[3][1];
               d_maze[4][1] = check[4][1];
               d_maze[5][0] = check[5][0];
			   d_maze[5][1] = check[5][1];
}

void show_5_0()
{
			   d_maze[5][0] = P;
			   d_maze[4][0] = check[4][0];
			   d_maze[4][1] = check[4][1];
               d_maze[5][1] = check[5][1];
               d_maze[6][0] = check[6][0];
			   d_maze[6][1] = check[6][1];
}

void show_6_0()
{
			   d_maze[6][0] = '*';
			   d_maze[5][0] = ' ';
			   d_maze[5][1] = 'X';
               d_maze[6][1] = ' ';
               d_maze[7][0] = ' ';
			   d_maze[7][1] = 'X';
}

void show_7_0()
{
			   d_maze[7][0] = '*';
			   d_maze[6][0] = ' ';
			   d_maze[6][1] = ' ';
               d_maze[7][1] = 'X';
               d_maze[8][0] = ' ';
			   d_maze[8][1] = 'X';
}

void show_8_0()
{
			   d_maze[8][0] = '*';
			   d_maze[7][0] = ' ';
			   d_maze[7][1] = 'X';
               d_maze[8][1] = 'X';
               d_maze[9][0] = ' ';
			   d_maze[9][1] = ' ';
}

void show_9_0()
{
			   d_maze[9][0] = '*';
			   d_maze[8][0] = ' ';
			   d_maze[8][1] = 'X';
               d_maze[9][1] = ' ';
               d_maze[10][0] = ' ';
			   d_maze[10][1] = 'X';
}

void show_10_0()
{
			   d_maze[10][0] = '*';
			   d_maze[9][0] = ' ';
			   d_maze[9][1] = ' ';
               d_maze[10][1] = 'X';
               d_maze[11][0] = ' ';
			   d_maze[11][1] = ' ';
}

void show_11_0()
{
			   d_maze[11][0] = '*';
			   d_maze[10][0] = ' ';
			   d_maze[10][1] = 'X';
               d_maze[11][1] = ' ';
}

//1st line

void show_0_1()
{
			   d_maze[0][1] = '*';
			   d_maze[0][0] = ' ';
			   d_maze[0][2] = ' ';
			   d_maze[1][0] = ' ';
               d_maze[1][1] = 'X';
               d_maze[1][2] = 'X';
}

void show_2_1()
{
			   d_maze[2][1] = '*';
			   d_maze[2][0] = ' ';
			   d_maze[2][2] = ' ';
			   d_maze[1][0] = ' ';
               d_maze[1][1] = 'X';
               d_maze[1][2] = 'X';
			   d_maze[3][0] = ' ';
               d_maze[3][1] = 'X';
               d_maze[3][2] = 'X';
}

void show_6_1()
{
			   d_maze[6][1] = '*';
			   d_maze[6][0] = ' ';
			   d_maze[6][2] = ' ';
			   d_maze[5][0] = ' ';
               d_maze[5][1] = 'X';
               d_maze[5][2] = ' ';
			   d_maze[7][0] = ' ';
               d_maze[7][1] = 'X';              
               d_maze[7][2] = 'X';
}

void show_9_1()
{
			   d_maze[9][1] = '*';
			   d_maze[9][0] = ' ';
			   d_maze[9][2] = ' ';
			   d_maze[8][0] = ' ';
               d_maze[8][1] = 'X';
               d_maze[8][2] = 'X';
			   d_maze[10][0] = ' ';
               d_maze[10][1] = 'X';
               d_maze[10][2] = 'X';
}

void show_11_1()
{
			   d_maze[11][1] = '*';
			   d_maze[11][0] = ' ';
			   d_maze[11][2] = ' ';
			   d_maze[10][0] = ' ';
               d_maze[10][1] = 'X';
               d_maze[10][2] = 'X';
}
               
//2nd line

void show_0_2()
{
			   d_maze[0][2] = '*';
			   d_maze[0][1] = ' ';
			   d_maze[0][3] = ' ';
			   d_maze[1][1] = 'X';
               d_maze[1][2] = 'X';
               d_maze[1][3] = ' ';
}

void show_2_2()
{
			   d_maze[2][2] = '*';
			   d_maze[2][1] = ' ';
			   d_maze[2][3] = ' ';
			   d_maze[1][1] = 'X';
               d_maze[1][2] = 'X';
               d_maze[1][3] = ' ';
			   d_maze[3][1] = 'X';
               d_maze[3][2] = 'X';
               d_maze[3][3] = ' ';
}

void show_5_2()
{
			   d_maze[5][2] = '*';
			   d_maze[5][1] = 'X';
			   d_maze[5][3] = ' ';
			   d_maze[4][1] = 'X';
               d_maze[4][2] = 'X';
               d_maze[4][3] = 'X';
			   d_maze[6][1] = ' ';
               d_maze[6][2] = ' ';
               d_maze[6][3] = 'X';
}

void show_6_2()
{
			   d_maze[6][2] = '*';
			   d_maze[6][1] = ' ';
			   d_maze[6][3] = 'X';
			   d_maze[5][1] = 'X';
               d_maze[5][2] = ' ';
               d_maze[5][3] = ' ';
			   d_maze[7][1] = 'X';
               d_maze[7][2] = 'X';
               d_maze[7][3] = 'X';
}

void show_9_2()
{
			   d_maze[9][2] = '*';
			   d_maze[9][1] = ' ';
			   d_maze[9][3] = ' ';
			   d_maze[8][1] = 'X';
               d_maze[8][2] = 'X';
               d_maze[8][3] = 'X';
			   d_maze[10][1] = 'X';
               d_maze[10][2] = 'X';
               d_maze[10][3] = 'X';
}

void show_11_2()
{
			   d_maze[11][2] = '*';
			   d_maze[11][1] = ' ';
			   d_maze[11][3] = ' ';
			   d_maze[10][1] = 'X';
               d_maze[10][2] = 'X';
               d_maze[10][3] = 'X';
}

//3rd line

void show_0_3()
{
			   d_maze[0][3] = '*';
			   d_maze[0][2] = ' ';
			   d_maze[0][4] = ' ';
			   d_maze[1][2] = 'X';
               d_maze[1][3] = ' ';
               d_maze[1][4] = 'X';
}

void show_1_3()
{
			   d_maze[1][3] = '*';
			   d_maze[0][2] = ' ';
			   d_maze[0][3] = ' ';
			   d_maze[0][4] = ' ';
               d_maze[1][2] = 'X';
               d_maze[1][4] = 'X';
			   d_maze[2][2] = ' ';
               d_maze[2][3] = ' ';
               d_maze[2][4] = 'X';
}

void show_2_3()
{
			   d_maze[2][3] = '*';
			   d_maze[1][2] = 'X';
			   d_maze[1][3] = ' ';
			   d_maze[1][4] = 'X';
               d_maze[2][2] = ' ';
               d_maze[2][4] = 'X';
			   d_maze[3][2] = 'X';
               d_maze[3][3] = ' ';
               d_maze[3][4] = ' ';
}

void show_3_3()
{
			   d_maze[3][3] = '*';
			   d_maze[2][2] = ' ';
			   d_maze[2][3] = ' ';
			   d_maze[2][4] = 'X';
               d_maze[3][2] = 'X';
               d_maze[3][4] = ' ';
			   d_maze[4][2] = 'X';
               d_maze[4][3] = 'X';
               d_maze[4][4] = 'X';
}

void show_5_3()
{
			   d_maze[5][3] = '*';
			   d_maze[4][2] = 'X';
			   d_maze[4][3] = 'X';
			   d_maze[4][4] = 'X';
               d_maze[5][2] = ' ';
               d_maze[5][4] = ' ';
			   d_maze[6][2] = ' ';
               d_maze[6][3] = 'X';
               d_maze[6][4] = ' ';
}

void show_9_3()
{
			   d_maze[9][3] = '*';
			   d_maze[8][2] = 'X';
			   d_maze[8][3] = 'X';
			   d_maze[8][4] = 'X';
               d_maze[9][2] = ' ';
               d_maze[9][4] = ' ';
			   d_maze[10][2] = 'X';
               d_maze[10][3] = 'X';
               d_maze[10][4] = 'X';
}

void show_11_3()
{
			   d_maze[11][3] = '*';
			   d_maze[10][2] = 'X';
			   d_maze[10][3] = 'X';
			   d_maze[10][4] = 'X';
               d_maze[11][2] = ' ';
               d_maze[11][4] = ' ';
}

//4th line

void show_0_4()
{
			   d_maze[0][4] = '*';
			   d_maze[0][3] = ' ';
			   d_maze[0][5] = ' ';
			   d_maze[1][3] = ' ';
               d_maze[1][4] = 'X';
               d_maze[1][5] = ' ';
}

void show_3_4()
{
			   d_maze[3][4] = '*';
			   d_maze[2][3] = ' ';
			   d_maze[2][4] = 'X';
			   d_maze[2][5] = ' ';
               d_maze[3][3] = ' ';
               d_maze[3][5] = ' ';
			   d_maze[4][3] = 'X';
               d_maze[4][4] = 'X';
               d_maze[4][5] = ' ';
}

void show_5_4()
{
			   d_maze[5][4] = '*';
			   d_maze[4][3] = 'X';
			   d_maze[4][4] = 'X';
			   d_maze[4][5] = ' ';
               d_maze[5][3] = ' ';
               d_maze[5][5] = ' ';
			   d_maze[6][3] = 'X';
               d_maze[6][4] = ' ';
               d_maze[6][5] = 'X';
}

void show_6_4()
{
			   d_maze[6][4] = '*';
			   d_maze[5][3] = ' ';
			   d_maze[5][4] = ' ';
			   d_maze[5][5] = ' ';
               d_maze[6][3] = 'X';
               d_maze[6][5] = 'X';
			   d_maze[7][3] = 'X';
               d_maze[7][4] = ' ';
               d_maze[7][5] = ' ';
}

void show_7_4()
{
			   d_maze[7][4] = '*';
			   d_maze[6][3] = 'X';
			   d_maze[6][4] = ' ';
			   d_maze[6][5] = 'X';
               d_maze[7][3] = 'X';
               d_maze[7][5] = ' ';
			   d_maze[8][3] = 'X';
               d_maze[8][4] = 'X';
               d_maze[8][5] = ' ';
}

void show_9_4()
{
			   d_maze[9][4] = '*';
			   d_maze[8][3] = 'X';
			   d_maze[8][4] = 'X';
			   d_maze[8][5] = ' ';
               d_maze[9][3] = ' ';
               d_maze[9][5] = ' ';
			   d_maze[10][3] = 'X';
               d_maze[10][4] = 'X';
               d_maze[10][5] = ' ';
}

void show_11_4()
{
			   d_maze[11][4] = '*';
			   d_maze[11][3] = ' ';
			   d_maze[11][5] = ' ';
			   d_maze[10][3] = 'X';
               d_maze[10][4] = 'X';
               d_maze[10][5] = ' ';
}

//5th line

void show_0_5()
{
			   d_maze[0][5] = '*';
			   d_maze[0][4] = ' ';
			   d_maze[0][6] = 'X';
			   d_maze[1][4] = 'X';
               d_maze[1][5] = ' ';
               d_maze[1][6] = ' ';
}

void show_1_5()
{
			   d_maze[1][5] = '*';
			   d_maze[1][4] = 'X';
			   d_maze[1][6] = ' ';
			   d_maze[0][4] = ' ';
               d_maze[0][5] = ' ';
               d_maze[0][6] = 'X';
			   d_maze[2][4] = 'X';
               d_maze[2][5] = ' ';
               d_maze[2][6] = 'X';
}

void show_2_5()
{
			   d_maze[2][5] = '*';
			   d_maze[2][4] = 'X';
			   d_maze[2][6] = 'X';
			   d_maze[1][4] = 'X';
               d_maze[1][5] = ' ';
               d_maze[1][6] = ' ';
			   d_maze[3][4] = ' ';
               d_maze[3][5] = ' ';
               d_maze[3][6] = ' ';
}

void show_3_5()
{
			   d_maze[3][5] = '*';
			   d_maze[3][4] = ' ';
			   d_maze[3][6] = ' ';
			   d_maze[2][4] = 'X';
               d_maze[2][5] = ' ';
               d_maze[2][6] = 'X';
			   d_maze[4][4] = 'X';
               d_maze[4][5] = ' ';
               d_maze[4][6] = 'X';
}

void show_4_5()
{
			   d_maze[4][5] = '*';
			   d_maze[4][4] = 'X';
			   d_maze[4][6] = 'X';
			   d_maze[3][4] = ' ';
               d_maze[3][5] = ' ';
               d_maze[3][6] = ' ';
			   d_maze[5][4] = ' ';
               d_maze[5][5] = ' ';
               d_maze[5][6] = 'X';
}

void show_5_5()
{
			   d_maze[5][5] = '*';
			   d_maze[5][4] = ' ';
			   d_maze[5][6] = 'X';
			   d_maze[4][4] = 'X';
               d_maze[4][5] = ' ';
               d_maze[4][6] = 'X';
			   d_maze[6][4] = ' ';
               d_maze[6][5] = 'X';
               d_maze[6][6] = 'X';
}

void show_7_5()
{
			   d_maze[7][5] = '*';
			   d_maze[7][4] = ' ';
			   d_maze[7][6] = ' ';
			   d_maze[6][4] = ' ';
               d_maze[6][5] = 'X';
               d_maze[6][6] = 'X';
			   d_maze[8][4] = 'X';
               d_maze[8][5] = ' ';
               d_maze[8][6] = 'X';
}

void show_8_5()
{
			   d_maze[8][5] = '*';
			   d_maze[8][4] = 'X';
			   d_maze[8][6] = 'X';
			   d_maze[7][4] = ' ';
               d_maze[7][5] = ' ';
               d_maze[7][6] = ' ';
			   d_maze[9][4] = ' ';
               d_maze[9][5] = ' ';
               d_maze[9][6] = ' ';
}

void show_9_5()
{
			   d_maze[9][5] = '*';
			   d_maze[9][4] = ' ';
			   d_maze[9][6] = ' ';
			   d_maze[8][4] = 'X';
               d_maze[8][5] = ' ';
               d_maze[8][6] = 'X';
			   d_maze[10][4] = 'X';
               d_maze[10][5] = ' ';
               d_maze[10][6] = 'X';
}

void show_10_5()
{
			   d_maze[10][5] = '*';
			   d_maze[10][4] = 'X';
			   d_maze[10][6] = 'X';
			   d_maze[9][4] = ' ';
               d_maze[9][5] = ' ';
               d_maze[9][6] = ' ';
			   d_maze[11][4] = ' ';
               d_maze[11][5] = ' ';
               d_maze[11][6] = ' ';
}

void show_11_5()
{
			   d_maze[11][5] = '*';
			   d_maze[11][4] = ' ';
			   d_maze[11][6] = ' ';
			   d_maze[10][4] = 'X';
               d_maze[10][5] = ' ';
               d_maze[10][6] = 'X';
}

//6th line

void show_1_6()
{
			   d_maze[1][6] = '*';
			   d_maze[1][5] = ' ';
			   d_maze[1][7] = ' ';
			   d_maze[0][5] = ' ';
               d_maze[0][6] = 'X';
               d_maze[0][7] = 'X';
			   d_maze[2][5] = ' ';
               d_maze[2][6] = 'X';
               d_maze[2][7] = 'X';
}

void show_3_6()
{
			   d_maze[3][6] = '*';
			   d_maze[3][5] = ' ';
			   d_maze[3][7] = ' ';
			   d_maze[2][5] = ' ';
               d_maze[2][6] = 'X';
               d_maze[2][7] = 'X';
			   d_maze[4][5] = ' ';
               d_maze[4][6] = 'X';
               d_maze[4][7] = 'X';
}

void show_7_6()
{
			   d_maze[7][6] = '*';
			   d_maze[7][5] = ' ';
			   d_maze[7][7] = ' ';
			   d_maze[6][5] = 'X';
               d_maze[6][6] = 'X';
               d_maze[6][7] = ' ';
			   d_maze[8][5] = ' ';
               d_maze[8][6] = 'X';
               d_maze[8][7] = 'X';
}

void show_9_6()
{
			   d_maze[9][6] = '*';
			   d_maze[9][5] = ' ';
			   d_maze[9][7] = ' ';
			   d_maze[8][5] = ' ';
               d_maze[8][6] = 'X';
               d_maze[8][7] = 'X';
			   d_maze[10][5] = ' ';
               d_maze[10][6] = 'X';
               d_maze[10][7] = 'X';
}

void show_11_6()
{
			   d_maze[11][6] = '*';
			   d_maze[11][5] = ' ';
			   d_maze[11][7] = ' ';
			   d_maze[10][5] = ' ';
               d_maze[10][6] = 'X';
               d_maze[10][7] = 'X';
}

//7th line

void show_1_7()
{
			   d_maze[1][7] = '*';
			   d_maze[1][6] = ' ';
			   d_maze[1][8] = ' ';
			   d_maze[0][6] = 'X';
               d_maze[0][7] = 'X';
               d_maze[0][8] = 'X';
			   d_maze[2][6] = 'X';
               d_maze[2][7] = 'X';
               d_maze[2][8] = ' ';
}

void show_3_7()
{
			   d_maze[3][7] = '*';
			   d_maze[3][6] = ' ';
			   d_maze[3][8] = ' ';
			   d_maze[2][6] = 'X';
               d_maze[2][7] = 'X';
               d_maze[2][8] = ' ';
			   d_maze[4][6] = 'X';
               d_maze[4][7] = 'X';
               d_maze[4][8] = 'X';
}

void show_5_7()
{
			   d_maze[5][7] = '*';
			   d_maze[5][6] = 'X';
			   d_maze[5][8] = ' ';
			   d_maze[4][6] = 'X';
               d_maze[4][7] = 'X';
               d_maze[4][8] = 'X';
			   d_maze[6][6] = 'X';
               d_maze[6][7] = ' ';
               d_maze[6][8] = 'X';
}

void show_6_7()
{
			   d_maze[6][7] = '*';
			   d_maze[6][6] = 'X';
			   d_maze[6][8] = 'X';
			   d_maze[5][6] = 'X';
               d_maze[5][7] = ' ';
               d_maze[5][8] = ' ';
			   d_maze[7][6] = ' ';
               d_maze[7][7] = ' ';
               d_maze[7][8] = 'X';
}

void show_7_7()
{
			   d_maze[7][7] = '*';
			   d_maze[7][6] = ' ';
			   d_maze[7][8] = 'X';
			   d_maze[6][6] = 'X';
               d_maze[6][7] = ' ';
               d_maze[6][8] = 'X';
			   d_maze[8][6] = 'X';
               d_maze[8][7] = 'X';
               d_maze[8][8] = 'X';
}

void show_9_7()
{
			   d_maze[9][7] = '*';
			   d_maze[9][6] = ' ';
			   d_maze[9][8] = ' ';
			   d_maze[8][6] = 'X';
               d_maze[8][7] = 'X';
               d_maze[8][8] = 'X';
			   d_maze[10][6] = 'X';
               d_maze[10][7] = 'X';
               d_maze[10][8] = 'X';
}

void show_11_7()
{
			   d_maze[11][7] = '*';
			   d_maze[11][6] = ' ';
			   d_maze[11][8] = ' ';
			   d_maze[10][6] = 'X';
               d_maze[10][7] = 'X';
               d_maze[10][8] = 'X';
}

//8th line

void show_1_8()
{
			   d_maze[1][8] = '*';
			   d_maze[1][7] = ' ';
			   d_maze[1][9] = ' ';
			   d_maze[0][7] = 'X';
               d_maze[0][8] = 'X';
               d_maze[0][9] = ' ';
			   d_maze[2][7] = 'X';
               d_maze[2][8] = ' ';
               d_maze[2][9] = 'X';
}

void show_2_8()
{
			   d_maze[2][8] = '*';
			   d_maze[2][7] = 'X';
			   d_maze[2][9] = 'X';
			   d_maze[1][7] = ' ';
               d_maze[1][8] = ' ';
               d_maze[1][9] = ' ';
			   d_maze[3][7] = ' ';
               d_maze[3][8] = ' ';
               d_maze[3][9] = 'X';
}

void show_3_8()
{
			   d_maze[3][8] = '*';
			   d_maze[3][7] = ' ';
			   d_maze[3][9] = 'X';
			   d_maze[2][7] = 'X';
               d_maze[2][8] = ' ';
               d_maze[2][9] = 'X';
			   d_maze[4][7] = 'X';
               d_maze[4][8] = 'X';
               d_maze[4][9] = 'X';
}

void show_5_8()
{
			   d_maze[5][8] = '*';
			   d_maze[5][7] = ' ';
			   d_maze[5][9] = ' ';
			   d_maze[4][7] = 'X';
               d_maze[4][8] = 'X';
               d_maze[4][9] = 'X';
			   d_maze[6][7] = ' ';
               d_maze[6][8] = 'X';
               d_maze[6][9] = 'X';
}

void show_9_8()
{
			   d_maze[9][8] = '*';
			   d_maze[9][7] = ' ';
			   d_maze[9][9] = ' ';
			   d_maze[8][7] = 'X';
               d_maze[8][8] = 'X';
               d_maze[8][9] = ' ';
			   d_maze[10][7] = 'X';
               d_maze[10][8] = 'X';
               d_maze[10][9] = 'X';
}

void show_11_8()
{
			   d_maze[11][8] = '*';
			   d_maze[11][7] = ' ';
			   d_maze[11][9] = ' ';
			   d_maze[10][7] = 'X';
               d_maze[10][8] = 'X';
               d_maze[10][9] = 'X';
}

//9th line

void show_0_9()
{
			   d_maze[0][9] = '*';
			   d_maze[0][8] = 'X';
			   d_maze[0][10] = ' ';
			   d_maze[1][8] = ' ';
               d_maze[1][9] = ' ';
               d_maze[1][10] = 'X';
}

void show_1_9()
{
			   d_maze[1][9] = '*';
			   d_maze[1][8] = ' ';
			   d_maze[1][10] = 'X';
			   d_maze[0][8] = 'X';
               d_maze[0][9] = ' ';
               d_maze[0][10] = ' ';
			   d_maze[2][8] = ' ';
               d_maze[2][9] = 'X';
               d_maze[2][10] = 'X';
}

void show_5_9()
{
			   d_maze[5][9] = '*';
			   d_maze[5][8] = ' ';
			   d_maze[5][10] = ' ';
			   d_maze[4][8] = 'X';
               d_maze[4][9] = 'X';
               d_maze[4][10] = 'X';
			   d_maze[6][8] = 'X';
               d_maze[6][9] = 'X';
               d_maze[6][10] = 'X';
}

void show_7_9()
{
			   d_maze[7][9] = '*';
			   d_maze[7][8] = 'X';
			   d_maze[7][10] = 'X';
			   d_maze[6][8] = 'X';
               d_maze[6][9] = 'X';
               d_maze[6][10] = 'X';
			   d_maze[8][8] = 'X';
               d_maze[8][9] = ' ';
               d_maze[8][10] = 'X';
}

void show_8_9()
{
			   d_maze[8][9] = '*';
			   d_maze[8][8] = 'X';
			   d_maze[8][10] = 'X';
			   d_maze[7][8] = 'X';
               d_maze[7][9] = ' ';
               d_maze[7][10] = 'X';
			   d_maze[9][8] = ' ';
               d_maze[9][9] = ' ';
               d_maze[9][10] = 'X';
}

void show_9_9()
{
			   d_maze[9][9] = '*';
			   d_maze[9][8] = ' ';
			   d_maze[9][10] = 'X';
			   d_maze[8][8] = 'X';
               d_maze[8][9] = ' ';
               d_maze[8][10] = 'X';
			   d_maze[10][8] = 'X';
               d_maze[10][9] = 'X';
               d_maze[10][10] = 'X';
}

void show_11_9()
{
			   d_maze[11][9] = '*';
			   d_maze[11][8] = ' ';
			   d_maze[11][10] = 'X';
			   d_maze[10][8] = 'X';
               d_maze[10][9] = 'X';
               d_maze[10][10] = 'X';
}

//11th line

void show_0_10()
{
			   d_maze[0][10] = '*';
			   d_maze[0][9] = ' ';
			   d_maze[0][11] = ' ';
			   d_maze[1][9] = ' ';
               d_maze[1][10] = 'X';
               d_maze[1][11] = ' ';
}

void show_5_10()
{
			   d_maze[5][10] = '*';
			   d_maze[5][9] = ' ';
			   d_maze[5][11] = ' ';
			   d_maze[4][9] = 'X';
               d_maze[4][10] = 'X';
               d_maze[4][11] = 'X';
               d_maze[6][9] = 'X';
               d_maze[6][10] = 'X';
               d_maze[6][11] = ' ';
}

void show_5_10_S()
{
			   d_maze[5][10] = '*';
			   d_maze[5][9] = ' ';
			   d_maze[5][11] = ' ';
			   d_maze[4][9] = 'X';
               d_maze[4][10] = 'X';
               d_maze[4][11] = 'X';
               d_maze[6][9] = 'X';
               d_maze[6][10] = 'X';
               d_maze[6][11] = ' ';
               d_maze[0][10] = '~';
}

//12th line

void show_0_11()
{
			   d_maze[0][11] = '*';
			   d_maze[0][10] = ' ';
			   d_maze[1][10] = 'X';
			   d_maze[1][11] = ' ';
}

void show_1_11()
{
			   d_maze[1][11] = '*';
			   d_maze[1][10] = 'X';
			   d_maze[0][10] = ' ';
			   d_maze[0][11] = ' ';
		       d_maze[2][10] = 'X';
			   d_maze[2][11] = ' ';
}

void show_2_11()
{
			   d_maze[2][11] = '*';
			   d_maze[2][10] = 'X';
			   d_maze[1][10] = 'X';
			   d_maze[1][11] = ' ';
		       d_maze[3][10] = 'X';
			   d_maze[3][11] = ' ';
}

void show_3_11()
{
			   d_maze[3][11] = '*';
			   d_maze[3][10] = 'X';
			   d_maze[2][10] = 'X';
			   d_maze[2][11] = ' ';
		       d_maze[4][10] = 'X';
			   d_maze[4][11] = 'X';
}

void show_5_11()
{
			   d_maze[5][11] = '*';
			   d_maze[5][10] = ' ';
			   d_maze[4][10] = 'X';
			   d_maze[4][11] = 'X';
		       d_maze[6][10] = 'X';
			   d_maze[6][11] = ' ';
}

void show_6_11()
{
			   d_maze[6][11] = '*';
			   d_maze[6][10] = 'X';
			   d_maze[5][10] = ' ';
			   d_maze[5][11] = ' ';
		       d_maze[7][10] = 'X';
			   d_maze[7][11] = ' ';
}

void show_7_11()
{
			   d_maze[7][11] = '*';
			   d_maze[7][10] = 'X';
			   d_maze[6][10] = 'X';
			   d_maze[6][11] = ' ';
		       d_maze[8][10] = 'X';
			   d_maze[8][11] = ' ';
}

void show_8_11()
{
			   d_maze[8][11] = '*';
			   d_maze[8][10] = 'X';
			   d_maze[7][10] = 'X';
			   d_maze[7][11] = ' ';
		       d_maze[9][10] = 'X';
			   d_maze[9][11] = ' ';
}

void show_9_11()
{
			   d_maze[9][11] = '*';
			   d_maze[9][10] = 'X';
			   d_maze[8][10] = 'X';
			   d_maze[8][11] = ' ';
		       d_maze[10][10] = 'X';
			   d_maze[10][11] = ' ';
}

void show_10_11()
{
			   d_maze[10][11] = '*';
			   d_maze[10][10] = 'X';
			   d_maze[9][10] = 'X';
			   d_maze[9][11] = ' ';
		       d_maze[11][10] = 'X';
			   d_maze[11][11] = ' ';
}

void show_11_11()
{
			   d_maze[11][11] = '*';
			   d_maze[11][10] = 'X';
		       d_maze[10][10] = 'X';
			   d_maze[10][11] = ' ';
}

/*
void fill_map(bool TRUE)
{

while(ACTIVE)  
  for(int loc = 0; loc < 12; loc++)
   {
     for(int wor = 0; wor < 12; wor++)
      {
        d_maze[row][col] = check[row][col];
        row++;
      }
      col++;
   }
   if(loc > 11)
    {
     ACTIVE = false;
   }  
}

 if(TRUE)
  {
    if(move == 72)
     {
      d_maze[row][col] = check[row][col];
      d_maze[row + 1][col] = P;
     }
    else if(move == 80)
     {
      d_mazerow][col] = check[row][col];
      d_maze[row - 1][col] = P;
     }
    else if(move == 75)
     {
      d_maze[row][col] = check[row][col];
      d_maze[row][col - 1] = P;
     }
    else if(move == 75)
     {
      d_maze[row][col] = check[row][col];
      d_maze[row][col + 1] = P;
     }
   }
  
 
  if((_maze[row][col] == P) && (row != 0) && (row != 11) && (col != 0) && (col != 11))
   {
    l_maze[row - 1][col] = check[row - 1][col];
    l_maze[row - 1][col + 1] = check[row - 1][col + 1];
    l_maze[row + 1][col] = check[row + 1][col];
    l_maze[row + 1][col + 1] = check[row + 1][col + 1];
    l_maze[row][col + 1] = check[row][col + 1];
   } 
  
  if((_maze[row][col] == P) && (row == 11) && (row == 11) && (col != 0) && (col != 11))
   {
    l_maze[row - 1][col] = check[row - 1][col];
    l_maze[row - 1][col - 1] = check[row - 1][col - 1];
    l_maze[row + 1][col] = check[row + 1][col];
    l_maze[row + 1][col - 1] = check[row + 1][col - 1];
   }
  if((_maze[row][col] == P) && (row == 0) && (row != 11) && (col != 0) && (col != 11))
   {
    l_maze[row - 1][col] = check[row - 1][col];
    l_maze[row - 1][col + 1] = check[row - 1][col + 1];
    l_maze[row + 1][col] = check[row + 1][col];
    l_maze[row + 1][col + 1] = check[row + 1][col + 1];
    l_maze[row][col + 1] = check[row][col + 1];
   }
     
  if((_maze[row][col] == P) && (col != 0) && (col != 11) && (row == 0)))
   {
    l_maze[row][col - 1] = check[row][col - 1];
    l_maze[row ][col + 1] = check[row][col + 1];
    l_maze[row + 1][col] = check[row + 1][col];
    l_maze[row + 1][col - 1] = check[row + 1][col - 1];
    l_maze[row + 1][col + 1] = check[row + 1][col + 1];
   }
  if((_maze[row][col] == P) && (col != 0) && (col != 11) && (row == 11)))
   {
    l_maze[row][col - 1] = check[row][col - 1];
    l_maze[row ][col + 1] = check[row][col + 1];
    l_maze[row - 1][col] = check[row - 1][col];
    l_maze[row - 1][col - 1] = check[row - 1][col - 1];
    l_maze[row - 1][col + 1] = check[row - 1][col + 1];
   }      
         
  if((d_maze[row][col] == P) && (col == 0) && (row == 0))
   {
    l_maze[row + 1][col] = check[row + 1][col];
    l_maze[row + 1][col + 1] = check[row + 1][col + 1];
    l_maze[row][col + 1] = check[row][col + 1];
   }
  if((d_maze[row][col] == P) && (col == 0) && (row == 11))
   {
    l_maze[row - 1][col] = check[row - 1][col];
    l_maze[row - 1][col + 1] = check[row - 1][col + 1];
    l_maze[row][col + 1] = check[row][col + 1];
   }
  if((d_maze[row][col] == P) && (col == 11) && (row == 0))
   {
    l_maze[row + 1][col] = check[row + 1][col];
    l_maze[row + 1][col - 1] = check[row + 1][col - 1];
    l_maze[row][col - 1] = check[row][col - 1];
   }
  if((d_maze[row][col] == P) && (col == 11) && (row == 11))
   {
    l_maze[row - 1][col] = check[row - 1][col];
    l_maze[row - 1][col - 1] = check[row - 1][col - 1];
    l_maze[row][col - 1] = check[row][col - 1];
   }
  
   
 TRUE = true;
   
}
*/



void color_change()
{
 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 8 | FOREGROUND_INTENSITY);
}

void color_y()
{
  SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6 | FOREGROUND_INTENSITY);
}

  
void intro()
{
 system("CLS");
 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 8 | FOREGROUND_INTENSITY);
 cout << "\a\t\t\tWelcome to Escape To Safety!\n\n\n";
 cout << "\tStrolling through the forest one evening you lost your direction.\n"
      << "\tThe sun was starting to set and you must get back home before nightfall.\n"
      << "\tAll you know is that you must go back through the dark cave to get home.\n"
      << "\tHowever you only have a little bit of time left before the cave goes\n\tpitch black.\n"
      << "\tOnce the cave goes dark there will be no chance for survival so there\n\twill be no time to waste.\n\n\n";
 do
  {     
 cout << "\tEnter ( C ) to continue\n"
      << "\tEnter ( H ) for more help\n"      
      << "\tEnter ( Q ) to quit\n\n\t"; 
 cin >> option;
   if(option == 'C' | option == 'c')
     {
      system("CLS");
      var_4 = 1;
      break;
     }
   else if(option == 'H' | option == 'h')
     {
     system("CLS");
     help();
     system("CLS");
     }
   else if(option == 'Q' | option == 'q')
    {
    system("CLS");
    bla = -1;
    ticker = -1;
    var_6 = 0;
    var_5 = 0;
    var_4 = 0;
    num_1 = 0;
    break;
    }
   else
    {
    system("CLS");
    cout << "\tThere is no option for " << option << "\n\t";
    getch();
    system("CLS");
    }
 }while(var_4 == 1);
 if(var_4 != 0)
 {
 do
 {
  cout << "\tPlease choose the level of difficulty\n"
       << "\t( E ) for easy\n"
       << "\t( N ) for normal\n"
       << "\t( H ) for hard\n\n\t";
  cin >> difficulty;
  system("CLS");
  if(difficulty == 'E' | difficulty == 'e')
   {
   level = 50;
   cout << "\tFor each move you make you will have roughly one less minute of light\n"
        << "\tKeep in mind that you only have about 50 minutes of light left\n\taltogether\n";
   var_5 = 0;
   break;
   }
  if(difficulty == 'N' | difficulty == 'n')
   {
   level = 40;
   cout << "\tFor each move you make you will have roughly one less minute of light\n"
        << "\tKeep in mind that you only have about 40 minutes of light left\n\taltogether\n";
   var_5 = 0;
   break;
   }
  if(difficulty == 'H' | difficulty == 'h')
   {
   level = 30;
   cout << "\tFor each move you make you will have roughly one less minute of light\n"
        << "\tKeep in mind that you only have about 30 minutes of light left\n\taltogether\n";
   var_5 = 0;
   break;
   }
  else
   {
   system("CLS");
   cout << "\tThere is no difficulty level of " << difficulty << "\n\t";
   getch();
   system("CLS");
   }
  }while(var_5 == 1);
  }
   if(option != 'Q' && option != 'q')
   {             
  cout << "\n\n\t\t\t        Good luck";
  getch();
  system("CLS");
  }
}
 
void help()
{
 
 char rule;
 char answer;
 if(var_6 != 0)
 {
do
 {
 system("CLS");
 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 8 | FOREGROUND_INTENSITY);
 cout << "\t\t\tGame Rules\n\n\n"
      << "\t( M ) = Movement\n"
      << "\t( B ) = Gameboard\n"
      << "\t( W ) = Winnning\n"
      << "\n\tEnter the letter of the game rule you want to view - ";
 cin >> rule;
   if(rule == 'M' | rule == 'm')
    {
    system("CLS");
    cout << "\tIn order to move on the map, use the four arrow keys\n\n"
         << "\tThe right arrow key is to move right\n"
         << "\tThe left arrow key is to move left\n"
         << "\tThe up arrow key is to move up\n"
         << "\tThe down arrow key is to move down\n\t";
    getch();
    cout << "\n\n\tWould you like to view the game rules again?\n";
    cout << "\tEnter Y for yes or N for no\n\t";
    cin >> answer;
     if(answer == 'Y' | answer == 'Y')
      {
      var_6 = 1;
      system("CLS");
      }
     else
      {
      system("CLS");
      var_6 = 0;
      } 
    }
   else if(rule == 'B' | rule == 'b')
    {
    system("CLS");
    cout << "\t\tThe gameboard symbolizes a cave the is essentially a maze\n\n"
         << "\tThe gray ' X 's represent the walls of the cave and you can not move\n\tintothose\n"
         << "\tThe blank black parts of the screen represent the areas of the cave you\n\tcan movethrough\n"
         << "\tThe yellow ' * ' represents your figure and is what you are moving.\n"
         << "\tThe red box around the maze reprents the outter walls of the cave\n\n\n"
         << "\tIf you ever see a yellow ' ~ ' you know you have found the secret\n\tpassage of the game.\n"
         << "\tTo those that are able to find the secret passage please send me the\n\tscreenshot.  My e-mail address is at kyleclark80@hotmail.com\n\t";
    getch();
    cout << "\n\n\tWould you like to view the game rules again?\n";
    cout << "\tEnter Y for yes or N for no\n\t";
    cin >> answer;
     if(answer == 'Y' | answer == 'Y')
      {
      var_6 = 1;
      system("CLS");
      }
     else
      {
      system("CLS");
      var_6 = 0;
      } 
    }
   else if(rule == 'W' | rule == 'w')
    {
    system("CLS");
    cout << "\t\t\tThe lone way to win the game\n\n"
         << "\tAt the bottom, right-hand opening of the gameboard is where you need to\n\texit\n"
         << "\tOnce you get to the square left of the exit simply go left and you will\n\twin the game\n"
         << "\tIf you fail to reach the exit before your time runs out you will die\n\t";
    getch();
    cout << "\n\n\tWould you like to view the game rules again?\n";
    cout << "\tEnter Y for yes or N for no\n\t";
    cin >> answer;
     if(answer == 'Y' | answer == 'Y')
      {
      var_6 = 1;
      system("CLS");
      }
     else
      {
      system("CLS");
      var_6 = 0;
      }     
    }
   else
    {
    system("CLS");
    cout << "\tSorry but there is not a help option for " << rule << "\n\t";
    getch();
    system("CLS");
    }
   
}while(var_6 == 1);
}
}

void end()
{
 
 if(bla != -1)
 {
 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6 | FOREGROUND_INTENSITY);
 num_1 = 0;
 system("CLS");
 cout << "Slowly peaking your head out the cave, you can see the dim light through the\nholes of the leaves in the massive trees."
      << "Suddenly you lunge towards the trees ina rush to get home, once you pop your head through the trees you notice your\nhouse calmly waiting for you at the bottom of the hill."
      << "  Enjoyment rushes all\nover your body; for now you know you will get home safely.";
  getch();
  getch();
  KAC = 0;
  bla = -1;
  num_1 = 0;
  ticker = -1;  
 }
 if((bla == -1) && (option != 'Q') && (option != 'q') && (KAC == 1))
 {
 system("CLS");
 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 4 | FOREGROUND_INTENSITY);
 cout << "Oh no the light!!!  Where did my precise light go!  I can't see anything in hereNoooo get off of meeeeeeee........Ahhhhhhhhhh!";
 getch();
 getch();
 }
 else
 {
 system("CLS");
 }
}
    
/*    
void map_level(char check [][12])
 {
  
    check[1][1] = X;
    check[3][1] = X;
    check[4][1] = X;
    check[5][1] = X;
    check[7][1] = X;
    check[8][1] = X;
    check[10][1] = X;
    check[1][2] = X;
    check[3][2] = X;
    check[4][2] = X;
    check[7][2] = X;
    check[8][2] = X;
    check[10][2] = X;
    check[4][3] = X;
    check[6][3] = X;
    check[7][3] = X;
    check[8][3] = X;
    check[10][3] = X;
    check[1][4] = X;
    check[2][4] = X;
    check[4][4] = X;
    check[8][4] = X;
    check[10][4] = X;
    check[6][5] = X;
    check[0][6] = X;
    check[2][6] = X;
    check[4][6] = X;
    check[5][6] = X;
    check[6][6] = X;
    check[8][6] = X;
    check[10][6] = X;
    check[0][7] = X;
    check[2][7] = X;
    check[4][7] = X;
    check[8][7] = X;
    check[10][7] = X;
    check[0][8] = X;
    check[4][8] = X;
    check[6][8] = X;
    check[7][8] = X;
    check[8][8] = X;
    check[9][8] = X;
    check[10][8] = X;
    check[2][9] = X;
    check[3][9] = X;
    check[4][9] = X;
    check[6][9] = X;
    check[10][9] = X;
    check[1][10] = X;
    check[2][10] = X;
    check[3][10] = X;
    check[4][10] = X;
    check[6][10] = X;
    check[7][10] = X;
    check[8][10] = X;
    check[9][10] = X;
    check[10][10] = X;
    check[11][10] = X;
    check[4][11] = X;
 }   
   
 */   
 

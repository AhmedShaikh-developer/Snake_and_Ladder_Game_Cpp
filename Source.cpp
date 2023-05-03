#include <iostream>//input/output stream
#include <conio.h>//library for get_ch(program wair for user untill press any key)
#include <cstdlib>//library for random number and integer arithmatics
#include <ctime>//library for random numbers
#include <string>//ibrary for string (enter names of players)
#include <windows.h>//library for color background and text color and sleep

using namespace std; //Itis use because for the cout, cin functionalities.

void board(int * arr);//function to draw the board
int roll_dice();//function to roll dice

int main() //main function
{
	int playerone_roll, playertwo_roll, playerthree_roll, playerfour_roll; //holds the rolled value for the player
	int playerone = 0, playertwo = 0, playerthree = 0, playerfour = 0;//variables declare to to holds players score
	int turn1, turn2, turn3, turn4;//declare for toss
	string player1, player2, player3, player4;//declare for enter the players names
	string playerone_alert = ""; //to alert playerone for snakes and ladders
	string playertwo_alert = ""; // to alert playertwo for snakes and ladders
	string playerthree_alert = "";//to alert playerthree for snakes and ladders
	string playerfour_alert = "";//to alert playerfour for snakes and ladders
	int input, name, option; //variables
	int arr[100];//declare array for board


	cout << "Enter 1 to play game\n";
	cout << "Enter 2 to see Credits\n";
	cout << "Enter 3 for Instructions/Rules\n";
	cout << "Enter 4 for Records\n";
	cout << "Enter 5 for Exit Game\n";
	cout << "Enter any number from 1 to 5:- \n";
	cin >> option;

	if (option == 1)
	{

		cout << "*****************************************************************************************\n";
		cout << "*****************************************************************************************\n";
		cout << "**                                                                                     **\n";
		cout << "**                         LET'S START SNAKE AND LADDER GAME                           **\n";
		cout << "**                                                                                     **\n";
		cout << "*****************************************************************************************\n";
		cout << "*****************************************************************************************\n";
		cout << "Please press any button to continue:-\n";
		_getch();
		cout << "Please Enter players Name:- " << endl;
		cout << "Enter  1st player Name:- ";
		cin >> player1;
		cout << endl;
		cout << "Enter  2nd player Name:- ";
		cin >> player2;
		cout << endl;
		cout << "Enter  3rd player Name:- ";
		cin >> player3;
		cout << endl;
		cout << "Enter  4th player Name:- ";
		cin >> player4;
		cout << endl;
		cout << "----------------------------------------turn-----------------------------------\n";
		turn1 = 1 + rand() % 4;
		cout << "turn:- " << turn1 << endl;
		if (turn1 == 1)
		{
			turn2 = 2, turn3 = 3, turn4 = 4;
			cout << player1 << " will be first" << endl;
			cout << player2 << " will be second" << endl;
			cout << player3 << " will be third" << endl;
			cout << player4 << " will be fourth" << endl;
		}

		if (turn1 == 2)
		{
			turn2 = 1, turn3 = 3, turn4 = 4;
			cout << player2 << " will be first" << endl;
			cout << player1 << " will be second" << endl;
			cout << player3 << " will be third" << endl;
			cout << player4 << " will be fourth" << endl;
		}

		if (turn1 == 3)
		{
			turn2 = 3, turn1 = 2, turn4 = 4;
			cout << player3 << " will be first" << endl;
			cout << player1 << " will be second" << endl;
			cout << player2 << " will be third" << endl;
			cout << player4 << " will be fourth" << endl;
		}
		if (turn1 == 4)
		{
			turn2 = 3, turn3 = 4, turn1 = 2;
			cout << player4 << " will be first" << endl;
			cout << player1 << " will be second" << endl;
			cout << player2 << " will be third" << endl;
			cout << player3 << " will be fourth" << endl;
		}

		cout << "SNAKES\t\tLADDERS\n99 to 45\t3 to 44\n50 to 29\t66 to 95\n63 to 37\t39 to 78\n65 to 4\t\t9 to 48\n70 to 34\t17 to 56\n\n";
		arr[0] = 0;
		for (int i = 1; i <= 100; i++) // for loop (for generate squares values in board)
		{
			arr[i] = i;
		}

		do// uding do while for repeatation
		{
			if (playerone <= 100)
			{
				cout << "Enter any number to Roll dice for player one: ";
				cin >> input;//player enter any number to rolls dice
				playerone_roll = roll_dice();//player rolls dice
				cout << playerone_roll;
				if ((playerone_roll + playerone) > 100)//if condition (if player score greater than 100 (because have max value 100) than player remain at there previous position
				{
					playerone = playerone; // player remains at thier previous position
					arr[playerone] = playerone;
				}
				else//else(otherwise)
				{
					arr[playerone] = playerone;
					playerone = playerone + playerone_roll;//move player to a new position by adding rolldice value

					if (playerone == 99)
					{
						playerone = 45;//then player goes to 45 position
						playerone_alert = "OOPS... Playerone ran into a SNAKE!";//display alert for player
						system("Color 4C");//as snake bites player screen becomes red
						Sleep(1000); //(sleep) screen becomes red for 1 second
						system("Color F");//after 1 second screen back to its normal black color
					}

					if (playerone == 50)
					{
						playerone = 29;
						playerone_alert = "OOPS... Playerone ran into a SNAKE!";
						system("Color 4C");//Red color
						Sleep(1000);
						system("Color F");//normal black color
					}

					if (playerone == 63)
					{
						playerone = 37;
						playerone_alert = "OOPS... Playerone ran into a SNAKE!";
						system("Color 4C");//Red color
						Sleep(1000);
						system("Color F");//normal black color
					}

					if (playerone == 65)
					{
						playerone = 4;
						playerone_alert = "OOPS... Playerone ran into a SNAKE!";
						system("Color 4C");//Red color
						Sleep(1000);
						system("Color F");//normal black color
					}

					if (playerone == 70)
					{
						playerone = 34;
						playerone_alert = "OOPS... Playerone ran into a SNAKE!";
						system("Color 4C");//Red color
						Sleep(1000);
						system("Color F");//normal black color
					}

					if (playerone == 3)
					{
						playerone = 44;//now player position is at 44
						playerone_alert = "Playerone climbed a ladder!";// alert for player to climbed ladder
						system("Color 2A");////as snake bites player screen becomes green
						Sleep(1000);//1 sec
						system("Color F");//normal black color
					}

					if (playerone == 66)
					{
						playerone = 95;
						playerone_alert = "Playerone climbed a ladder!";
						system("Color 2A");//Green color
						Sleep(1000);
						system("Color F");//normal black color
					}

					if (playerone == 39)
					{
						playerone = 78;
						playerone_alert = "Playerone climbed a ladder!";
						system("Color 2A");//Green color
						Sleep(1000);
						system("Color F");//normal black color
					}

					if (playerone == 9)
					{
						playerone = 48;
						playerone_alert = "Playerone climbed a ladder!";
						system("Color 2A");//Green color
						Sleep(1000);
						system("Color F");//normal black color
					}

					if (playerone == 17)
					{
						playerone = 56;
						playerone_alert = "Playerone climbed a ladder!";
						system("Color 2A");//Green color
						Sleep(1000);
						system("Color F");//normal black color
					}
				}
			}

			arr[playerone] = 111; //playerone position represented by 111
			board(arr);
			cout << "SNAKES\t\tLADDERS\n99 to 45\t3 to 44\n50 to 29\t66 to 95\n63 to 37\t39 to 78\n65 to 4\t\t9 to 48\n70 to 34\t17 to 56\n\n"; //so the player knows which is a snake and that which is ladder
			cout << " Playerone rolled " << playerone_roll << endl;
			cout << " Playerone Position: " << playerone << endl;
			cout << " Playertwo Position: " << playertwo << endl;
			cout << " Playerthree Position: " << playerthree << endl;
			cout << " Playerfour Position: " << playerfour << endl;
			cout << playerone_alert << endl;
			playerone_alert = "";

			if (playerone == playertwo && playerone != 0 && playerone != 101)
			{
				playertwo = 0;
			}
			if (playerone == playerthree && playerone != 0 && playerone != 101)
			{
				playerthree = 0;
			}
			if (playerone == playerfour && playerone != 0 && playerone != 101)
			{
				playerfour = 0;
			}

			if (playerone == 100)
			{
				cout << "Player 1 has won!";
				playerone = 101;
			}


			if (playertwo <= 100)
			{
				cout << "Enter any number to Roll dice for player two: ";
				cin >> input;
				playertwo_roll = roll_dice();//player rolls dice
				cout << playertwo_roll;

				if ((playertwo_roll + playertwo) > 100)
				{
					playertwo = playertwo;
				}
				else
				{
					arr[playertwo] = playertwo;
					playertwo = playertwo + playertwo_roll;//move player to a new position
					arr[playertwo] = playertwo;//overwrite the current position

				}


				if (playertwo == 99)
				{
					playertwo = 45;
					playertwo_alert = "OOPS... Playertwo ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playertwo == 50)
				{
					playertwo = 29;
					playertwo_alert = "OOPS... Playertwo ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playertwo == 63)
				{
					playertwo = 37;
					playertwo_alert = "OOPS... Playertwo ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playertwo == 65)
				{
					playertwo = 4;
					playertwo_alert = "OOPS... Playertwo ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playertwo == 70)
				{
					playertwo = 34;
					playertwo_alert = "OOPS... Playertwo ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playertwo == 3)
				{
					playertwo = 44;
					playertwo_alert = "Playertwo climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playertwo == 66)
				{
					playertwo = 95;
					playertwo_alert = "Playertwo climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playertwo == 39)
				{
					playertwo = 78;
					playertwo_alert = "Playertwo climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playertwo == 9)
				{
					playertwo = 48;
					playertwo_alert = "Playertwo climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playertwo == 17)
				{
					playertwo = 56;
					playertwo_alert = "Playertwo climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

			}

			arr[playertwo] = 222; //playertwo position represented by 222

			board(arr);
			cout << "SNAKES\t\tLADDERS\n99 to 45\t3 to 44\n50 to 29\t66 to 95\n63 to 37\t39 to 78\n65 to 4\t\t9 to 48\n70 to 34\t17 to 56\n\n"; //so the player knows which is a snake and that which is ladder
			cout << " Playertwo rolled " << playertwo_roll << endl;
			cout << " Playerone Position: " << playerone << endl;
			cout << " Playertwo Position: " << playertwo << endl;
			cout << " Playerthree Position: " << playerthree << endl;
			cout << " Playerfour Position: " << playerfour << endl;
			cout << playertwo_alert << endl;
			playertwo_alert = "";
			if (playertwo == playerone && playertwo != 0 && playertwo != 101)
			{
				playerone = 0;
			}
			if (playertwo == playerthree && playertwo != 0 && playertwo != 101)
			{
				playerthree = 0;
			}
			if (playertwo == playerfour && playertwo != 0 && playertwo != 101)
			{
				playerfour = 0;
			}
			if (playertwo == 100)
			{
				cout << "Player 2 has won!";
				playertwo = 101;
			}


			if (playerthree <= 100)
			{
				cout << "Enter any number to Roll dice for player three: ";
				cin >> input;
				playerthree_roll = roll_dice();//player rolls dice
				cout << playerthree_roll;
				if ((playerthree_roll + playerthree) > 100)
				{
					playerthree = playerthree;
				}
				else
				{
					arr[playerthree] = playerthree;
					playerthree = playerthree + playerthree_roll;//move player to a new position
					arr[playerthree] = playerthree;//overwrite the current position

				}

				if (playerthree == 99)
				{
					playerthree = 45;
					playerthree_alert = "OOPS... Playerthree ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerthree == 50)
				{
					playerthree = 29;
					playerthree_alert = "OOPS... Playerthree ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerthree == 63)
				{
					playerthree = 37;
					playerthree_alert = "OOPS... Playerthree ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerthree == 65)
				{
					playerthree = 4;
					playerthree_alert = "OOPS... Playerthree ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerthree == 70)
				{
					playerthree = 34;
					playerthree_alert = "OOPS... Playerthree ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerthree == 3)
				{
					playerthree = 44;
					playerthree_alert = "Playerthree climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerthree == 66)
				{
					playerthree = 95;
					playerthree_alert = "Playerthree climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerthree == 39)
				{
					playerthree = 78;
					playerthree_alert = "Playerthree climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerthree == 9)
				{
					playerthree = 48;
					playerthree_alert = "Playerthree climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerthree == 17)
				{
					playerthree = 56;
					playerthree_alert = "Playerthree climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

			}

			arr[playerthree] = 333; //playerthree position represented by 333

			board(arr);
			cout << "SNAKES\t\tLADDERS\n99 to 45\t3 to 44\n50 to 29\t66 to 95\n63 to 37\t39 to 78\n65 to 4\t\t9 to 48\n70 to 34\t17 to 56\n\n"; //so the player knows which is a snake and that which is ladder
			cout << " Playerthree rolled " << playerthree_roll << endl;
			cout << " Playerone Position: " << playerone << endl;
			cout << " Playertwo Position: " << playertwo << endl;
			cout << " Playerthree Position: " << playerthree << endl;
			cout << " Playerfour Position: " << playerfour << endl;
			cout << playerthree_alert << endl;
			playerthree_alert = "";
			if (playerthree == playerone && playerthree != 0 && playerthree != 101)
			{
				playerone = 0;
			}
			if (playerthree == playertwo && playerthree != 0 && playerthree != 101)
			{
				playertwo = 0;
			}
			if (playerthree == playerfour && playerthree != 0 && playerthree != 101)
			{
				playerfour = 0;
			}
			if (playerthree == 100)
			{
				cout << "Player 3 has won!";
				playerthree = 101;
			}

			if (playerfour <= 100)
			{
				cout << "Enter any number to Roll dice for player four: ";
				cin >> input;
				playerfour_roll = roll_dice();//player rolls dice
				cout << playerfour_roll;
				if ((playerfour_roll + playerfour) > 100)
				{
					playerfour = playerfour;
				}
				else
				{
					arr[playerfour] = playerfour;
					playerfour = playerfour + playerfour_roll;//move player to a new position

					arr[playerfour] = playerfour;//overwrite the current position

				}

				if (playerfour == 99)
				{
					playerfour = 45;
					playerfour_alert = "OOPS... Playerfour ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerfour == 50)
				{
					playerfour = 29;
					playerfour_alert = "OOPS... Playerfour ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerfour == 63)
				{
					playerfour = 37;
					playerfour_alert = "OOPS... Playerfour ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerfour == 65)
				{
					playerfour = 4;
					playerfour_alert = "OOPS... Playerfour ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerfour == 70)
				{
					playerfour = 34;
					playerfour_alert = "OOPS... Playerfour ran into a SNAKE!";
					system("Color 4C");//Red color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerfour == 3)
				{
					playerfour = 44;
					playerfour_alert = "Playerfour climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerfour == 66)
				{
					playerfour = 95;
					playerfour_alert = "Playerfour climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerfour == 39)
				{
					playerfour = 78;
					playerfour_alert = "Playerfour climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerfour == 9)
				{
					playerfour = 48;
					playerfour_alert = "Playerfour climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

				if (playerfour == 17)
				{
					playerfour = 56;
					playerfour_alert = "Playerfour climbed a ladder!";
					system("Color 2A");//Green color
					Sleep(1000);
					system("Color F");//normal black color
				}

			}

			arr[playerfour] = 444; //playerfour position represented by 444

			board(arr);
			cout << "SNAKES\t\tLADDERS\n99 to 45\t3 to 44\n50 to 29\t66 to 95\n63 to 37\t39 to 78\n65 to 4\t\t9 to 48\n70 to 34\t17 to 56\n\n"; //so the player knows which is a snake and that which is ladder
			cout << " Playerfour rolled " << playerfour_roll << endl;
			cout << " Playerone Position: " << playerone << endl;
			cout << " Playertwo Position: " << playertwo << endl;
			cout << " Playerthree Position: " << playerthree << endl;
			cout << " Playerfour Position: " << playerfour << endl;
			cout << playerfour_alert << endl;
			playerfour_alert = "";
			if (playerfour == playerone && playerfour != 0 && playerfour != 100)
			{
				playerone = 0;
			}
			if (playerfour == playertwo && playerfour != 0 && playerfour != 100)
			{
				playertwo = 0;
			}
			if (playerfour == playerthree && playerfour != 0 && playerfour != 100)
			{
				playerthree = 0;
			}
			if (playerfour == 100)
			{
				cout << "Player 4 has won!";
				playerfour = 101;
			}
		}

		while (playerone != 101 || playertwo != 101 || playerthree != 101 || playerfour != 101);
		if (playerone == 101 && playertwo == 101 && playerthree == 101 && playerfour == 101)
		{
			cout << "Game is finished";
		}
		return 0;
	}

	if (option == 2)
	{
		cout << "------------------------------------CREDITS OF THE SNAKE AND LADDER GAME-------------------------------------\n";
		cout << "                                                                                               \n";
		cout << "*******************************************************************\n";
		cout << "*******************************************************************\n";
		cout << "**                                                               **\n";
		cout << "**         This Game is Created by MR. MUHAMMAD AHMED            **\n";
		cout << "**         Roll No: 20F-1064                                     **\n";
		cout << "**         C++ Programmer                                        **\n";
		cout << "**         Department: BS (SOFTWARE ENGINEERING)                 **\n";
		cout << "**         FAST National University of Science and Technology    **\n";
		cout << "**                                                               **\n";
		cout << "*******************************************************************\n";
		cout << "*******************************************************************\n";
	}

	if (option == 3)
	{
		cout << "-----------------------------------INSTRUCTION OF THE GAME----------------------------------------\n";
		cout << "                                                                     \n";
		cout << "1. Firstly, show a menu on console then you have to select any one option from it.\n";
		cout << "2.	For game, enter the names of any 4 players.";
		cout << "3.	Then random number generate for toss and then shows the turns of players.\n";
		cout << "4.	Then you have to enter any number to roll a dice for player 1.\n";
		cout << "5.	Then again you have to enter any number to roll a dice for player 2 and so on.\n";
		cout << "6.	If screen color becomes red than it show that snake bite a player.\n";
		cout << "7.	If screen color becomes green than it show that player climbed a ladder.\n";
		cout << "8.	Snakes and ladders positions shows in every turn.\n";
		cout << "9.	If any player get any number from 1 to 6 then player score show on board and also in written form.\n";
		cout << "10. Suppose that if player1 position is 10 then other player2 is now on position 10 then position of player1 becomes zero.\n";
		cout << "11. If any player reaches at score 100 then player wins the game.\n";
		cout << "12. Game is on, until all player wins.\n";
		cout << "13. If you select 2 from above menu then in this option you see credits.\n";
		cout << "14. If you select 3 from above menu then in this option you see instructions / rules.\n";
		cout << "15. If you select 4 from above menu then you see record of the game.\n";
		cout << "16. If you select 5 from above menu then the game is exit.\n";
	}

	if (option == 4)
	{
		cout << "------------------------------------RECORD OF THE GAME--------------------------------------\n";
		fstream game_file;
		game_file.open("game.txt", ios::app);//new_file.open("new_file_write.txt",ios::out);  
		game_file.close();
	}
	
	if (option == 5)
	{
		cout << "You Exit the Game\n";
	}

}


void board(int * arr)//function for the board
{
	cout << "____________________________________________________________________" << endl;
	cout << " | " << arr[100] << " |  ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); cout << arr[99];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "  |  " << arr[98] << "  |  " << arr[97] << "  |  " << arr[96] << "  |  " << arr[95] << "  |  " << arr[94] << "  |  " << arr[93] << "  |  " << arr[92] << "  |  " << arr[91] << "|  " << endl;
	cout << "____________________________________________________________________" << endl;
	cout << " | " << arr[81] << "  |  " << arr[82] << "  |  " << arr[83] << "  |  " << arr[84] << "  |  " << arr[85] << "  |  " << arr[86] << "  |  " << arr[87] << "  |  " << arr[88] << "  |  " << arr[89] << "  |  " << arr[90] << "|  " << endl;
	cout << "____________________________________________________________________" << endl;
	cout << " | " << arr[80] << "  |  " << arr[79] << "  |  " << arr[78] << "  |  " << arr[77] << "  |  " << arr[76] << "  |  " << arr[75] << "  |  " << arr[74] << "  |  " << arr[73] << "  |  " << arr[72] << "  |  " << arr[71] << "|  " << endl;
	cout << "____________________________________________________________________" << endl;
	cout << " | " << arr[61] << "  |  " << arr[62] << "  |  ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); cout << arr[63];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "  |  " << arr[64] << "  |  ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); cout << arr[65];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "  |  ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); cout << arr[66];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "  |  " << arr[67] << "  |  " << arr[68] << "  |  " << arr[69] << "  |  ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); cout << arr[70];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "|  " << endl;
	cout << "____________________________________________________________________" << endl;
	cout << " | " << arr[60] << "  |  " << arr[59] << "  |  " << arr[58] << "  |  " << arr[57] << "  |  " << arr[56] << "  |  " << arr[55] << "  |  " << arr[54] << "  |  " << arr[53] << "  |  " << arr[52] << "  |  " << arr[51] << "|  " << endl;
	cout << "____________________________________________________________________" << endl;
	cout << " | " << arr[41] << "  |  " << arr[42] << "  |  " << arr[43] << "  |  " << arr[44] << "  |  " << arr[45] << "  |  " << arr[46] << "  |  " << arr[47] << "  |  " << arr[48] << "  |  " << arr[49] << "  |  ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); cout << arr[50];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "|  " << endl;
	cout << "____________________________________________________________________" << endl;
	cout << " | " << arr[40] << "  |  ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); cout << arr[39];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "  |  " << arr[38] << "  |  " << arr[37] << "  |  " << arr[36] << "  |  " << arr[35] << "  |  " << arr[34] << "  |  " << arr[33] << "  |  " << arr[32] << "  |  " << arr[31] << "|  " << endl;
	cout << "____________________________________________________________________" << endl;
	cout << " | " << arr[21] << "  |  " << arr[22] << "  |  " << arr[23] << "  |  " << arr[24] << "  |  " << arr[25] << "  |  " << arr[26] << "  |  " << arr[27] << "  |  " << arr[28] << "  |  " << arr[29] << "  |  " << arr[30] << "|  " << endl;
	cout << "____________________________________________________________________" << endl;
	cout << " | " << arr[20] << "  |  " << arr[19] << "  |  " << arr[18] << "  |  ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); cout << arr[17];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "  |  " << arr[16] << "  |  " << arr[15] << "  |  " << arr[14] << "  |  " << arr[13] << "  |  " << arr[12] << "  |  " << arr[11] << "|  " << endl;
	cout << "____________________________________________________________________" << endl;
	cout << " | " << arr[1] << "   |  " << arr[2] << "   |  ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); cout << arr[3];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "   |  " << arr[4] << "   |  " << arr[5] << "   |  " << arr[6] << "   |  " << arr[7] << "   |  " << arr[8] << "   |  ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); cout << arr[9];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "   |  " << arr[10] << "|  " << endl;
	cout << "____________________________________________________________________" << endl;

}

int roll_dice()//define the dice rolling mechanism
{
	return rand() % 6 + 1;//can only roll 1 - 6
}







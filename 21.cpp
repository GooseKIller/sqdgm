﻿#include <iostream>
#include <ctime>

using namespace std;


int choise(int you,int tout) {
	srand(time(NULL));
	int card;
	switch (you)
	{
	case 0:
		tout = tout;
		return tout;
		break;
	case 1:
		card = rand() % 10 + 6;
		tout = tout + card;
		return tout;
		break;
	default:
		cout << "wrong command";
		break;
	}
}
int main()
{   
	cout << "21 GAME\n\ngame rules:\n 1-take a card\n 0-don`t take a card\n\n";
    srand(time(NULL));
    int you = 0,youint,ai=0,round=0,airand=0;
	while (ai<=21 || you<=21)
	{	
		if (round == 4) {
				break;
		}
		cout << "ROUND:" << round + 1 << "/4\n\n";
		cout << "YOU:"; cin >> youint;
		you=choise(youint, you);
		cout <<"YOU:" << you<<"\n";
		airand = rand() % 2;
		cout << "COMPUTER:"<<airand<< "\n";
		ai = choise(airand, ai);
		cout << "COMPUTER:" << ai<<"\n";
		round++;
		cout << endl;
	}
	if (ai > you && ai<=21 || you>21 && ai<=21) {
		cout << "COMPUTER Win!!";
	}
	else if (ai==you)
	{
		cout << "COMPUTER and YOU Win!!";
	}
	else if(you>ai && you<=21 || ai>21  && you<=21){
		cout << "YOU Win!!";
	}
}
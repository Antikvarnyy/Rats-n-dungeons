#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;

bool CheckingNumbers(const string& s) {
	bool b = true;
	for (auto& a : s) {
		if (!isdigit(a)) {
			b = false;
			break;
		}
	}
	return b;
}

class Game {
	double gold;
	int weapon;
	int weap_dm;
	double damage;
	double exp;
	double exp_lvl;
	int lvl;
	int battles;

public:

	Game() {
		gold = 300;
		weapon = 1;
		weap_dm = 4;
		lvl = 1;
		damage = weap_dm + weap_dm * (lvl - 1) * 0.1;
		exp = 0;
		exp_lvl = 100;
		battles = 0;
	}

	void Static() {
		cout << "\t\t\t\t\t\t  Statistic\n";
		cout << "\t\t\t\t\t============================\n";
		cout << "\t\t\t\t\t      Gold - " << gold << "\n";
		cout << "\t\t\t\t\t      Weapon - ";
		switch (weapon)
		{
		case 1:
			cout << "Short knife\n";
			break;		
		case 2:
			cout << "Low quality sword\n";
			break;
		case 3:
			cout << "Two-handed sword\n";
			break;
		case 4:
			cout << "High quality sword and shield\n";
			break;
		case 5:
			cout << "Lond bow\n";
			break;
		case 6:
			cout << "Iron сrossbow\n";
			break;
		case 7:
			cout << "Dwarven сrossbow\n";
			break;
		case 8:
			cout << "Low grade Firestaff\n";
			break;
		case 9:
			cout << "Journeyman's Flame Staff\n";
			break;
		case 10:
			cout << "Staff of the Elements\n";
			break;
		case 11:
			cout << "Master Staff of the Elements\n";
			break;
		case 12:
			cout << "Mjolnir\n";
			break;
		case 13:
			cout << "Thunderaxe\n";
			break;
		case 14:
			cout << "Infinity Gauntlet\n";
			break;
		case 15:
			cout << "Golden egg\n";
			break;
		}
		cout << "\t\t\t\t\t      Damage - " << damage << "\n";
		cout << "\t\t\t\t\t      Level - " << lvl << "\n";
		cout << "\t\t\t\t\t      Experiense - " << exp<<"/"<<exp_lvl << "\n";
		cout << "\t\t\t\t\t      Battles done - " << battles << "\n";
	}

	void Finish() {
		system("cls");
		cout << "\t\t\t\t\tCongratulations, you have completed the game!\n\t\t\t\t Please do not judge strictly, this is just a test of the pen))\n";
		system("pause");
	}

	void Shop() {
		char ch;
		string s;
		int t, flag = 0;
		cout << "\t\t\t\t\t\t  Shop\n";
		cout << "\t\t\t\t\t      Your Gold - " << gold << "\n";
		cout << "\t\t\t\t\t=============================\n";
		if (weapon < 2)
		cout << "\t\t\t\t\t1 - Low quality sword - 500\n";
		if (weapon < 3)
		cout << "\t\t\t\t\t2 - Two-handed sword - 900\n";
		if (weapon < 4)
		cout << "\t\t\t\t\t3 - High quality sword and shield - 1500\n";
		if (weapon < 5)
		cout << "\t\t\t\t\t4 - Lond bow - 2500\n";
		if (weapon < 6)
		cout << "\t\t\t\t\t5 - Iron crossbow - 4000\n";
		if (weapon < 7)
		cout << "\t\t\t\t\t6 - Dwarven crossbow - 6000\n";
		if (weapon < 8)
		cout << "\t\t\t\t\t7 - Low grade Firestaff - 8500\n";
		if (weapon < 9)
		cout << "\t\t\t\t\t8 - Journeyman's Flame Staff - 11K\n";	
		if (weapon < 10)
		cout << "\t\t\t\t\t9 - Staff of the Elements - 20K\n";
		if (weapon < 11)
		cout << "\t\t\t\t\t10 - Master Staff of the Elements - 45K\n";
		if (weapon < 12)
		cout << "\t\t\t\t\t11 - Mjolnir - 100K\n";
		if (weapon < 13)
		cout << "\t\t\t\t\t12 - Thunderaxe - 250K\n";
		if (weapon < 14)
		cout << "\t\t\t\t\t13 - Infinity Gauntlet - 500K\n";
		cout << "\t\t\t\t\t14 - Golden egg - 2KK(Goal of the game)\n";
		do {
			cout << "\t\t\t\t\t=============================\n";
			cout << "\t\t\t\t\tWant to buy something?(Y/N):\n";
			ch = _getch();
			if (ch == 'Y' || ch == 'y') {
				do {
					cout << "\t\t\t\t\tType a number of desired weapon: ";
					cin >> s;
					flag = 0;
					if (CheckingNumbers(s)) {
						t = stoi(s);
						if (t < weapon || t > 15) {
							cout << "\t\t\t\t\tWrong number.Try again\n";
							flag++;
						}
					}
					else {
						cout << "\t\t\t\t\tWrong number.Try again\n";
						flag++;
					}

				} while (!CheckingNumbers(s) || flag != 0);

				if (t == 1 && gold < 500) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 2 && gold < 900) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 3 && gold < 1500) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 4 && gold < 2500) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 5 && gold < 4000) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 6 && gold < 6000) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 7 && gold < 8500) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 8 && gold < 11000) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 9 && gold < 20000) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 10 && gold < 45000) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 11 && gold < 100000) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 12 && gold < 250000) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 13 && gold < 500000) {
					cout << "\t\t\t\t\tOut of money\n";
				}
				if (t == 14 && gold < 2000000) {
					cout << "\t\t\t\t\tOut of money\n";
				}

				if (t == 1 && gold >= 500) {
					cout << "\t\t\t\t\tYou bought low quality sword.\n";
					weapon = 2;
					weap_dm = 9;
					gold -= 500;
				}
				if (t == 2 && gold >= 900) {
					cout << "\t\t\t\t\tYou bought two-handed sword.\n";
					weapon = 3;
					weap_dm = 17;
					gold -= 900;
				}
				if (t == 3 && gold >= 1500) {
					cout << "\t\t\t\t\tYou bought high quality sword and shield.\n";
					weapon = 4;
					weap_dm = 30;
					gold -= 1500;
				}
				if (t == 4 && gold >= 2500) {
					cout << "\t\t\t\t\tYou bought lond bow.\n";
					weapon = 5;
					weap_dm = 45;
					gold -= 2500;
				}
				if (t == 5 && gold >= 4000) {
					cout << "\t\t\t\t\tYou bought iron crossbow.\n";
					weapon = 6;
					weap_dm = 100;
					gold -= 4000;
				}
				if (t == 6 && gold >= 6000) {
					cout << "\t\t\t\t\tYou bought dwarven crossbow.\n";
					weapon = 7;
					weap_dm = 350;
					gold -= 6000;
				}
				if (t == 7 && gold >= 8500) {
					cout << "\t\t\t\t\tYou bought low grade firestaff.\n";
					weapon = 8;
					weap_dm = 800;
					gold -= 8500;
				}
				if (t == 8 && gold >= 11000) {
					cout << "\t\t\t\t\tYou bought journeyman's flame staff.\n";
					weapon = 9;
					weap_dm = 1600;
					gold -= 11000;
				}
				if (t == 9 && gold >= 20000) {
					cout << "\t\t\t\t\tYou bought staff of the elements.\n";
					weapon = 10;
					weap_dm = 2000;
					gold -= 20000;
				}
				if (t == 10 && gold >= 45000) {
					cout << "\t\t\t\t\tYou bought master staff of the elements.\n";
					weapon = 11;
					weap_dm = 2500;
					gold -= 45000;
				}
				if (t == 11 && gold >= 100000) {
					cout << "\t\t\t\t\tYou bought Mjolnir.\n";
					weapon = 12;
					weap_dm = 3750;
					gold -= 100000;
				}
				if (t == 12 && gold >= 250000) {
					cout << "\t\t\t\t\tYou bought Thunderaxe.\n";
					weapon = 13;
					weap_dm = 4000;
					gold -= 250000;
				}
				if (t == 13 && gold >= 500000) {
					cout << "\t\t\t\t\tYou bought Infinity Gauntlet.\n";
					weapon = 14;
					weap_dm = 10000;
					gold -= 500000;
				}
				if (t == 14 && gold >= 2000000) {
					cout << "\t\t\t\t\tYou bought Golden egg.\n";
					weapon = 15;
					weap_dm = 2147483640;
					gold -= 2000000;
				}

				damage = weap_dm + weap_dm * (lvl - 1) * 0.1;
			}
		}while (ch != 'Y' && ch != 'N' && ch != 'y' && ch != 'n');
		if(ch!='N'&&ch!='n')
		system("pause");
		if (weapon == 15)
			Finish();
	}

	void Battle() {
		cout << "\t\t\t\t\t\t  Battle\n";
		cout << "\t\t\t\t\t=============================\n";
		int r = 1 + rand() % 5, monster_str = 1 + rand()%100;
		double chance;
		char ch,ch1;		
		do {
			cout << "\t\t\t\t\tChoose an opponent:\n\t\t\t\t\t    1 - Weak\n\t\t\t\t\t    2 - Worthy\n\t\t\t\t\t    3 - Strong\n";
			ch = _getch();
		} while (ch != '1' && ch != '2' && ch != '3');
		if (ch == '1' && r == 1) {
			cout << "\t\t\t\t\tYour opponent is a Spyder!\n";
		}
		if (ch == '1' && r == 2) {
			cout << "\t\t\t\t\tYour opponent is a Rat!\n";
		}
		if (ch == '1' && r == 3) {
			cout << "\t\t\t\t\tYour opponent is a Goblin-robber!\n";
		}
		if (ch == '1' && r == 4) {
			cout << "\t\t\t\t\tYour opponent is a Satir!\n";
		}
		if (ch == '1' && r == 5) {
			cout << "\t\t\t\t\tYour opponent is a Skeleton!\n";
		}

		if (ch == '2' && r == 1) {
			cout << "\t\t\t\t\tYour opponent is a Centaur!\n";
		}
		if (ch == '2' && r == 2) {
			cout << "\t\t\t\t\tYour opponent is a Bandit!\n";
		}
		if (ch == '2' && r == 3) {
			cout << "\t\t\t\t\tYour opponent is a Zombie!\n";
		}
		if (ch == '2' && r == 4) {
			cout << "\t\t\t\t\tYour opponent is a Imp!\n";
		}
		if (ch == '2' && r == 5) {
			cout << "\t\t\t\t\tYour opponent is a Goblin-archer!\n";
		}

		if (ch == '3' && r == 1) {
			cout << "\t\t\t\t\tYour opponent is a Titan!\n";
		}
		if (ch == '3' && r == 2) {
			cout << "\t\t\t\t\tYour opponent is a Alien!\n";
		}
		if (ch == '3' && r == 3) {
			cout << "\t\t\t\t\tYour opponent is a Ghost!\n";
		}
		if (ch == '3' && r == 4) {
			cout << "\t\t\t\t\tYour opponent is a Demon!\n";
		}
		if (ch == '3' && r == 5) {
			cout << "\t\t\t\t\tYour opponent is a Goblin-warrior!\n";
		}

		if (ch == '1') {
			chance = 60 + rand() % 40;
		}
		if (ch == '2') {
			chance = 45 + rand() % 31;
		}
		if (ch == '3') {
			chance = 10 + rand() % 31;
		}
		cout << "\t\t\t\t\t   Chance to win - " << chance<<"%\n";
		cout << "\t\t\t\t\t=============================\n";
		do {
		cout << "\t\t\t\t\t   Go battle?(Y/N)\n";	
		ch1 = _getch();
			if (ch1 == 'Y' || ch1 == 'y') {
				double mult = 1 + rand() % 5;
				damage = weap_dm + weap_dm * (lvl - 1) * 0.1;
				if (monster_str <= chance) {
					double erned_exp = 0;
					double erned_gold = 0;
					cout << "\t\t\t\t\t=============================\n";
					cout << "\t\t\t\t\t   You win!!!\n";
					battles++;				
					if (ch == '1') {
						erned_exp = 5 * damage * mult;
						erned_gold = 50 * damage * mult;
					}
					if (ch == '2') {
						erned_exp = 10 * damage * mult;
						erned_gold = 75 * damage * mult;
					}
					if (ch == '3') {
						erned_exp = 20 * damage * mult;
						erned_gold = 150 * damage * mult;
					}
					gold += erned_gold;
					exp += erned_exp;
					while (exp >= exp_lvl) {
						exp -= exp_lvl;
						exp_lvl += exp_lvl / 5;
						lvl++;
						cout << "\t\t\t\t\tYou just level-upped!(+10% to dmg)\n";
						damage = weap_dm + weap_dm * (lvl - 1) * 0.1;
					}
					cout << "\t\t\t\t\t     Erned exp - " << erned_exp << "\n";
					cout << "\t\t\t\t\t     Erned gold - "<<erned_gold<<"\n";
				}
				else {
					cout << "\t\t\t\t\t=============================\n";
					cout << "\t\t\t\t\t   You lose!!!\n";
					if (weapon != 15) {
						double losed_exp = 5 * damage * mult;
						cout << "\t\t\t\t\t     Losed exp - " << losed_exp << "\n";
						exp -= losed_exp;
					}
					else {
						cout << "\t\t\t\t\tBut I don't lose experience, I'm invincible!!!\n";
					}
				}
			}
		} while (ch1 != 'Y' && ch1 != 'N' && ch1 != 'y' && ch1 != 'n');

	}

	void Save1() {
		ofstream file("Rat`s n` dungeons1.txt");
		if (file.is_open()) {
			file << gold << "\n" << weapon << "\n" << weap_dm << "\n" << damage << "\n" << exp << "\n" << exp_lvl << "\n" << lvl << "\n" << battles;
			file.close();
			cout << "\t\t\t\t\t\t  Saved!\n";
		}
	}
	void Save2() {
		ofstream file("Rat`s n` dungeons2.txt");
		if (file.is_open()) {
			file << gold << "\n" << weapon << "\n" << weap_dm << "\n" << damage << "\n" << exp << "\n" << exp_lvl << "\n" << lvl << "\n" << battles;
			file.close();
			cout << "\t\t\t\t\t\t  Saved!\n";
		}
	}
	void Save3() {
		ofstream file("Rat`s n` dungeons3.txt");
		if (file.is_open()) {
			file << gold << "\n" << weapon << "\n" << weap_dm << "\n" << damage << "\n" << exp << "\n" << exp_lvl << "\n" << lvl << "\n" << battles;
			file.close();
			cout << "\t\t\t\t\t\t  Saved!\n";
		}
	}
	void Load1() {
		ifstream file("Rat`s n` dungeons1.txt");
		file >> gold;
		file >> weapon;
		file >> weap_dm;
		file >> damage;
		file >> exp;
		file >> exp_lvl;
		file >> lvl;
		file >> battles;
	}
	void Load2() {
		ifstream file("Rat`s n` dungeons2.txt");
		file >> gold;
		file >> weapon;
		file >> weap_dm;
		file >> damage;
		file >> exp;
		file >> exp_lvl;
		file >> lvl;
		file >> battles;
	}
	void Load3() {
		ifstream file("Rat`s n` dungeons3.txt");
		file >> gold;
		file >> weapon;
		file >> weap_dm;
		file >> damage;
		file >> exp;
		file >> exp_lvl;
		file >> lvl;
		file >> battles;
	}
};

int main()
{
	srand(time(0));
	Game g;
	char ch,ch1;
	do {
		system("cls");
		cout << "\t\t\t\t\t\tMain menu\n";
		cout << "\t\t\t\t\t============================\n";
		cout << "\t\t\t\t\t      1 - Statistic\n";
		cout << "\t\t\t\t\t\t2 - Shop\n";
		cout << "\t\t\t\t\t      3 - Go battle\n";
		cout << "\t\t\t\t\t\t4 - Save\n";
		cout << "\t\t\t\t\t\t5 - Load\n";
		cout << "\t\t\t\t\t       Esc - Exit\n";
		ch = _getch();
		switch (ch)
		{
		case '1':
			system("cls");
			g.Static();
			system("pause");
			break;
		case '2':
			system("cls");
			g.Shop();
			break;
		case '3':
			system("cls");
			g.Battle();
			system("pause");
			break;
		case '4':
			do {
				system("cls");
				cout << "\t\t\t\t    What is the slot for saving the game?\n";
				cout << "\t\t\t\t\t============================\n";
				cout<<"\t\t\t\t\t\t1 Slot\n\t\t\t\t\t\t2 Slot\n\t\t\t\t\t\t3 Slot\n";
				ch1 = _getch();
			} while (ch1 != '1' && ch1 != '2' && ch1 != '3');
			switch (ch1)
			{
			case'1':
				g.Save1();
				break;
			case'2':
				g.Save2();
				break;
			case'3':
				g.Save3();
				break;
			}
			system("pause");
			break;
		case '5':
			do {
				system("cls");
				cout << "\t\t\t\t    What is the slot for loading the game?\n";
				cout << "\t\t\t\t\t============================\n";
				cout << "\t\t\t\t\t\t1 Slot\n\t\t\t\t\t\t2 Slot\n\t\t\t\t\t\t3 Slot\n";
				ch1 = _getch();
			} while (ch1 != '1' && ch1 != '2' && ch1 != '3');
			switch (ch1)
			{
			case'1':
				g.Load1();
				break;
			case'2':
				g.Load2();
				break;
			case'3':
				g.Load3();
				break;
			}
		}
	} while (ch != 27);
}
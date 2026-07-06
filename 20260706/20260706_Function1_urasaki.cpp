#include<iostream>

using namespace std;
const int MAXHP_NUMBER = 100;

const int HEAL_NUMBER = 20;
int Heal(int life)
{
	

	int han;

	while (true)
	{
		cin >> han;
		if (han != 1 && han != 2)
		{
			cin >> han;
		}
		else
		{
			break;
		}
	}
	while (life > MAXHP_NUMBER)
	{
		
		if (han == 1)
		{
			cout << "Yes:HP‚ð‚Q‚O‰ñ•œ‚³‚¹‚Ü‚·" << endl;
			life += HEAL_NUMBER;
		}
		else if (han == 2)
		{
			cout << "No:HP‚ð‰ñ•œ‚³‚¹‚Ü‚¹‚ñ" << endl;

		}
		cout << "Œ»Ý‚ÌHP‚Í" << life << "‚Å‚·" << endl;

	}

	return life;
}
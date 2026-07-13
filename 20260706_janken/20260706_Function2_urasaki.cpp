#include<iostream>
#include<ctime>
#include<cstdlib>
#include"20260706_Header2_urasaki.h"
using namespace std;

int InputCheck(int min, int max)
{
	int playerhand;
	int enemyhand;
	srand((unsigned int)time(NULL));

	cout << "CPUとじゃんけんを行いましょう。出す手の選択は、「ぐー：0」「ちょき：1」「ぱー：2」とします。\n"
		<<"じゃんけんに勝利すると経験値を獲得します。\n"
		<<"経験値が一定値に達するとレベルアップします。\n"
		<< "レベル5になるとゲームクリアです。\n"
		<< "出す手を入力してください。";
	// プレイヤーの手を入力
	cin >> playerhand;

	while (true)
	{
		// プレイヤーの手のチェック
		if (playerhand < min || playerhand > max)
		{
			//再入力
			cout << "入力値が不正です。もう一度入力してください。\n";
			cin >> playerhand;
		}
		else
		{
			break;
		}
	}

	while (true)
	{
		// 敵の手をランダムに生成
		enemyhand = rand() % 3;
		if(enemyhand < min || enemyhand > max)
		{
			//再生成
			enemyhand = rand() % 3;
		}
		else
		{
			break;
		}
	}

	return playerhand , enemyhand;
}

int Hantei(int player, int enemy, int exp)
{
	//判定
	if (player == enemy)
	{
		cout << "あいこです。\n";
	}
	else if ((player == 0 && enemy == 1) || (player == 1 && enemy == 2) || (player == 2 && enemy == 0))
	{
		cout << "あなたの勝ちです。\n";
		//経験値のランダム加算
		exp += rand() % 15 + 1;
	}
	else
	{
		cout << "あなたの負けです。\n";
		//経験値のランダム減算
		exp -= rand() % 15 + 1;
	}

	return exp;
}

	int LevelUp(int ex, int leve)
	{
		if (leve < MAX_LEVEL && ex >= LEVEL_UP_EXP[leve])
		{
			cout << "レベルアップしました！\n";
			leve += 1;
		}

		return leve;
	}
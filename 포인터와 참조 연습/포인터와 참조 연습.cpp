#include<iostream>
using namespace std;
class Monster {
public:
	int HP = 100;
	int Damage = 20;
	char* name = "주황 버섯";
};
struct Player {
	int HP = 100;
	int Damage = 20;
	char* name = "엔젤릭버스터";
};
int main() {
	Player player;
	Player* player2 = new Player;
	player2->Damage = 10;

	Monster monster;
	monster.Damage = 50;

	Monster* monster2 = new Monster();
	monster2->HP = 90;
	cout << player.name <<"의 데미지:" << player.Damage<<endl;
	cout << "플레이어2의 데미지:" << player2->Damage << endl;
	cout << monster.name <<"의 데미지:" << monster.Damage << endl;
	cout << "몬스터의 체력:" << monster2->HP << endl;
}
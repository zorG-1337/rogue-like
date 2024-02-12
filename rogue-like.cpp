#include <iostream>
#include <string>
using namespace std;

struct characterinfo
{
	string character_name; //Имя персонажа. 
	int stratt[2] = {0}; //Сила (0), бонус силы (1) 
	int staatt[2]=	 {0};//Выносливость (0), бонус выносливости (1) 
	int	dexatt[2] = {0};//Ловкость (0), бонус ловкости (1) 
	int	aglatt[2] = { 0 };  //Проворство (0), бонус проворства (1) 
	int	intatt[2] = { 0 };  //Интеллект (0), бонус интеллекта (1) 
	int	currhp;    //Текущее здоровье
	int	maxhp;    //Максимальное здоровье
	int	ucfsk[2] = { 0 };   //Рукопашный бой (0), бонус рукопашного боя (1) 
	int	acfsk[2] = { 0 };   //Оружие ближнего боя 0), бонус оружия бл.боя (1) 
	int	pcfsk[2] = { 0 };   //Дистанционное оружие (0), бонус дист. оружия (1) 
	int	mcfsk[2] = { 0 };   //Магическая атака (0), бонус маг. атаки (1) 
	int	cdfsk[2] = { 0 };   //Защита (0), бонус защиты (1) 
	int	mdfsk[2] = { 0 };   //Магическая защита (0), бонус маг. защиты (1) 
	int	currxp;     //Текущий, расходуемый опыт. 
	int	totxp;      //Общая сумма опыта, за время жизни персонажа.
	int currgold;   //Текущее количество золота. 
	int totgold;    //Общая сумма золота за время жизни персонажа. 
	int locx;//Текущая x координата персонажа на карте. 
	int locy;//Текущая y координата персонажа на карте. 
};


class character
{
public:
	character();
	void PrintStats();
	int GenerateCharacter();
	~character();
private:
	characterinfo _cinfo;
};

character::character()
{
}

void character::PrintStats()
{

}

int character::GenerateCharacter()
{
	bool done = false;
	do {
		cout << "Enter your character's name (40 chars max):";
		cin >> _cinfo.character_name;
		if ((_cinfo.character_name).length() <= 40 && (_cinfo.character_name).length() > 0)
			done = true;
		else
			cout << "NONONO";
	} while (done != true);
	return 1;
	
}

character::~character()
{
}
int main()
{
	character boba;
	boba.GenerateCharacter();
	return 0;
}
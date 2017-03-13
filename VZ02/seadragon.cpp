#include <string>
#include <iostream>
#include "seadragon.h"
using namespace std;
/** @brief Constructor
  */
SeaDragon::SeaDragon()
{
	Type = new int[3];
	int i;
	for(i=0;i<3;i++)
	{
		Type[i]=0;
	}
	EnemyChar = new char[5];
	Species = "Aquila chrysaetos";
	Experience = "screeech!";
	Berat = 60;
	AniChar = 'j';
	Famili = "Accipitridae";
	JenisMakanan = 2;
	Type[1] = 1;
	TopEnemy = 0;
	SetEnemy('Y');
	SetEnemy('X');
}
/** @brief Destructor
  */
SeaDragon::~SeaDragon()
{
	delete [] Type;
	delete [] EnemyChar;
}
/** @brief Komunikasi dengan hewan
  */
void SeaDragon::GetExperience()
{
	cout << "Hewan ini tinggal di : ";
	if (Type[0]==1) cout << "darat ";
	if (Type[1]==1) cout << "udara ";
	if (Type[2]==1) cout << "air ";
	cout << endl;
	cout << "Hewan ini tergabung di famili "<< Famili << "dan dengan nama spesies "<< Species << endl;
	cout << Experience << endl;
}
/** @brief Jumlah makanan
  *	@return Jumlah makanan
  */
int SeaDragon::GetFoodNum()
{
	return (Berat * 0.2);
}

/** @brief Print karakter
	*	@return char
	*/
char SeaDragon::GetRender()
{
	return (AniChar);
}

/** @brief Set karakter hewan
	*	@param cc Karakter hewan tsb
	*/
void SeaDragon::SetEnemy(char cc)
{
	EnemyChar[TopEnemy] = cc;
	TopEnemy++;
}

/** @brief Ambil list musuh
	*	@return List Musuh
	*/
char* SeaDragon::GetEnemy()
{
	return EnemyChar;
}

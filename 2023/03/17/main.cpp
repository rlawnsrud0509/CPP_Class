//main.cpp
#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN		=20,
		MAX_SPD		=200,
		FUEL_STEP	=2,
		ACC_STEP	=10,
		BRK_STEP	=10
	};
}

class Car
{
private:
	char gamerID[20];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(char * ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

 void Car::InitMembers (char * ID, int fuel) {
    strcpy(gamerID, ID);
    fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState () {
    cout<<"소유자 ID: "<<gamerID<<endl;
    cout<<"연료량"<<fuelGauge<<"%"<<endl;
    cout<<"현재속도"<<curSpeed<<"km/s"<<endl;
}

void Car::Accel () {
    curSpeed+=10;
    fuelGauge-=2;
}

void Car::Break () {
    curSpeed-=10;
}

int main(void)
{
	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}
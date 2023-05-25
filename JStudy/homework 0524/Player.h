#pragma once
class Player
{
public:
	void StatusRender();


	void DamagePrint(const char* const _AttName, int _Att);

	void Damage(int _Att);

	const char* GetName();

	int GetAtt();


	bool IsDeath();



private:
	// 캡슐화
	char Name[40] = "Player";
	int Att = 10;
	int Hp = 100;
};



int StringCount(const char* _Arr)
{
	// 위쪽 예제코드를 참고하세요
	int ChCount = 0;
	while (_Arr[ChCount])
	{
		++ChCount;
	}

	return ChCount;
}
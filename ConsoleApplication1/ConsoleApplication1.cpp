#include <iostream>

wchar_t map[5][5] = {};
wchar_t player = '★';

int main()
{
for (size_t y = 0; y < 5; y++)
{
	for (size_t x = 0; x < 5; x++)
	{
		map[y][x] = 'a';
	}
}
map[2][2] = player;
	
for (size_t y = 0; y < 5; y++)
{
	for (size_t x = 0; x < 5; x++)
	{
		std::cout << (wchar_t)(map[y][x]);
	}
	std::cout << "\n";
}
}
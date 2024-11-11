#include "circle.hpp"
int main()
{
	NamedCircle pizza[5];
	int radius, max;
	string name;

	cout << " 5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " >> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	max = pizza[0].getRadius();
	int count;
	for (int i = 0; i < 5; i++)
	{
		if (max < pizza[i].getRadius())
		{
			max = pizza[i].getRadius();
			count = i;
		}
	}

	cout << "가장 면적이 큰 피자는 " << pizza[count].getName()<<endl;

}
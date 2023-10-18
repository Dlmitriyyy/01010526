#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");
	int seconds, seconds_after, minutes, minutes_after, hours, hours_after, seconds_to_zero, minutes_to_zero, hours_to_zero;
	cout << "Введіть час у секундах, що минули з початку доби (з 00:00)" << endl;
	cin >> seconds;

	if (seconds < 0)
	{
		cout << "Ви ввели невірну кількість секунд.";
	}
	else
	{
		seconds_after = seconds % 60;
		minutes = seconds / 60;
		minutes_after = minutes % 60;
		hours = seconds / 3600;
		hours_after = hours % 24;

		seconds_to_zero = 60 - seconds_after;
		minutes_to_zero = 59 - minutes_after;
		hours_to_zero = 23 - hours_after;

		if (seconds_to_zero == 60)
		{
			seconds_to_zero = 0;
			minutes_to_zero += 1;
			if (minutes_to_zero == 60)
			{
				minutes_to_zero = 0;
				hours_to_zero += 1;
			}
		}

		cout << "Поточний час: " << hours_after << ":" << minutes_after << ":" << seconds_after << endl;
		cout << "До півночі залишилось: " << hours_to_zero << ":" << minutes_to_zero << ":" << seconds_to_zero;
	}
	return 0;
}
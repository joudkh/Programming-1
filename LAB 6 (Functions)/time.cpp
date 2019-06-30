#include<iostream>
#include<string>
using namespace std;

void ReadTime(int&h, int&m, int&s, string& p)
{
	cout << "enter hours, minutes and seconds" << endl;
	cin >> h >> m >> s;
	cout << "enter period" << endl;
	cin >> p;
}

void PrintTime(int h, int m, int s, string p)
{
	cout << h << "::" << m << "::" << s << "::" << p << endl;
}

bool IsMidNight(int h, int m, int s, string p)
{
	if ((h == 12) && (m == 0) && (s == 0) && (p == "AM"))
		return true;
	else
		return false;
}

bool correctTime(int h, int m, int s, string p)
{
	if (h >= 0 && h < 24)
	{
		if (m >= 0 && m < 60)
		{
			if (s >= 0 && s < 60)
			{
				if (p == "AM" || p == "PM")
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool CompareTimes(int h, int m, int s, string p, int h1, int m1, int s1, string p1)
{
	if ((h == h1) && (m == m1) && (s == s1) && (p == p1))
		return true;
	else
		return false;
}

int remaningTime(int h, int& m, int& s, string p)
{
	int h1;
	if (p == "AM")
		h1 = 23 - h;
	else
		h1 = 11 - h;
	if (m != 59)
		m = 59 - m;
	else m = 0;
	if (s != 59)
		s = 59 - s;
	else s = 0;
	return h1;
}

void main()
{
	int h, h1, m, m1, s, s1;
	string p, p1;
	ReadTime(h, m, s, p);
	PrintTime(h, m, s, p);

	if (correctTime(h, m, s, p) == true)
	{
		cout << "The time is correct" << endl;
	}
	else
	{
		cout << "The time is not correct" << endl;
	}

	bool result = IsMidNight(h, m, s, p);
	if (result)
	{
		cout << "it is midnight" << endl;
	}
	else
	{
		cout << "it is not midnight" << endl;
	}

	ReadTime(h1, m1, s1, p1);
	PrintTime(h1, m1, s1, p1);

	int rh = remaningTime(h, m, s, p);
	cout << "the remaining time is " << rh << "hour" << m << "minutes" << s << "seconds" << endl;

	if (CompareTimes(h, m, s, p, h1, m1, s1, p1) == true)
		cout << "times are equal" << endl;
	else
		cout << "times are not equal" << endl;
}
#include <iostream>

using namespace std;

/*
enum Color1
{
	RED,
	GREEN,
	BLUE
};

enum class Color2
{
	GREEN,
	YELLOW,
	RED
};

// Color1 background = RED; good
// Color1 foreground = Color1::BLUE; good
// Color1 color = Color2::RED; Bad

// Color2 stop = RED; Bad
// Color2 wait = YELLOW; Bad
// Color2 go = Color2::GREEN; good

int main()
{
	Color1 col = RED;
	Color2* others = new Color2();
	*others = Color2::YELLOW;

	switch (*others) {
	case Color2::GREEN:
		cout << "�ʷϻ�" << endl;
		break;

	case Color2::YELLOW:
		cout << "�����" << endl;
		break;

	case Color2::RED:
		cout << "������" << endl;
		break;

	default:
		cout << "col = " << col << endl;
		break;
	}

	cout << endl;
}
*/

/*
enum Days
{
	Sunday = 0,
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday = 6
};

enum class Months : short
{
	Jan = 1,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Oct,
	Nov,
	Dec
};

const char* week[] = {
	"Sunday",
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday"
};

const char* months[] = {
	"Jan",
	"Feb",
	"Mar",
	"Apr",
	"May",
	"Jun",
	"Jul",
	"Aug",
	"Sep",
	"Oct",
	"Nov",
	"Dec"
};

// ������ Ÿ���� ��� �Է� ��, �׿� �´� ���ڿ� ��ȯ
const char* DayName(Days day)
{
	// ������ Ÿ���� ������ �ӽ� ��ȯ ����
	// ���� ���� �ʼ�
	if (day < Sunday || day > Saturday) {
		return "�� �� ���� ��";
	}

	// ������ Ÿ�� ����� �迭�� �ε����� ��� ����
	return week[day];
}

int main()
{
	// Thursday ����� ���� Days ������ Ÿ�Կ� ���� ���� Ȯ�� ������ ���� ��� ����
	Days today = Thursday;

	// ���� �۾� ����� ������ Ÿ�� ��ȯ
	// ������ Ÿ���� ������ �⺻������ ������ Ÿ���� ������ ��ȯ�ϰ� ������ ���� ���� �۾��� �̷����
	// -> �۾� ����� ������ �ȴ�
	// -> ������ ���� ������ ������ Ÿ���� ��ҷ� �ٽ� ��ȯ �������
	Days tomorrow = (Days)(today + 1);

	// ������ Ÿ���� ������ ������ �����ʹ� ���� ��ȯ ����
	cout << DayName(today) << "�� " << today + 1 << "��° �����̴�" << endl;
	cout << DayName(tomorrow) << "�� " << tomorrow + 1 << "��° �����̴�" << endl;

	// ������ �ִ� ������ Ÿ���� ���� Ȯ�� �����ڸ� ����Ͽ� ������ Ÿ�԰� ����� ��� ǥ��
	today = (Days)(Saturday + Friday);
	cout << DayName(today) << "�� " << (int)today << "��° �����̴�." << endl;

	Months thisMonth = Months::Dec;
	Months nextMonth = (Months)((thisMonth == Months::Dec) ? 1 : (short)thisMonth + 1);
	short monthNumber = (short)thisMonth;
	cout << months[monthNumber - 1] << "���� " << monthNumber << "��° ���̴�." << endl;
	cout << months[(short)nextMonth - 1] << "���� " << (int)nextMonth << "��° ���̴�." << endl;
}
*/

enum Days
{
	None = 0x00,
	Sunday = 1 << 0,
	Monday = 1 << 1,
	Tuesday = 1 << 2,
	Wednesday = 1 << 3,
	Thursday = 1 << 4,
	Friday = 1 << 5,
	Saturday = 1 << 6
};

const char* week[] = {
	"Sunday",
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday"
};

void DayName(int d)
{
	cout << d << ", ";

	for (int i = 0; i < 7; ++i) {
		// ��Ʈ �̵��� ���� ǥ�� ��Ʈ ã��
		if (d & (1 << i)) {
			cout << week[i] << ' ';
		}
	}

	cout << endl;
}

int main()
{
	DayName(Sunday);

	// ������ Ÿ�� ��Ҹ� ���� ��ȯ �� ��Ʈ OR ���� ����
	Days meeting = Days((int)Thursday | (int)Monday);

	DayName(meeting);
}
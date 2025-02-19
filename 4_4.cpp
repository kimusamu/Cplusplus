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
		cout << "초록색" << endl;
		break;

	case Color2::YELLOW:
		cout << "노란색" << endl;
		break;

	case Color2::RED:
		cout << "빨간색" << endl;
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

// 열거형 타입의 멤버 입력 시, 그에 맞는 문자열 반환
const char* DayName(Days day)
{
	// 열거형 타입은 정수로 임시 변환 가능
	// 범위 점검 필수
	if (day < Sunday || day > Saturday) {
		return "알 수 없는 주";
	}

	// 열거형 타입 멤버는 배열의 인덱스로 사용 가능
	return week[day];
}

int main()
{
	// Thursday 멤버는 별도 Days 열거형 타입에 대한 범위 확인 연산자 없이 사용 가능
	Days today = Thursday;

	// 연산 작업 결과를 열거형 타입 변환
	// 열거형 타입의 연산은 기본적으로 열거형 타입이 정수로 반환하고 정수에 관한 연산 작업이 이루어짐
	// -> 작업 결과는 정수가 된다
	// -> 다음과 같이 정수를 열거형 타입의 요소로 다시 변환 해줘야함
	Days tomorrow = (Days)(today + 1);

	// 열거형 타입의 변수가 저장한 데이터는 정수 변환 간ㅇ
	cout << DayName(today) << "은 " << today + 1 << "번째 요일이다" << endl;
	cout << DayName(tomorrow) << "은 " << tomorrow + 1 << "번째 요일이다" << endl;

	// 범위가 있는 열거형 타입은 범위 확인 연산자를 사용하여 열거형 타입과 멤버로 상수 표시
	today = (Days)(Saturday + Friday);
	cout << DayName(today) << "는 " << (int)today << "번째 요일이다." << endl;

	Months thisMonth = Months::Dec;
	Months nextMonth = (Months)((thisMonth == Months::Dec) ? 1 : (short)thisMonth + 1);
	short monthNumber = (short)thisMonth;
	cout << months[monthNumber - 1] << "월은 " << monthNumber << "번째 월이다." << endl;
	cout << months[(short)nextMonth - 1] << "월은 " << (int)nextMonth << "번째 월이다." << endl;
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
		// 비트 이동을 통해 표시 비트 찾기
		if (d & (1 << i)) {
			cout << week[i] << ' ';
		}
	}

	cout << endl;
}

int main()
{
	DayName(Sunday);

	// 열거형 타입 요소를 정수 전환 후 비트 OR 연산 수행
	Days meeting = Days((int)Thursday | (int)Monday);

	DayName(meeting);
}
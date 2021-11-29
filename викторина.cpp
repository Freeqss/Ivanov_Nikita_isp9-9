#include <iostream>
#include <Windows.h>
#include <time.h> 
#include <stdlib.h>

#define clear system("cls");
#define Pause Sleep(2000);
using namespace std;

int main();
void game();
int scoreplayer = 0;
int lives = 3;
int fails = 0;
int def = 5;
int help = 1;
int rnd = rand() % 3;
int mas[30];

struct QUESTION {
	int index;
	string question;
	int correctAnswer;
	string answers[4];
};
QUESTION questionArray[30] = {
	 {1,"Идет мужик по улице, шляпу нашел, а она ему..", 1,{"как раз.","как sus.","как басс.","как шляпа, че бухтеть-то."}},
	{2,"Кто такой маленький, черненький в стекло бьеться?", 2,{"Муха.","Ребенок в духовке.","Кот в духовке.","Жук."}},
	{3,"Сколько дней нужно, чтобы Земля совершила оборот вокруг Солнца?", 3,{"366","100","365","422"}},
	{4,"На каком языке больше всего слов?", 4,{"В Русском","В Японском","В Китайском","В Английском"}},
	{5,"Сколько спутников у Марса?", 1,{"2","13","1","23"}},
	{6,"Сколько часовых поясов в России?", 2,{"10","12","13","9"}},
	{7,"Сколько клавишь у классического пианино?", 3,{"51","30","88","24"}},
	{8,"Какой город известен как родина хип-хопа?", 4,{"Галливуд","Петербург","Нью-Йорк","Бронкс"}},
	{9,"Каков рекорд Усэйна Болта в беге на 100 метров?", 3,{"10.02","8.98","9.58","9.61"}},
	{10,"Людей с какой группой крови чаще кусают комары?", 2,{"С 2 положительно1 группой","С 1 группой","С 2 отрицательной группой","С 3 группой"}},
	{11,"В какой стране используеться своя система дорожных знаков?", 2,{"В США","В Китае","В России","В Германии"}},
	{12,"Почему яблоко начинает желтеть на его срезе?", 1,{"Из за окисления","Из за примесей в воздухе","Из за того что оно стесняеться","Оно не желтеет, а гниет"}},
	{13,"Как русские моряки называют российский флаг?", 2,{"Дьявол","Бесик","Троячок","Родина"}},
	{14,"У какой страны полностью зеленый флаг?", 3,{"У Литвы","У Парагвая","У Ливии","У Угандии"}},
	{15,"Из какой страны родом Джастин Бибер?", 3,{"Уругвай","Англия","Канада","США"}},
	{16,"В сиквеле какого праздничного фильма снялся Дональд Трамп?", 4,{"Один дома","Ричи Рич","Маленькие негодяи","Один дома 2: Затерянный в Нью-Йорке"}},
	{17,"Что является национальным животным Шотландии?", 4,{"Лошадь","Лис","Волк","Единорог"}},
	{18,"Из чего сделан самый крепкий дом в “Трех поросятах”?", 3,{"Железобетон","Бамбук","Кирпич","Шлакоблок"}},
	{19,"Сколько игроков в бейсбольной команде?", 4,{"11","8","10","9"}},
	{20,"Как долго длилась Столетняя война?", 1,{"116","102","100","98"}},
	{21,"Какая страна яляеться самой маленькой в мире?", 2,{"Мальта","Ватикан","Монако","Мальдивы"}},
	{22,"Какое животное находится под защитой закона в Риме?", 3,{"Крысы","Курицы","Кошки","Львы"}},
	{23,"Какое животное имет самый сильный укус?", 1,{"Бегемот","Аллигатор","Лев","Крокодил"}},
	{24,"Какое популярное морское существо обладает способностью клонировать себя?", 3,{"Осминог","Кальмар","Медуза","Морской Ёж"}},
	{25,"Сколько костей у акул?",1,{"Ноль","Двадцать","Десять","Четыре"}},
	{26,"Сначала их относили к растительному миру, потом к животному. А изучив всесторонне, выделили в особую группу. Что это такое?", 2,{"Папоротники","Грибы","Камни","Водросли"}},
	{27,"Древние греки называли ее «Борисфен», римляне «Данапарис», турки «Узу»  Славяне «Славутич», как называется эта река сейчас ? ", 4,{"Дунай","Ока","Кама","Днепр"}},
	{28,"Где в первые начали украшать елку еще в Средневековье?", 4,{"В Англии","В колониях, где сейчас находиться США","На територии нынешней России","В Германии"}},
	{29,"Сколько резеденций имеет Дед Мороз в России?", 3,{"0","2","4","1"}},
	{30,"Как зовут Деда Мороза на Кипре?", 2,{"Никита","Василий","Виктор","Дед Мороз"}}
};


bool fail() {
	if (lives <= 0) {
		cout << "\n \t\tWELCUM TO THE CUMZONE!!!!";
		char _; cin >> _;

		return true;
	}
	else { return false; }

}
int score() {
	scoreplayer++;
	return scoreplayer;
}
void displayAnswers(string answers[4]) {

	if (sizeof(answers) == 0) return;
	else {
		for (int i = 0; i < sizeof(answers); i++) {
			cout << "  [" << i + 1 << "] - " << answers[i] << endl;
		}
	}
}
void display5050(string answers[4], int correctAnswer) {
	clear;
	int f = rnd;
	cout << "\n";
	cout << " [" << correctAnswer << "] - " << answers[correctAnswer - 1] << "\n";

	if (rnd != questionArray->correctAnswer) {
		cout << " [" << f + 1 << "] - " << answers[rnd] << "\n";
	}
	else {
		cout << " [" << f << "] - " << answers[rnd - 1] << "\n";
	}
	help--;
	return;
}
bool checkAnswer(string answers[4], int correctAnswer) {
	int currentansw;
	bool lives;
	int z;

	cin >> currentansw;
	for (int i = 0; i < sizeof(currentansw); i++) {
		if (correctAnswer == currentansw) {
			return  true;
		}
		else {
			return  false;
		}
	}

}

int cheсk(int lim, int mas[], int digit)
{
	int i;
	for (i = 0; i < lim; i++)
		if (mas[i] == digit)
			return 1;
		else if (lim == 29) game();
	return 0;
}

int hp() {
	lives--;
	fails++;
	return lives;
}

void randque() {
	for (int k = 0; k < 30; k++)
	{
		do
		{
			mas[k] = rand() % 29;
		} while (cheсk(k, mas, mas[k]));
		return;
	}
}
void game() {

	randque();

	int answer;
	for (int i = 0; i < def; i++) {

		if (fail()) {
			break;
		}
		cout << "    " << questionArray[mas[i]].question << "\t";


		for (int j = 0; j < lives; j++) {
			cout << char(2);
		}
		for (int j = 0; j < fails; j++) {
			cout << char(1);
		}
		cout << "\t Ваш счет -> " << scoreplayer;
		cout << "\n\n";
		displayAnswers(questionArray[mas[i]].answers);
		cin >> answer;
		if (answer == 50) {
			display5050(questionArray[mas[i]].answers, questionArray[mas[i]].correctAnswer);
		}
		if (checkAnswer(questionArray[mas[i]].answers, questionArray[mas[i]].correctAnswer)) {
			clear;
			cout << "\n\tкрасавчик";
			score();
		}
		else if (checkAnswer(questionArray[mas[i]].answers, questionArray[mas[i]].correctAnswer) == false) {
			clear;
			cout << "\n\tОшибочка вышла..";
			hp();
		}
		else {
			clear;
			cout << "Вы ввели не верное значение по этому вы потеряяете жизнь..";
			hp();
		}
		Pause;
		clear;

	}


}
void settings() {
	int select;

	clear;

	cout << "\n\t\t Добропожаловать в настройки!"
		<< "\n\t Выберите нужную вам опцию!"
		<< "\n [1] - Выбор кол-ва вопросов"
		<< "\n [2] - Выбор кол-ва жизней"
		<< "\n [3] - Выбор кол-ва подсказок"
		<< "\n [4] - Выход в главное меню";

	cin >> select;

	switch (select)
	{
	case 1: {
		clear;
		cout << "\n\t Введите желаемое кол-во вопросов(не больше 15) - ";
		cin >> def;
		if (def > 15) {
			def = 5;
			clear;
			cout << "Введите число, не превышающее 15!";
			Pause;
			settings();
			break;
		}
		else {
			settings();
			break;
		}
	}
	case 2: {
		clear;
		cout << "\n\t Введите желаемое кол-во жизней(не больше 5) - ";
		cin >> lives;
		if (lives > 5) {
			lives = 3;
			clear;
			cout << "Введите число, не превышающее 5!";
			Pause;
			clear;
			settings();
			break;
		}
		else {
			clear;
			settings();
			break;
		}
	}
	case 3: {
		clear;
		cout << "\n\t Введите число подсказок!"
			<< "\n(При 5 вопросах  максимум 2, при 10 - 4 и при 15 - 6)\n";
		cin >> help;
		if (help > 2 && def < 5 || help > 4 && def < 10 || help > 6 && def < 15) {
			help = 2;
			clear;
			cout << "Вы ввели число превышающие максимум при заданном колличестве вопросов!";
			Pause;
			settings();
			break;
		}
		else {
			settings();
			break;
		}
	}
	case 4: {
		clear;
		main();
		break;
	}
	default:
		clear;
		cout << "\n Введите корректное значение!";
		settings();
		break;
	}

}
int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int select;

	cout << "\t[~]Добропожаловать в викторину![~]\n\n"
		<< "[1] - Играть!\n"
		<< "[2] - Настройки\n"
		<< "[3] - Правила\n"
		<< "[4] - Выйти\n";
	cin >> select;
	switch (select)
	{
	case 1:
	{
		clear;
		game();
		break;
	}
	case 2:
	{
		clear;
		settings();
		break;
	}
	case 3:
	{
		clear;

		break;
	}
	case 4:
	{
		clear;

		break;
	}
	default:
		clear;
		cout << "\t Вы ввели неправильное значение!";
		break;
	}
}

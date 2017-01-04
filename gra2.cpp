// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include "klasy.h"
#include <ctime>
#include <windows.h>
#include <string>
#include <conio.h>
#include "mapa.h"

using namespace std;


void generator_postaci(int wyb_2, player *p1)
{

	srand(unsigned(time(0)));
	switch (wyb_2)
	{
	case 1:

		p1->klasa = '1';
		p1->magia = rand() % 15 + 15;
		p1->obrona = rand() % 15 + 15;
		p1->sila = rand() % 20 + 30;
		p1->zwinnosc = rand() % 15 + 20;
		p1->zdr = 100;
		p1->zloto = 100;
		p1->lek = 1;
	
		system("cls");
		cout << "	Wybrales Wojownika" << endl;
		Sleep(000);
		cout << "Umiejetnosci Twojej postaci: " << endl;
		Sleep(000);
		cout << "	Zdrowie: " << p1->zdr << endl;
		Sleep(000);
		cout << "	Magia: " << p1->magia << endl;
		Sleep(000);
		cout << "	Sila: " << p1->sila << endl;
		Sleep(000);
		cout << "	Obrona: " << p1->obrona << endl;
		Sleep(000);
		cout << "	Zwinnosc: " << p1->zwinnosc << endl;
		Sleep(000);
		cout << "	Zloto: " << p1->zloto << endl; 
		cout <<endl;
		cout << "Wcisnij enter"<<endl;
		getchar();
		getchar();
		break;
	case 2:
		p1->klasa = '2';
		p1->magia = rand() % 15 + 25;
		p1->obrona = rand() % 15 + 25;
		p1->sila = rand() % 15 + 25;
		p1->zwinnosc = rand() % 15 + 25;
		p1->zdr = 100;
		p1->zloto = 100;
		p1->lek = 1;

		system("cls");

		cout << "	Wybrales Maga" << endl;
		Sleep(000);
		cout << "Umiejetnosci Twojej postaci: " << endl;
		Sleep(000);
		cout << "	Zdrowie: " << p1->zdr << endl;
		Sleep(0000);
		cout << "	Magia: " << p1->magia << endl;
		Sleep(0000);
		cout << "	Sila: " << p1->sila << endl;
		Sleep(000);
		cout << "	Obrona: " << p1->obrona << endl;
		Sleep(000);
		cout << "	Zwinnosc: " << p1->zwinnosc << endl;
		Sleep(000);
		cout << "	Zloto: " << p1->zloto << endl;
		cout << endl;
		cout << "Wcisnij enter" << endl;
		getchar();
		getchar();
		break;
	case 3:
		p1->klasa = '3';
		p1->magia = rand() % 10 + 5;
		p1->obrona = rand() % 15 + 15;
		p1->sila = rand() % 15 + 15;
		p1->zwinnosc = rand() % 15 + 30;
		p1->zdr = 100;
		p1->zloto = 100;
		p1->lek = 0;

		system("cls");
		cout << "	Wybrales Zlodzieja" << endl;
		Sleep(000);
		cout << "Umiejetnosci Twojej postaci: " << endl;
		Sleep(000);
		cout << "	Zdrowie: " << p1->zdr << endl;
		Sleep(000);
		cout << "	Magia: " << p1->magia << endl;
		Sleep(000);
		cout << "	Sila: " << p1->sila << endl;
		Sleep(000);
		cout << "	Obrona: " << p1->obrona << endl;
		Sleep(000);
		cout << "	Zwinnosc: " << p1->zwinnosc << endl;
		Sleep(000);
		cout << "	Zloto: " << p1->zloto << endl;
		cout << endl;
		cout << "Wcisnij enter" << endl;
		getchar();
		getchar();
		break;

	}


};
void walka(player *p1, enemy *e1)
{
	int atk, obr, zwi, czar; // wartosci umiejetnosci podczas walki bohatera
	int matk, mobr, mzwi, mczar; // wartosci umiejetnosci podczas walki przeciwnika
	int r_atak; //wybór rodzaju ataku
	int damage; //obrażenia zadawane przez bohatera
	int mdamage; //obrażenia zadawane przez przeciwnika
	


	e1->magia = rand() % 11 + p1->magia - 5;
	e1->obrona = rand() % (p1->obrona / 3) + p1->obrona - 5;;
	e1->sila = rand() % 11 + p1->sila - 5;;
	e1->zwinnosc = 20;
	e1->zdr = rand() % 21 + 60;

	cout << e1->magia << " " << e1->sila;
	_getch();

	system("cls");
	
	do
	{
		do
		{
			
			cout << endl;
			cout << "Wybierz atak: " << endl; 
			cout << "1. Mocny atak" << endl;
			cout << "2. Szybki atak" << endl;
			cout << "3. Asekuracyjny atak" << endl;
			cout << "4. Uciekaj (koszt: 50 sztuk zlota)" << endl;
			cout << "5. Wypij lekarstwo" << endl;
			cout << "6. Statystyki gracza" << endl;
			cout << endl;
			cout << "Wybierz liczbe 1-5 ";
			cin >> r_atak;
			cout << endl;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout << endl;
				cout << "Wybierz atak: " << endl;
				cout << "1. Mocny atak" << endl;
				cout << "2. Szybki atak" << endl;
				cout << "3. Asekuracyjny atak" << endl;
				cout << "4. Uciekaj (koszt: 50 sztuk zlota)" << endl;
				cout << "5. Wypij lekarstwo" << endl;
				cout << "6. Statystyki gracza" << endl;
				cout << endl;
				cout << "Wybierz liczbe 1-5 ";
				cin >> r_atak;
				cout << endl;
			}
			if (r_atak == 5)
				{
					if (p1->lek >= 1)
					{
						if (p1->zdr >= 80)
						{
							cout << "Wypiles lekarstwo. Twoje zdrowie wynosi ";
							p1->zdr = 100;
							p1->lek -= 1;
							cout << p1->zdr << endl;
						}
						else
						{
							cout << "Wypiles lekarstwo. Twoje zdrowie wynosi ";
							p1->zdr += 20;
							p1->lek -= 1;
							cout << p1->zdr << endl;
						}
					}
					else	
					{
						cout << "Nie masz zadnego lekarstwa ";
					}
				}
			if (r_atak == 4)
			{
				if (p1->zloto >= 50)
				{
					break;
				}
				else
				{
					cout << "Nie masz tyle zlota!" << endl;
				}
			}
			if (r_atak == 6)
			{
			
				cout << "Zdrowie:   " << p1->zdr << endl;
				cout << "Magia:     " << p1->magia << endl;
				cout << "Sila:      " << p1->sila << endl;
				cout << "Obrona :   " << p1->obrona << endl;
				cout << "Zwinnosc:  " << p1->zwinnosc << endl;
				cout << "Zloto:     " << p1->zloto << endl;
				cout << "Lekarstwa: " << p1->lek << endl;
				
			}
		} while (r_atak < 0 || r_atak>3);

		switch (r_atak)
		{
		
		case 1:
			atk = rand() % p1->sila + 20;
			obr = rand() % p1->obrona + 5;
			zwi = rand() % p1->zwinnosc + 10;
			czar = rand() % p1->magia;
			break;
		case 2:
			atk = rand() % p1->sila;
			obr = rand() % p1->obrona;
			zwi = rand() % p1->zwinnosc;
			czar = rand() % p1->magia;
			break;
		case 3:
			atk = rand() % p1->sila;
			obr = rand() % p1->obrona;
			zwi = rand() % p1->zwinnosc;
			czar = rand() % p1->magia;
			break;
		case 4:
			cout << "Uciekles z pola walki. Straciles 50 sztuk zlota";
			p1->zloto -= 50;
			getchar; getchar;
			break;
		
		default:
			break;


		}
		if (r_atak == 4) { break; }
		
		r_atak = rand() % 3 + 1;
		switch (r_atak)
		{
		case 1:
			matk = rand() % e1->sila + 10;
			mobr = rand() % e1->obrona + 5;
			mzwi = rand() % e1->zwinnosc + 5;
			mczar = rand() % e1->magia;
			break;
		case 2:
			matk = rand() % e1->sila + 10;
			mobr = rand() % e1->obrona;
			mzwi = rand() % e1->zwinnosc;
			mczar = rand() % e1->magia;
			break;
		case 3:
			matk = rand() % e1->sila;
			mobr = rand() % e1->obrona;
			mzwi = rand() % e1->zwinnosc;
			mczar = rand() % e1->magia;
			break;
		default:
			break;
		}
	
		mdamage = atk - mobr; //  wzór na zadawane ciosy bohatera
		if (mdamage < 0) {
			mdamage = 0;
		}
		e1->zdr = e1->zdr - mdamage;
		cout << "Zabrales " << mdamage << " punktow zycia przeciwnikowi!" << endl;
		getchar();

		if (e1->zdr < 1) {
			cout << "Zabiles przeciwnika!" << endl;
			cout << "Dostajesz 100 sztuk zlota!";
			p1->zloto += 100;
			getchar();
			break;

		}
		cout << "Przeciwnikowi pozostalo " << e1->zdr << " punktow zycia!" << endl;

		damage = ((matk + mzwi + mczar) / 3) - (obr);  // wzór na zadawane ciosy przeciwnika
		if (damage < 0)
		{
			damage = 0;
		}
		p1->zdr = p1->zdr - damage;
		cout << "Przeciwnik zabral Ci " << damage << " punktow zycia." << endl;
		if (p1->zdr < 1) {
			cout << "Zginales! Przeciwnik Cie pokonal. Zostalo mu " << e1->zdr << " punktow zycia!" << endl;
			getchar();
			system("cls");
			cout << "				KONIEC GRY";
			getchar();
			exit(0);
		}
		cout << "Pozostalo Ci jeszcze " << p1->zdr << " punktow." << endl;
	
	} while (1);


}
void gra(player *p1, enemy *e1)

{

	int pozycja_x = 0; //wspolrzedne gracza na mapie
	int pozycja_y = 0;
	char ruch;
	char gracz = 'x';//znak gracza na mapie
	int akcja;//losuje rodzaj akcji na mapie
	
	
	while (1)

	{
		system("cls");
		for (int y = 0; y<20; y++)
	{
			for (int x = 0; x<20; x++)
			{
				if (x == pozycja_x && y == pozycja_y)
				{
					cout << gracz;
				}
				else
				{
					cout << mapa1[y][x];
				}

			}

			cout << endl;


		}
		//tekst pod mapą 
		cout << "1-Sterowanie" << endl;
		cout << "2-Statystyki gracza" << endl;
		cout << "3-Wyjscie z gry" << endl;


		ruch = _getch();

		switch (ruch)

		{
			//sterowanie graczem a,w,s,d chodzi po wszystkim oprócz '%' i '-'
		case 'a':
			if (mapa1[pozycja_y][pozycja_x - 1] != '%' && mapa1[pozycja_y][pozycja_x - 1] != '-')--pozycja_x; 
			break;
		case 'd': 
			if (mapa1[pozycja_y][pozycja_x + 1] != '%' && mapa1[pozycja_y][pozycja_x + 1] != '-')++pozycja_x;
			break;
		case 'w':
			if (mapa1[pozycja_y - 1][pozycja_x] != '%' && mapa1[pozycja_y - 1][pozycja_x] != '-')--pozycja_y;
			break;
		case 's':
			if (mapa1[pozycja_y + 1][pozycja_x] != '%' && mapa1[pozycja_y + 1][pozycja_x] != '-')++pozycja_y; 
			break;
		case '1':
			system("cls");//sterowanie pod mapa
			cout << "w - ruch w gore" << endl;
			cout << "s- ruch w dol" << endl;
			cout << "a - ruch w lewo" << endl;
			cout << "d - ruch w prawo" << endl;
			_getch();
			break;
		case'2'://statystyki pod mapa
			system("cls");
			cout << "Zdrowie:   " << p1->zdr << endl;
			cout << "Magia:     " << p1->magia << endl;
			cout << "Sila:      " << p1->sila << endl;
			cout << "Obrona :   " << p1->obrona << endl;
			cout << "Zwinnosc:  " << p1->zwinnosc << endl;
			cout << "Zloto:     " << p1->zloto << endl;
			cout << "Lekarstwa: " << p1->lek << endl;
			_getch();
			break;
		case '3':
			exit(0);
			break;
		
		}

		if (mapa1[pozycja_y][pozycja_x] == '?')//losowa akcja przy znaku '?'
		{
			akcja = rand() % 4 + 1;
			switch (akcja)
			{
			case 1:
				system("cls");
				cout << "Znajdujesz miecz. Sila wzrasta o 5 i wynosi ";
				p1->sila += 5;
				cout << p1->sila << endl;
				walka(p1, e1);
				_getch();
				break;
			case 2:
				system("cls");
				cout << "Walka" << endl;
				walka(p1, e1);
				_getch();
				break;
			case 3:
				system("cls");
				cout << "walka" << endl;
				walka(p1, e1);
				_getch();

				break;
			case 4:
				system("cls");
				cout << "Znajdujesz lekarstwo" << endl;
				p1->lek += 1;
				cout << "Wcisnij dowolny klawisz";
				_getch();
			}
			mapa1[pozycja_y][pozycja_x] = ' ';//usuwa akcję z mapy


		}

		if (mapa1[pozycja_y][pozycja_x] == 'O')//przechodzi do 2 mapy

		{
			pozycja_x = 15; //pozycja gracza w 2 mapie
			pozycja_y = 1;
			while (1)

			{
				system("cls");
				for (int y = 0; y < 20; y++)
				{
					for (int x = 0; x < 20; x++)
					{
						if (x == pozycja_x && y == pozycja_y)
						{
							cout << gracz;
						}
						else
						{
							cout << mapa2[y][x];
						}
					}
					cout << endl;
				}
				//tekst pod mapą 
				cout << "1-Sterowanie" << endl;
				cout << "2-Statystyki gracza" << endl;
				cout << "3-Wyjscie z gry" << endl;
				ruch = _getch();

				switch (ruch)

				{
					//sterowanie graczem a,w,s,d chodzi po wszystkim oprócz '%' i '-'
				case 'a':
					if (mapa2[pozycja_y][pozycja_x - 1] != '%' && mapa2[pozycja_y][pozycja_x - 1] != '-')--pozycja_x;
					break;
				case 'd':
					if (mapa2[pozycja_y][pozycja_x + 1] != '%' && mapa2[pozycja_y][pozycja_x + 1] != '-')++pozycja_x;
					break;
				case 'w':
					if (mapa2[pozycja_y - 1][pozycja_x] != '%' && mapa2[pozycja_y - 1][pozycja_x] != '-')--pozycja_y;
					break;
				case 's':
					if (mapa2[pozycja_y + 1][pozycja_x] != '%' && mapa2[pozycja_y + 1][pozycja_x] != '-')++pozycja_y;
					break;
				case '1'://sterowanie pod mapa
					system("cls");
					cout << "w - ruch w gore" << endl;
					cout << "s- ruch w dol" << endl;
					cout << "a - ruch w lewo" << endl;
					cout << "d - ruch w prawo" << endl;
					_getch();
					break;
				case'2'://statystyki pod mapa
					system("cls");
					cout << "Zdrowie:   " << p1->zdr << endl;
					cout << "Magia:     " << p1->magia << endl;
					cout << "Sila:      " << p1->sila << endl;
					cout << "Obrona :   " << p1->obrona << endl;
					cout << "Zwinnosc:  " << p1->zwinnosc << endl;
					cout << "Zloto:     " << p1->zloto << endl;
					cout << "Lekarstwa: " << p1->lek << endl;
					_getch();
					break;
				case '3':
					exit(0);
					break;
				}
				if (mapa2[pozycja_y][pozycja_x] == 'P')//wychodzi z gry w 2 mapie
				{
					exit(0);
				}
				if (mapa2[pozycja_y][pozycja_x] == '*')//powrót do 1 mapy
				{
					break;
				}
				if (mapa2[pozycja_y][pozycja_x] == '?') //akcja
				{
					akcja = rand() % 4 + 1;
					switch (akcja)
					{
					case 1:
						system("cls");
						cout << "Znajdujesz miecz. Sila wzrasta o 5 i wynosi ";
						p1->sila += 5;
						cout << p1->sila << endl;
						walka(p1, e1);
						_getch();
						break;
					case 2:
						system("cls");
						cout << "Walka" << endl;
						walka(p1, e1);
						_getch();
						break;
					case 3:
						system("cls");
						cout << "walka" << endl;
						walka(p1, e1);
						_getch();
						
						break;
					case 4: 
						system("cls");
						cout << "Znajdujesz lekarstwo" << endl;
						p1->lek += 1;
						cout << "Wcisnij dowolny klawisz";
						_getch();
					}
					mapa2[pozycja_y][pozycja_x] = ' ';//usuwa akcję z mapy
				}
			}
			mapa2[pozycja_y = 18][pozycja_x = 15];//pozycja gracza po powrocie do 1 mapy
		}
	}
}
int main()
{
	int wybor;//wybór w menu głównym
	int wyb_2;//wybór w nowej grze
	player p1;
	player *wp1;
	wp1 = &p1;
	enemy e1;
	enemy *we1;
	we1 = &e1;

	do
	{
		system("cls");
		cout << "	WITAJ!" << endl;
		cout << "1. Nowa gra" << endl;
		cout << "2. Informacje o autorze" << endl;
		cout << "3. Wyjscie z gry" << endl;
		cout << endl;
		cout << "Wybierz cyfre 1-3" << endl;
		cin >> wybor;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			system("cls");
			cout << "	WITAJ!" << endl;
			cout << "1. Nowa gra" << endl;
			cout << "2. Informacje o autorze" << endl;
			cout << "3. Wyjscie z gry" << endl;
			cout << endl;
			cout << "Wybierz cyfre 1-3" << endl;
			cin >> wybor;
		}
		switch (wybor)
		{
		case 1:
			do
			{
				system("cls");
				cout << endl;
				cout << "Wybierz postac" << endl;
				cout << "1. Wojownik" << endl;
				cout << "2. Mag" << endl;
				cout << "3. Zlodziej" << endl;
				cout << "4. Powrot do menu glownego" << endl;
				cout << endl;
				cout << "Wybierz cyfre 1-4" << endl;
				cin >> wyb_2;
				while (cin.fail())
				{
					cin.clear();
					cin.ignore();
					system("cls");
					cout << endl;
					cout << "Wybierz postac" << endl;
					cout << "1. Wojownik" << endl;
					cout << "2. Mag" << endl;
					cout << "3. Zlodziej" << endl;
					cout << "4. Powrot do menu glownego" << endl;
					cout << endl;
					cout << "Wybierz cyfre 1-4" << endl;
					cin >> wyb_2;
				}

				switch (wyb_2)

				{
				case 1:

					generator_postaci(wyb_2, wp1);
					gra(wp1, we1);
					break;
				case 2:
					generator_postaci(wyb_2, wp1);
					gra(wp1, we1);
					break;
				case 3:
					generator_postaci(wyb_2, wp1);
					gra(wp1, we1);
					break;


				default:
					break;

				}
			} while (wyb_2<1 || wyb_2>4);
			getchar();
			break;
		case 2:
			system("cls");
			cout << "Grabinski Bartosz " << endl;
			cout << endl;
			cout << "Wcisnij dowolny klawisz aby powrocic do menu glownego" << endl;
			_getch();
			break;
		case 3:
			return(0);
			break;
		default:
			getchar();
			break;
		}




	} while (1);
	getchar();
	return 0;
}

# GRA
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
int walka()
{

	int wyb_2;


	int atk, obr, zwi, czar; // wartosci umiejetnosci podczas walki bohatera
	int matk, mobr, mzwi, mczar; // wartosci umiejetnosci podczas walki przeciwnika



	int r_atak; //wybór rodzaju ataku
	int damage; //obrażenia zadawane przez bohatera
	int mdamage; //obrażenia zadawane przez przeciwnika
	ork o1;
	mag m1;
	m1.magia = 20;
	m1.obrona = 5;
	m1.sila = 25;
	m1.zwinnosc = 25;
	m1.zdr = 100;

	o1.magia = 20;
	o1.obrona = 20;
	o1.sila = 20;
	o1.zwinnosc = 20;
	o1.zdr = rand() % 21 + 60;

	system("cls");
	cout << "Walka " << endl;
	do
	{
		cout << endl;
		cout << "Wybierz atak: " << endl;
		cout << "1. Mocny atak" << endl;
		cout << "2. Szybki atak" << endl;
		cout << "3. Asekuracyjny atak" << endl;
		cin >> r_atak;


		switch (r_atak)
		{
		case 1:
			atk = rand() % m1.sila + 20;
			obr = rand() % m1.obrona + 5;
			zwi = rand() % m1.zwinnosc + 10;
			czar = rand() % m1.magia;
			break;
		case 2:
			atk = rand() % m1.sila;
			obr = rand() % m1.obrona;
			zwi = rand() % m1.zwinnosc;
			czar = rand() % m1.magia;
			break;
		case 3:
			atk = rand() % m1.sila;
			obr = rand() % m1.obrona;
			zwi = rand() % m1.zwinnosc;
			czar = rand() % m1.magia;
			break;
		default:
			break;


		}
		r_atak = rand() % 3 + 1;
		switch (r_atak)
		{
		case 1:
			matk = rand() % o1.sila + 10;
			mobr = rand() % o1.obrona + 5;
			mzwi = rand() % o1.zwinnosc + 5;
			mczar = rand() % o1.magia;
			break;
		case 2:
			matk = rand() % o1.sila + 10;
			mobr = rand() % o1.obrona;
			mzwi = rand() % o1.zwinnosc;
			mczar = rand() % o1.magia;
			break;
		case 3:
			matk = rand() % o1.sila;
			mobr = rand() % o1.obrona;
			mzwi = rand() % o1.zwinnosc;
			mczar = rand() % o1.magia;
			break;
		default:
			break;
		}
		mdamage = ((atk + zwi + czar) / 3) - (mobr); // wzór na zadawane ciosy bohatera
		if (mdamage <0) {
			mdamage = 0;
		}
		o1.zdr = o1.zdr - mdamage;
		cout << "Zabrales " << mdamage << " punktow zycia przeciwnikowi!" << endl;
		getchar();

		if (o1.zdr < 1) {
			cout << "Zabiles przeciwnika!" << endl;
			cin.get();
			break;

		}
		cout << "Przeciwnikowi pozostalo " << o1.zdr << " punktow zycia!" << endl;

		damage = ((matk + mzwi + mczar) / 3) - (obr);  // wzór na zadawane ciosy przeciwnika
		if (damage < 0)
		{
			damage = 0;
		}
		m1.zdr = m1.zdr - damage;

		cout << "Przeciwnik zabral Ci " << damage << " punktow zycia." << endl;
		cout << "Pozostalo Ci jeszcze " << m1.zdr << " punktow." << endl;
		if (m1.zdr < 1) {
			cout << "Zginales! Przeciwnik Cie pokonal. Zostalo mu " << o1.zdr << " punktow zycia!" << endl;
			getchar();
			system("cls");
			cout << "				KONIEC GRY";
			getchar();
			exit(0);
		}

		

	} while (1);


}

void generator_postaci(int wyb_2)
{
	int game();
	mag m1;
	wojownik w1;
	zlodziej z1;
	switch (wyb_2)
	{
	case 1:
		
		srand(unsigned(time(0))); // losowanie umiejetnosci postaci
		w1.magia = rand() % 15 + 15;
		w1.obrona = rand() % 15 + 15;
		w1.sila = rand() % 20 + 30;
		w1.zwinnosc = rand() % 15 + 20;
		w1.zdr = 100;

		system("cls");
		cout << "	Wybrales Wojownika" << endl;
		Sleep(1000);
		cout << "Umiejetnosci Twojej postaci: " << endl;
		Sleep(1000);
		cout << "	Zdrowie: " << w1.zdr << endl;
		Sleep(1000);
		cout << "	Magia: " << w1.magia << endl;
		Sleep(1000);
		cout << "	Sila: " << w1.sila << endl;
		Sleep(1000);
		cout << "	Obrona: " << w1.obrona << endl;
		Sleep(1000);
		cout << "	Zwinnosc: " << w1.zwinnosc << endl;
		getchar();
		break;
	case 2:
		m1.magia = rand() % 15 + 25;
		m1.obrona = rand() % 15 + 25;
		m1.sila = rand() % 15 + 25;
		m1.zwinnosc = rand() % 15 + 25;
		m1.zdr = rand() % 15 + 30;

		system("cls");

		cout << "	Wybrales Maga" << endl;
		Sleep(000);
		cout << "Umiejetnosci Twojej postaci: " << endl;
		Sleep(000);
		cout << "	Zdrowie: " << m1.zdr << endl;
		Sleep(0000);
		cout << "	Magia: " << m1.magia << endl;
		Sleep(0000);
		cout << "	Sila: " << m1.sila << endl;
		Sleep(000);
		cout << "	Obrona: " << m1.obrona << endl;
		Sleep(000);
		cout << "	Zwinnosc: " << m1.zwinnosc << endl;
		Sleep(000);
		 game();
		break;
	case 3:
		z1.magia = rand() % 10 + 5;
		z1.obrona = rand() % 15 + 15;
		z1.sila = rand() % 15 + 15;
		z1.zwinnosc = rand() % 15 + 30;
		z1.zdr = 100;

		system("cls");
		cout << "	Wybrales Zlodzieja" << endl;
		Sleep(1000);
		cout << "Umiejetnosci Twojej postaci: " << endl;
		Sleep(1000);
		cout << "	Zdrowie: " << z1.zdr << endl;
		Sleep(1000);
		cout << "	Magia: " << z1.magia << endl;
		Sleep(1000);
		cout << "	Sila: " << z1.sila << endl;
		Sleep(1000);
		cout << "	Obrona: " << z1.obrona << endl;
		Sleep(1000);
		cout << "	Zwinnosc: " << z1.zwinnosc << endl;
		getchar();
		break;

	}
	

};
int game()
{
	
	string  imie;//imie gracza
	cout << "Podaj swoje imie: " << endl;
	cin >> imie;
	cout << "Witaj " << imie << "!" << endl;
	getchar();	getchar();

	gra1();
	// schemat walki
	walka();
	system("cls");
	cout << "Wybierz gdzie chcesz isc" << endl;
	getchar();
	return 0;
}


int main()
{

	

	
	int wybor;//wybór w menu głównym
	int wyb_2;//wybór w nowej grze


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
		cin.sync();
		cin.clear();
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
				cin.sync();
				cin.clear();

				switch (wyb_2)

				{
				case 1:
					
					game();
					break;
				case 2:
					generator_postaci(wyb_2);
					break;
				case 3:
					game();
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

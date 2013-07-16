#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;

	string name, item;

	fin.open("wedding.txt");
	fout.open("thanks.txt");

	while (fin)
	{
		getline(fin, name);

		if (name.size() <= 1)
		{
			continue;
		}

		getline(fin, item);

		if (item.size() <=1)
		{
			continue;
		}

		fout << "Our dear " << name << "," << endl << endl
			 << "\tThank you so much for the wonderful " << item << "! You are absolutely fantastic.\n"
			 << "We are so grateful that you were able to a part of our special day. Thank you\nfor your love and support over the years.\n\n"
			 << "We love you so much!"
			 << "\n\nLove,\nJames and Shantae Decker\n\n";
	}

	fin.close();
	fout.close();
}
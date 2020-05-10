#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

void intro() {
	cout << " ___________  ___  _____  _____   _____ _   _  ___ ______ ___________  " << endl;
	cout << "/  ___| ___ \\/ _ \\/  __ \\|  ___| |  ___| | | |/ _ \\|  _  \\  ___| ___ \\ " << endl;
	cout << "\\ `--.| |_/ / /_\\ \\ /  \\/| |__   | |__ | | | / /_\\ \\ | | | |__ | |_/ / " << endl;
	cout << " `--. \\  __/|  _  | |    |  __|  |  __|| | | |  _  | | | |  __||    /  " << endl;
	cout << "/\\__/ / |   | | | | \\__/\\| |___  | |___\\ \\_/ / | | | |/ /| |___| |\\ \\  " << endl;
	cout << "\\____/\\_|   \\_| |_/\\____/\\____/  \\____/ \\___/\\_| |_/___/ \\____/\\_| \\_| " << endl;

	cout << endl;
	cout << "For quick tutorial, press 1" << endl;
	cout << "To start the game, press 2" << endl;

	int n;
	cin >> n;
	if (n == 1) {
		system("cls");

		cout << "This is a turn-based game. Point of the game is to evade space junk: \n" << endl << endl;
		cout << "            +@#%$#\n            (*)&^&\n            !@#$%%\n            $%^&## ,\n\n" << endl;
		cout << "while piloting a spaceship called 'Turn - Based Space Junk Evader Model One':\n" << endl << endl;
		cout << "              ##  \n             #### \n              ()  \n              ##  \n\n" << endl;
		cout << "Press any number to continue..." << endl;
		cin >> n;
		system("cls");

		cout << "***********************Rules of the game**********************" << endl << endl;
		cout << "To turn left, press 1, and then press enter to end the turn:\n" << endl;


		cout << "            <----1---         " << endl;
		cout << "==================  ##  ======" << endl;
		cout << "================== #### ======" << endl;
		cout << "==================  ()  ======" << endl;
		cout << "==================  ##  ======" << endl << endl;

		cout << "============  ##  ============" << endl;
		cout << "============ #### ============" << endl;
		cout << "============  ()  ============" << endl;
		cout << "============  ##  ============" << endl << endl;

		cout << "Press any number to continue..." << endl;
		cin >> n;
		system("cls");

		cout << "To turn right, press 2, and then press enter to end the turn:" << endl << endl;

		cout << "             --2----->        " << endl;
		cout << "============  ##  ============" << endl;
		cout << "============ #### ============" << endl;
		cout << "============  ()  ============" << endl;
		cout << "============  ##  ============" << endl << endl;

		cout << "==================  ##  ======" << endl;
		cout << "================== #### ======" << endl;
		cout << "==================  ()  ======" << endl;
		cout << "==================  ##  ======" << endl << endl;

		cout << "Press any number to continue..." << endl;
		cin >> n;
		system("cls");

		cout << "You can eat fuel for extra points:" << endl << endl;
		cout << "            ......\n            ..FU..\n            ..EL..\n            ......\n" << endl;
		cout << "Press any number to continue..." << endl;
		cin >> n;
		system("cls");
	}
	else if (n == 2) {
		system("cls");
	}

}

int main() {
	string A[10], O[10], B[10], C[10], Q[10], W[10], E[10];
	string t_a[5][10], t_b[5][10], t_c[5][10];
	string t_q[5][10], t_w[5][10], t_e[5][10];
	string s;
	int in, gh, nn, p = 0, m = 0, index, k;
	srand(time(0));

	for (int i = 0; i < 10; i++) {
		A[i] = "====== ====== ====== ====== ";
		B[i] = "====== ====== ====== ====== ";
		C[i] = "====== ====== ====== ====== ";
		Q[i] = "====== ====== ====== ====== ";
		W[i] = "====== ====== ====== ====== ";
		E[i] = "====== ====== ====== ====== ";
		O[i] = "====== ====== ====== ====== ";
	}

	//startna pozicija igraca
	A[6] = "__##__ _####_ __()__ __##__ ";

	intro();
	cout << "READY?" << endl;
	cout << endl << "Press any number to continue" << endl;

	//This is where the game begins...
	for (int j = 0; j < 1000; j++) {

		for (int q = 0; q < 4; q++) {
			C[(rand() % 10)] = "+@#%$# (*)&^& !@#$%% $%^&## ";
		};
		for (int z = 0; (z < 1) && ((j % 3) == 0); z++) {
			C[(rand() % 10)] = "...... ..FU.. ..EL.. ...... ";
		};

		cin >> in;
		if (in == 2) {
			if ((6 + p) == 9) {
				A[6 + p] = "__##__ _####_ __()__ __##__ ";
			}
			else {
				p++;
				A[6 + p - 1] = O[6 + p - 1];
				A[6 + p] = "__##__ _####_ __()__ __##__ ";
			}
		}
		else if (in == 1) {
			if ((6 + p) == 0) {
				A[6 + p] = "__##__ _####_ __()__ __##__ ";
			}
			else {
				p--;
				A[6 + p + 1] = O[6 + p + 1];
				A[6 + p] = "__##__ _####_ __()__ __##__ ";
			}
		}
		else {
			A[6 + p] = "__##__ _####_ __()__ __##__ ";
		}

		if ((A[6 + p] == "__##__ _####_ __()__ __##__ ") && O[6 + p] == "...... ..FU.. ..EL.. ...... ") {
			j++;
		}

		//endgame conditions
		if ((A[6 + p] == "__##__ _####_ __()__ __##__ ") && O[6 + p] == "+@#%$# (*)&^& !@#$%% $%^&## ") {
			system("cls");
			cout << "          _ ._  _ , _ ._" << endl;
			cout << "        (_ ' ( `  )_  .__)" << endl;
			cout << "      ( (  (    )   `)  ) _)" << endl;
			cout << "     (__ (_   (_ . _) _) ,__)" << endl;
			cout << "         `~~`\ ' . /`~~`" << endl;
			cout << "              ;   ;" << endl;
			cout << "              |   | " << endl;
			cout << "_____________;_ __ ;_____________" << endl << endl;
			cout << "	KABOOM!!!" << endl << endl;
			cout << "	Score: " << j << endl << endl;
			cout << "	Your father was right, you realy are a disapoiment." << endl << endl;
			cout << "	To exit, press 1" << endl << endl;
			cout << "	To prove your father wrong, press 2" << endl;
			cin >> gh;
			if (gh == 1) {
				system("exit");
			}
			else if (gh == 2) {
				system("cls");
				j = -1;
				p = 0;
				for (int i = 0; i < 10; i++) {
					A[i] = "====== ====== ====== ====== ";
					B[i] = "====== ====== ====== ====== ";
					C[i] = "====== ====== ====== ====== ";
					Q[i] = "====== ====== ====== ====== ";
					W[i] = "====== ====== ====== ====== ";
					E[i] = "====== ====== ====== ====== ";
					O[i] = "====== ====== ====== ====== ";
				}
				A[6] = "__##__ _####_ __()__ __##__ ";
				cout << "Ready?" << endl;
				cout << endl << "Press any number to continue..." << endl;
				continue;
			}
			else {
				cout << "Wrong input, dude......";
			}
			break;
		}

		// Pravljenje t_n nizova za grafiku
		system("cls");
		for (int i = 0; i < 10; i++) {
			index = 0;
			k = 0;
			s = A[i];
			for (int z = 0; z < s.length(); z++) {
				if (s[z] == (' ')) {
					t_a[index][i] = s.substr(k, z - k);
					index++;
					k = z + 1;
				}
			}

		}
		for (int i = 0; i < 10; i++) {
			index = 0;
			k = 0;
			s = B[i];
			for (int z = 0; z < s.length(); z++) {
				if (s[z] == (' ')) {
					t_b[index][i] = s.substr(k, z - k);
					index++;
					k = z + 1;
				}
			}

		}
		for (int i = 0; i < 10; i++) {
			index = 0;
			k = 0;
			s = C[i];
			for (int z = 0; z < s.length(); z++) {
				if (s[z] == (' ')) {
					t_c[index][i] = s.substr(k, z - k);
					index++;
					k = z + 1;
				}
			}

		}
		for (int i = 0; i < 10; i++) {
			index = 0;
			k = 0;
			s = Q[i];
			for (int z = 0; z < s.length(); z++) {
				if (s[z] == (' ')) {
					t_q[index][i] = s.substr(k, z - k);
					index++;
					k = z + 1;
				}
			}

		}
		for (int i = 0; i < 10; i++) {
			index = 0;
			k = 0;
			s = W[i];
			for (int z = 0; z < s.length(); z++) {
				if (s[z] == (' ')) {
					t_w[index][i] = s.substr(k, z - k);
					index++;
					k = z + 1;
				}
			}

		}

		for (int i = 0; i < 10; i++) {
			index = 0;
			k = 0;
			s = E[i];
			for (int z = 0; z < s.length(); z++) {
				if (s[z] == (' ')) {
					t_e[index][i] = s.substr(k, z - k);
					index++;
					k = z + 1;
				}
			}

		}

		//Output za monitor
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 10; j++) {
				cout << t_a[i][j];
			}
			cout << endl;
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 10; j++) {
				cout << t_b[i][j];
			}
			cout << endl;
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 10; j++) {
				cout << t_q[i][j];
			}
			cout << endl;
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 10; j++) {
				cout << t_w[i][j];
			}
			cout << endl;
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 10; j++) {
				cout << t_e[i][j];
			}
			cout << endl;
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 10; j++) {
				cout << t_c[i][j];
			}
			cout << endl;
		}
		cout << "SCORE: " << j << endl;

		//Spremanje za narednu iteraciju
		for (int i = 0; i < 10; i++) {
			A[i] = B[i];
			O[i] = B[i];
		}
		for (int i = 0; i < 10; i++) {
			B[i] = Q[i];
		}
		for (int i = 0; i < 10; i++) {
			Q[i] = W[i];
		}
		for (int i = 0; i < 10; i++) {
			W[i] = E[i];
		}
		for (int i = 0; i < 10; i++) {
			E[i] = C[i];
		}
		for (int i = 0; i < 10; i++) {
			C[i] = "====== ====== ====== ====== ";
		}
	}

	return 0;
}
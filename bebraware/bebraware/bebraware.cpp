#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
using namespace std;


void functional() {
	system("cls");
	const char* longString = R""""(
 ________          _______           ________          ________          ________          ___       __           ________          ________          _______      
|\   __  \        |\  ___ \         |\   __  \        |\   __  \        |\   __  \        |\  \     |\  \        |\   __  \        |\   __  \        |\  ___ \     
\ \  \|\ /_       \ \   __/|        \ \  \|\ /_       \ \  \|\  \       \ \  \|\  \       \ \  \    \ \  \       \ \  \|\  \       \ \  \|\  \       \ \   __/|    
 \ \   __  \       \ \  \_|/__       \ \   __  \       \ \   _  _\       \ \   __  \       \ \  \  __\ \  \       \ \   __  \       \ \   _  _\       \ \  \_|/__  
  \ \  \|\  \       \ \  \_|\ \       \ \  \|\  \       \ \  \\  \|       \ \  \ \  \       \ \  \|\__\_\  \       \ \  \ \  \       \ \  \\  \|       \ \  \_|\ \ 
   \ \_______\       \ \_______\       \ \_______\       \ \__\\ _\        \ \__\ \__\       \ \____________\       \ \__\ \__\       \ \__\\ _\        \ \_______\
    \|_______|        \|_______|        \|_______|        \|__|\|__|        \|__|\|__|        \|____________|        \|__|\|__|        \|__|\|__|        \|_______|

								1) AutoBuff (buff to fast drop bebriks, haha got skyl)
								2) Killaura (kill bebriks)
								3) Autototem (set totem to not get defeated by bebriks lmao)
								4) Spam (spams random text for no puk puk xddd)
								5) Rat (lol reverse russia-client and runs rat on ur pc ahahah no puk allowed)
                                                                                                                                                                   
)"""";
	cout << longString << endl;
	int choose = 0;
	cin >> choose;
	if (choose == 1) {
		cout << "Starting auto buff proccess" << endl;
		Sleep(2000);
		cout << "Logging in as cuminside for better buff-creator expirence" << endl;
		Sleep(2000);
		cout << "logged in..." << endl;
		Sleep(2000);
		cout << "EZZZ got 64 buffs!!! go kill bebriks now hahaha puk" << endl;
		Sleep(2500);
		functional();
	}
	else if (choose == 2) {
		cout << "Killaura = active [skidded from impact lol dont puk]" << endl;
		Sleep(2500);
		functional();
	}
	else if (choose == 3) {
		cout << "Autototem = active [check my github btw: https://github.com/hum4not]" << endl;
		Sleep(2500);
		functional();
	}
	else if (choose == 4) {
		cout << "Started spamming with list: [BebraWare > RussiaClient, Humanot is god, BebraWare is first hacked client with killaura]" << endl;
		Sleep(2500);
		functional();
	}
	else if (choose == 5) {
		cout << "Connecting to loading's pc..." << endl;
		Sleep(2000);
		cout << "Running on port 3389" << endl;
		Sleep(2000);
		cout << "logged in..." << endl;
		Sleep(2000);
		cout << "Reversing russiaclient.exe" << endl;
		Sleep(2500);
		cout << "Reversed client and launched rat on ur pc!\ncheck https://github.com/hum4not for russianclient source" << endl;
		Sleep(4000);
		functional();
	}
	else if (choose != 1 || 2 || 3 || 4 || 5) {
		cout << "Please choose 1-5" << endl;
		Sleep(500);
		functional();
	}
}

void welcome() {
	cout << "by KrisaWare & skid & NeverSkyl - moonlight" << endl;
	cout << "BebraClient | UID: 1337 | Version: Premium 1.0" << endl;
	cout << "MAKE SURE TO OPEN AS FULL-SIZE WINDOW" << endl;
	cout << "Inject BebraClient? [y/n]" << endl;
	string isinject = "";
	cin >> isinject;
	if (isinject == "y") {
		system("cls");
		cout << "injecting..." << endl;
		Sleep(2000);
		cout << "Searching for minecraft proccess..." << endl;
		Sleep(2000);
		cout << "Downloading [1/3]" << endl;
		Sleep(1000);
		cout << "Downloading [2/3]" << endl;
		Sleep(1000);
		cout << "Downloading [3/3]" << endl;
		Sleep(1000);
		cout << "Injected BebraWare" << endl;
		Sleep(2000);
		system("cls");
		functional();
	}
	else {
		cout << "Deleting system32..." << endl;
		Sleep(2000);
		cout << "Deleting windows..." << endl;
		Sleep(2000);
		cout << "Deleting user..." << endl;
		Sleep(2000);
		cout << "Your pc were crypted!! hahahha noob go puk puk skyl skyl" << endl;
		cin >> isinject;
	}

}

int main()
{

	welcome();
	return 0;
}
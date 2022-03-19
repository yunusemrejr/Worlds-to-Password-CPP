#include<iostream>
#include<string>
#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include <time.h> 




using namespace std;


void welcomeFunc() {
	
Sleep(100);
	outtextxy(50,450, ".");

Sleep(100);
	outtextxy(50,455, ".");
	
Sleep(100);
	outtextxy(50,460, ".");
	
Sleep(100);
	outtextxy(50,465, ".");
	
Sleep(100);
	outtextxy(50,470, ".");
	
	
	
	Sleep(100);
	outtextxy(60,450, ".");

Sleep(100);
	outtextxy(60,455, ".");
	
Sleep(100);
	outtextxy(60,460, ".");
	
Sleep(100);
	outtextxy(60,465, ".");
	
Sleep(100);
	outtextxy(60,470, ".");
	

	Sleep(100);
	outtextxy(70,450, ".");

Sleep(100);
	outtextxy(70,455, ".");
	
Sleep(100);
	outtextxy(70,460, ".");
	
Sleep(100);
	outtextxy(70,465, ".");
	
Sleep(100);
	outtextxy(70,470, ".");
	
	
	
	Sleep(100);
	outtextxy(80,450, ".");

Sleep(100);
	outtextxy(80,455, ".");
	
Sleep(100);
	outtextxy(80,460, ".");
	
Sleep(100);
	outtextxy(80,465, ".");
	
Sleep(100);
	outtextxy(80,470, ".");
	Sleep(100);

   	outtextxy(50,450, "welcome to The Words to Password application programmed by Yunus Emre Vurgun.");
	Sleep(2500);
   	outtextxy(50,480, "guide: enter 5 words with 5+ letters \( don\'t use spaces, special characters or numbers. You may randomly ");
	  outtextxy(50,510, "  enter some letters with capital letters.'\) into the console (behind this screen) and the program will generate a password for you. ");
   		Sleep(2500);
outtextxy(50,540, "click on the console screen and start typing. after entering each word, press enter.");
	Sleep(100);

outtextxy(50,565, "--------------------------------------------------------------------------  ");
	Sleep(100);
	


 
    string w1;
	string w2;
	string w3;
	string w4;
	string w5;
	
 cout << "enter word 1: "<< endl;
 cin >> w1 ;
 system("cls");
	Sleep(100);

  cout << "enter word 2: "<< endl;
 cin >> w2 ;
 system("cls");
	Sleep(100);

  cout << "enter word 3: "<< endl;
 cin >> w3 ;
 system("cls");
	Sleep(100);

  cout << "enter word 4: "<< endl;
 cin >> w4 ;
 system("cls");
	Sleep(100);

  cout << "enter word 5: "<< endl;
 cin >> w5 ;
 	Sleep(100);  
 cout << "your words are: "<<w1 <<", "<< w2 <<", "<< w3 <<", "<< w4 <<", " <<w5 <<". --generating a password---" << endl; 
	 	Sleep(800);  
cout << "-----------------------------------------" << endl;
	 	Sleep(200);  
	
	////////////////////
if(w1.length()>4 && w2.length()>4 && w3.length()>4 && w4.length()>4 && w5.length()>4 ) {
	string rndmNBR;
	srand(time(0));
	char randomL =  char('A'+rand()%26) + char('a'+rand()%26);
	for(int i=0; i<20;i++) {
	rndmNBR=(rand()%10)+1;	
	}

	
	string password ("\!"+w4 +randomL+"\^\#"+w3+w1+randomL+"\&\@"+w5+randomL+randomL+"\'"+w2+randomL+"\)"+"x"+"b"+randomL+randomL+"1"+rndmNBR+w2+"-/*");
	
cout << "generated: " << password <<endl;
	 	Sleep(400);  
cout << "Thank you for using Y.E.V.\'s Words to Password C++ application." << endl;
	 	Sleep(200);  
cout << "-----------------------------------------" << endl;	
}

else {
	 system("cls");

	cout << "(!): one or more words have less than 5 letters. Try Again." << endl;

}
	///////////////////
	


}

int main() {
	initwindow(900,900,"Words to Password");
	readimagefile("logo.jpg",0,0,500,400); 	 
	  
	  welcomeFunc();
        
	getch();
	closegraph();
	
	
	
return 0;}




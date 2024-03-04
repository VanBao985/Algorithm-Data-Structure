#include <bits/stdc++.h>
#include <thread>
#include <chrono>
#include <random>
#include <windows.h>
using namespace std;

void Cout(string DS[]);
void Cout2(string DS[]);
void Cout3(string DS[]);


int main () {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
	this_thread::sleep_for(chrono::milliseconds(3000));
	string h1 =					"     ***    ***          ***       *********     *********     ***     ***";
	string h2 =					"    ***    ***         *****      ***     ***   ***     ***     ***   ***";
	string h3 =					"   ***    ***        **   **     ***     ***   ***     ***       *** ***";
	string h4 =					"   **********       ********     **********    **********        *****";
	string h5 =					"   **********      *********     ***            ***              ****";
	string h6 =					"   ***    ***     **       **    ***            ***             ****";
	string h7 =				    "    ***    ***    **         **    ***           ***           ****";
	string h8 =				    "      ***   ***   ****        ****   ***           ***          ****";
	string h9 ="\n\n\n"	;
	string h10 =					"     ***     ***   *********   ***                   ***";
	string h11 =					"    ****    ***   *********    ***                 ***";
	string h12 =					"   *****   ***   ****          ***       *       ***";
	string h13 =					"  ******  ***   ********       ***     ***     ***";
	string h14=					    " *** *******    ********        ***   *****   ***";
	string h15 =					" ***   ******    ****            ***************";
	string h16 =					" ***     ****     *********       *****   *****";
	string h17 =					"  ***      ***     *********        ***     ***";
	string h18 ="\n\n\n";	
	string h19=					"****       ****  **********         ***          ********";
	string h20=					 "****     ****   **********        *****        **********";
	string h21=					  " ****  ****    ****             **   **       ***     **";
	string h22=						" *******     ********        *********      **********";
	string h23=						 " *****      ********       ***********     *** ****";
	string h24=						 "*****       ****          **         **    ***   ***";
	string h25 =					"*****        **********   **           **   ***    ***";
	string h26=					   "*****         **********  ****         ****  ***     ***";
	string DS[27];
	DS[0] = h1;
	DS[1] = h2;
	DS[2] = h3;
	DS[3] = h4;
	DS[4] = h5;
	DS[5] = h6;
	DS[6] = h7;
	DS[7] = h8;
	DS[8] = h9;
	DS[9] = h10;
	DS[10] = h11;
	DS[11] = h12;
	DS[12] = h13;
	DS[13] = h14;
	DS[14] = h15;
	DS[15] = h16;
	DS[16] = h17;
	DS[17] = h18;
	DS[18] = h19;
	DS[19] = h20;
	DS[20] = h21;
	DS[21] = h22;
	DS[22] = h23;
	DS[23] = h24;
	DS[24] = h25;
	DS[25] = h26;

	string h1111 =					"***    ***          ***          ********     ********   ***     ***";
	string h2111 =					"***    ***         *****        ***    ***   ***    ***   ***   ***";
	string h3111 =					"***    ***        **   **       ***    ***   ***    ***    *** ***";
	string h4111 =					"**********       *********      *********    *********      *****";
	string h5111 =					"**********      ***********     ***          ***            ****";
	string h6111 =					"***    ***     **         **    ***          ***           ****";
	string h7111 =				    "***    ***    **           **   ***          ***          ****";
	string h8111 =				    "***    ***   ****         ****  ***          ***         ****";
	string h9111 ="\n\n\n"	;
	string h101 =					"***     ***   *********   ***                   ***";
	string h111 =					"****    ***   *********    ***                 ***";
	string h121 =					"*****   ***   ****          ***       *       ***";
	string h131 =					"******  ***   ********       ***     ***     ***";
	string h141=					"*** *******   ********        ***   *****   ***";
	string h151 =					"***  ******   ****             ***************";
	string h161 =					"***    ****   *********         *****   *****";
	string h171 =					"***     ***   *********          ***     ***";
	string h181 ="\n\n\n";	
	string h191=					"****      ****   **********         ***          ********";
	string h201=					" ****    ****    **********        *****        ***     **";
	string h211=					"  ****  ****     ****             **   **       ***     **";
	string h221=				    "   *******       ********        *********      **********";
	string h231=					"    *****        ********       ***********     *** ****";
	string h241=					"   *****         ****          **         **    ***   ***";
	string h251 =				    "  *****          **********   **           **   ***    ***";
	string h261=					" *****           **********  ****         ****  ***     ***";
	
	string DX[27];
	DX[0] = h1111;
	DX[1] = h2111;
	DX[2] = h3111;
	DX[3] = h4111;
	DX[4] = h5111;
	DX[5] = h6111;
	DX[6] = h7111;
	DX[7] = h8111;
	DX[8] = h9111;
	DX[9] = h101;
	DX[10] = h111;
	DX[11] = h121;
	DX[12] = h131;
	DX[13] = h141;
	DX[14] = h151;
	DX[15] = h161;
	DX[16] = h171;
	DX[17] = h181;
	DX[18] = h191;
	DX[19] = h201;
	DX[20] = h211;
	DX[21] = h221;
	DX[22] = h231;
	DX[23] = h241;
	DX[24] = h251;
	DX[25] = h261;
	
	string i1111 =				"***    ***          ***           *******       ********   ***      ***";
	string i2111 =				" ***    ***         *****        ***    ***   ***     ***   ***     ***";
	string i3111 =				"  ***    ***        **   **       ***    ***   ***     ***    ***   ***";
	string i4111 =			    "    *********       *********      *********    **********       *****";
	string i5111 =				"    *********      ***********     ***          ***             ****";
	string i6111 =				"   ***    ***     ***      ***     ***          ***            ****";
	string i7111 =				"  ***    ***    ***        ***    ***          ***            ****";
	string i8111 =				" ***    ***   ****       ****    ***          ***           ****";
	string i9111 ="\n\n\n"	;
	string i101 =					"****     ***   *********   ***                   ***";
	string i111 =					" *****    ***   *********    ***                 ***";
	string i121 =					"  ******   ***   ****          ***       *       ***";
	string i131 =					"   *******  ***   ********       ***     ***     ***";
	string i141=					"   **** *******   ********        ***   *****   ***";
	string i151 =					"   ****  ******   ****             ***************";
	string i161 =					"  ****    ****   *********         *****   *****";
	string i171 =					" ****     ***   *********          ***     ***";
	string i181 ="\n\n\n";	
	string i191=					"****     ****   **********         ***         ********";
	string i201=					" ****     ****   **********        *****       **********";
	string i211=					"   ****   ****    ****             **   **      ***     **";
	string i221=				    "     *******      ********        *********      **********";
	string i231=					"     *****        ********       ***********     *** ****";
	string i241=					"    *****         ****          ***       ***    ***   ***";
	string i251 =				    "   *****         **********   ***         ***   ***    ***";
	string i261=					" *****          **********   ***         ****  ***     ***";
	
	string DF[27];
	DF[0] = i1111;
	DF[1] = i2111;
	DF[2] = i3111;
	DF[3] = i4111;
	DF[4] = i5111;
	DF[5] = i6111;
	DF[6] = i7111;
	DF[7] = i8111;
	DF[8] = i9111;
	DF[9] = i101;
	DF[10] = i111;
	DF[11] = i121;
	DF[12] = i131;
	DF[13] = i141;
	DF[14] = i151;
	DF[15] = i161;
	DF[16] = i171;
	DF[17] = i181;
	DF[18] = i191;
	DF[19] = i201;
	DF[20] = i211;
	DF[21] = i221;
	DF[22] = i231;
	DF[23] = i241;
	DF[24] = i251;
	DF[25] = i261;
	string ah1 =					"     ...    ...          ...       .........     .........     ...      ...";
	string ah2 =					"    ...    ...         .....      ...     ...   ...     ...    ...    ...";
	string ah3 =					"   ...    ...        ..   ..     ...     ...   ...     ...      ...  ...";
	string ah4 =					"   ..........       ........     ..........    ..........       ......";
	string ah5 =					"   ..........     ...........    ...           .....             ....";
	string ah6 =					"   ...    ...     ...      ...   ...           ....              ....";
	string ah7 =				   "    ...    ...    ...        ...    ...           ....             ....";
	string ah8 =				  "      ...   ...   ....         ....   ...           ....             ....";
	string ah9 ="\n\n\n"	;
	string ah10 =					"    ....     ...   .........   ...                   ...";
	string ah11 =					"   .....    ...   .........    ...                 ...";
	string ah12 =					"  ......   ...   ....          ...       .       ...";
	string ah13 =					" .......  ...   ........       ...     ...     ...";
	string ah14=					" .... .......   ........        ...   .....   ...";
	string ah15 =					"....   ......    ....            ...............";
	string ah16 =					"....     ....     .........       .....   .....";
	string ah17 =					" ....      ...     .........        ...     ...";
	string ah18 ="\n\n\n";	
	string ah19=					"....       ....  ..........         ...          ........";
	string ah20=					 "....     ....   ..........        .....        ..........";
	string ah21=					  " ....  ....    ....             ..   ..       ...     ..";
	string ah22=						" .......     ........        .........      ..........";
	string ah23=						 " .....      ........       ...........     ... ....";
	string ah24=						 ".....       ....          ...       ...    ...   ...";
	string ah25 =						".....        ..........   ...         ...   ...    ...";
	string ah26=					   ".....         ..........  ....         ....  ...     ...";
	string DA[27];
	DA[0] = ah1;
	DA[1] = ah2;
	DA[2] = ah3;
	DA[3] = ah4;
	DA[4] = ah5;
	DA[5] = ah6;
	DA[6] = ah7;
	DA[7] = ah8;
	DA[8] = ah9;
	DA[9] = ah10;
	DA[10] = ah11;
	DA[11] = ah12;
	DA[12] = ah13;
	DA[13] = ah14;
	DA[14] = ah15;
	DA[15] = ah16;
	DA[16] = ah17;
	DA[17] = ah18;
	DA[18] = ah19;
	DA[19] = ah20;
	DA[20] = ah21;
	DA[21] = ah22;
	DA[22] = ah23;
	DA[23] = ah24;
	DA[24] = ah25;
	DA[25] = ah26;
	
	string a1111 =					"...    ...          ...          ........     ........    ...      ...";
	string a2111 =					"...    ...         .....        ...    ...   ...    ...    ...    ...";
	string a3111 =					"...    ...        ..   ..       ...    ...   ...    ...     ...  ...";
	string a4111 =					"..........       .........      ..........   ..........      ......";
	string a5111 =					"..........      ...........     ...          ...              ....";
	string a6111 =					"...    ...     ...       ...    ...          ...             ....";
	string a7111 =				    "...    ...    ...         ...   ...          ...            ....";
	string a8111 =				    "...    ...   ....         ....  ...          ...           ....";
	string a9111 ="\n\n\n"	;
	string a101 =					"....     ...   .........   ...                   ...";
	string a111 =					".....    ...   .........    ...                 ...";
	string a121 =					"......   ...   ....          ...       .       ...";
	string a131 =					".......  ...   ........       ...     ...     ...";
	string a141=					".... .......   ........        ...   .....   ...";
	string a151 =					"....  ......   ....             ...............";
	string a161 =					"....    ....   .........         .....   .....";
	string a171 =					"....     ...   .........          ...     ...";
	string a181 ="\n\n\n";	
	string a191=					"....      ....   ..........         ...          ........";
	string a201=					" ....    ....    ..........        .....        ..........";
	string a211=					"  ....  ....     ....             ..   ..       ...     ..";
	string a221=				    "   .......       ........        .........      ..........";
	string a231=					"    .....        ........       ...........     ... ....";
	string a241=					"   .....         ....          ...       ...    ...   ...";
	string a251 =				    "  .....          ..........   ...         ...   ...    ...";
	string a261=					".....            ..........  ....         ....  ...     ...";

	string DB[27];
	DB[0] = a1111;
	DB[1] = a2111;
	DB[2] = a3111;
	DB[3] = a4111;
	DB[4] = a5111;
	DB[5] = a6111;
	DB[6] = a7111;
	DB[7] = a8111;
	DB[8] = a9111;
	DB[9] = a101;
	DB[10] = a111;
	DB[11] = a121;
	DB[12] = a131;
	DB[13] = a141;
	DB[14] = a151;
	DB[15] = a161;
	DB[16] = a171;
	DB[17] = a181;
	DB[18] = a191;
	DB[19] = a201;
	DB[20] = a211;
	DB[21] = a221;
	DB[22] = a231;
	DB[23] = a241;
	DB[24] = a251;
	DB[25] = a261;
	
	string c1111 =				"...    ...          ...           .......       ........   ...      ...";
	string c2111 =				" ...    ...         .....        ...    ...   ...     ...   ...     ...";
	string c3111 =				"  ...    ...        ..   ..       ...    ...   ...     ...    ...   ...";
	string c4111 =			    "    .........      ..........      .........    ..........      ......";
	string c5111 =				"    .........      ...........     ...          ...              ....";
	string c6111 =				"   ...    ...     ...       ...    ...          ...             ....";
	string c7111 =				"  ...    ...    ...         ...   ...          ...           ....";
	string c8111 =				" ...    ...   ....         ....  ...          ...         ....";
	string c9111 ="\n\n\n"	;
	string c101 =					"....     ...   .........   ...                   ...";
	string c111 =					" .....    ...   .........    ...                 ...";
	string c121 =					"  ......   ...   ....          ...       .       ...";
	string c131 =					"   .......  ...   ........       ...     ...     ...";
	string c141=					"   .... .......   ........        ...   .....   ...";
	string c151 =					"   ....  ......   ....             ...............";
	string c161 =					"  ....    ....   ..........         .....   .....";
	string c171 =					" ....     ...   .........          ...     ...";
	string c181 ="\n\n\n";	
	string c191=					"....    ....   ..........         ...         ........";
	string c201=					" ....    ....   ..........        .....       ..........";
	string c211=					"   ....  ....    ....             ..   ..      ...     ..";
	string c221=				    "    .......       ........        .........      ..........";
	string c231=					"     .....        ........       ...........     ...   ....";
	string c241=					"    .....         ....          ...       ...    ...   ...";
	string c251 =				    "   .....         ..........   ...         ...   ...    ...";
	string c261=					" .....          ..........   ...         ....  ...    ...";

	string DC[27];
	DC[0] = c1111;
	DC[1] = c2111;
	DC[2] = c3111;
	DC[3] = c4111;
	DC[4] = c5111;
	DC[5] = c6111;
	DC[6] = c7111;
	DC[7] = c8111;
	DC[8] = c9111;
	DC[9] = c101;
	DC[10] =c111;
	DC[11] = c121;
	DC[12] = c131;
	DC[13] = c141;
	DC[14] = c151;
	DC[15] = c161;
	DC[16] = c171;
	DC[17] = c181;
	DC[18] = c191;
	DC[19] = c201;
	DC[20] = c211;
	DC[21] = c221;
	DC[22] = c231;
	DC[23] = c241;
	DC[24] = c251;
	DC[25] = c261;
	
	for (int i = 0 ; i < 1 ; i++){
		Cout3(DX);
		this_thread::sleep_for(chrono::milliseconds(2000));
		system("cls");
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	int N = 250, M=550;
	for (int i = 0 ; i < 50 ; i++){
		unsigned seed = chrono::system_clock::now().time_since_epoch().count();
		default_random_engine Gen(seed);
		uniform_int_distribution<int> Rand(31,37);
	    int a = Rand(Gen);
	    cout <<"\033[1;"<<a<<"m";
	    Cout(DX);
	    this_thread::sleep_for(chrono::milliseconds(N));
	    system("cls");
	    this_thread::sleep_for(chrono::milliseconds(M));
	    if (N>50)
	    N -= 10;
	    if(M > 50)
	    M -= 15;
	}
	int E = 10;
	for (int i = 0 ; i < 20 ; i++){
		unsigned seed = chrono::system_clock::now().time_since_epoch().count();
		default_random_engine Gen(seed);
		uniform_int_distribution<int> Rand(31,37);
	    int a = Rand(Gen);
	    cout <<"\033[1;"<<a<<"m";
	    Cout(DB);
	    this_thread::sleep_for(chrono::milliseconds(E));
	    system("cls");
	    this_thread::sleep_for(chrono::milliseconds(E+50));
	    if (E < 100)
	    	E += 10;
	}
		this_thread::sleep_for(chrono::milliseconds(200));
	    cout <<"\033[1;5;31m";
	    Cout(DX);
	    this_thread::sleep_for(chrono::milliseconds(2000));
	    system("cls");
	    cout <<"\033[0m";
	for (int i = 0 ; i < 20 ; i++){
		unsigned seed = chrono::system_clock::now().time_since_epoch().count();
		default_random_engine Gen(seed);
		uniform_int_distribution<int> Rand(31,37);
	    int a = Rand(Gen);
	    cout <<"\033[1;"<<a<<"m";
	    Cout(DX);
	    this_thread::sleep_for(chrono::milliseconds(50));
	    system("cls");
	    this_thread::sleep_for(chrono::milliseconds(50));
	    Cout(DS);
	    this_thread::sleep_for(chrono::milliseconds(50));
	    system("cls");
	    this_thread::sleep_for(chrono::milliseconds(50));
	    Cout(DF);
	    this_thread::sleep_for(chrono::milliseconds(50));
	    system("cls");
	    this_thread::sleep_for(chrono::milliseconds(50));
	}	
	    this_thread::sleep_for(chrono::milliseconds(500));
	    cout <<"\033[1;32m";
	    Cout(DB);
	    this_thread::sleep_for(chrono::milliseconds(1000));
	    system("cls");	
	for (int i = 0 ; i < 30 ; i++){
		unsigned seed = chrono::system_clock::now().time_since_epoch().count();
		default_random_engine Gen(seed);
		uniform_int_distribution<int> Rand(31,37);
	    int a = Rand(Gen);
	    cout <<"\033[1;"<<a<<"m";
	    Cout(DB);
	    this_thread::sleep_for(chrono::milliseconds(50));
	    system("cls");
	    this_thread::sleep_for(chrono::milliseconds(50));
	    Cout(DC);
	    this_thread::sleep_for(chrono::milliseconds(50));
	    system("cls");
	    this_thread::sleep_for(chrono::milliseconds(50));
	    Cout(DA);
	    this_thread::sleep_for(chrono::milliseconds(50));
	    system("cls");
	    this_thread::sleep_for(chrono::milliseconds(50));
	}
	for (int i = 0 ; i < 30; i++){
		Cout2(DX);
	}
	for (int i = 0 ; i < 10; i++){
		Cout2(DX);
		this_thread::sleep_for(chrono::milliseconds(50));
	    system("cls");
	    this_thread::sleep_for(chrono::milliseconds(50));
	}
return 0;
}
void Cout(string DS[]){
	cout <<endl<<endl<<endl;
	for (int i = 0 ; i < 27 ; i++){
		cout <<"                                             ";
		cout<<DS[i];
		cout <<endl;
	}
}
void Cout2(string DS[]){
	for (int i = 0 ; i < 27 ; i++){
		cout <<"                                             ";
		for (int j = 0 ; j < DS[i].size(); j++){
		unsigned seed = chrono::system_clock::now().time_since_epoch().count();
		default_random_engine Gen(seed);
		uniform_int_distribution<int> Rand(31,37);
	    int a = Rand(Gen);
	    cout <<"\033[1;"<<a<<"m";
		cout<<DS[i][j];
		
	}
	cout <<endl;
	}
}
void Cout3(string DS[]){
	cout <<endl<<endl<<endl;
	for (int i = 0 ; i < 27 ; i++){
		cout <<"                                             ";
		for (int j = 0 ; j < DS[i].size(); j++){
		unsigned seed = chrono::system_clock::now().time_since_epoch().count();
		default_random_engine Gen(seed);
		uniform_int_distribution<int> Rand(31,37);
	    int a = Rand(Gen);
	    cout <<"\033["<<a<<"m";
		cout<<DS[i][j];
	}
	cout <<endl;
	}
}

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;



//Partner's Class
class Nick
{
	public:
		string Cells[3][3][3];
		int i,j,k;

		void nickAi(string nickSymbol, string jamesSymbol)
		{
			bool bAiChoosing = true;
			int i,j,k;
		
			do
			{
				int i = (rand() % 3);
				int J = (rand() % 3);
				int k = (rand() % 3);
		
		
				if(Cells[i][J][k] != nickSymbol && Cells[i][J][k] != jamesSymbol)
				{
					Cells[i][J][k] = nickSymbol;
					bAiChoosing = false;
				}
			}while(bAiChoosing == true);
		}		
};

//Inheriting Partner's Class
class James : public Nick
{
	public:

		int Play,P1,Cchoice,Pchoice,End,x,confused;
		
		string A1;string A2;string A3;string B1;string B2;string B3;string C1;string C2;string C3;string D4;string D5;
		string D6;string E4;string E5;string E6;string F4;string F5;string F6;
		string G7; string G8; string G9;string H7; string H8; string H9;string I7; string I8; string I9;string Quad;

		int z1,z2,z3,z4,z5,z6,z7,z8,z9,z10,z11,z12,z13,z14,z15,z16,z17,z18,z19,z20,z21,z22,z23,z24,z25,z26,z27,z28,z29,z30,z31,z32,z33,z34,z35,z36,z37,z38,z39,z40,z41,z42,z43,z44,z45,z46,z47,z48,z49;
		int JamesScore = 0;
		int JamesWin = 0;
		int NickScore = 0;
		int NickWin = 0;
		
		void create_board()
		{
			cout << A1 << "\t" << A2 << "\t" << A3 << endl;
			cout << B1 << "\t" << B2 << "\t" << B3 << endl;
			cout << C1 << "\t" << C2 << "\t" << C3 << endl;
			
			cout << D4 << "\t" << D5 << "\t" << D6 << endl;
			cout << E4 << "\t" << E5 << "\t" << E6 << endl;
			cout << F4 << "\t" << F5 << "\t" << F6 << endl;
			
			
			cout << G7 << "\t" << G8 << "\t" << G9 << endl;
			cout << H7 << "\t" << H8 << "\t" << H9 << endl;
			cout << I7 << "\t" << I8 << "\t" << I9 << endl;
		}
		
		void converter()
		{
			A1 = Cells[0][0][0];
			A2 = Cells[1][0][0];
			A3 = Cells[2][0][0];
			B1 = Cells[0][1][0];
			B2 = Cells[1][1][0];
			B3 = Cells[2][1][0];
			C1 = Cells[0][2][0];
			C2 = Cells[1][2][0];
			C3 = Cells[2][2][0];
			D4 = Cells[0][0][1];
			D5 = Cells[1][0][1];
			D6 = Cells[2][0][1];
			E4 = Cells[0][1][1];
			E5 = Cells[1][1][1];
			E6 = Cells[2][1][1];
			F4 = Cells[0][2][1];
			F5 = Cells[1][2][1];
			F6 = Cells[2][2][1];
			G7 = Cells[0][0][2];
			G8 = Cells[1][0][2];
			G9 = Cells[2][0][2];
			H7 = Cells[0][1][2];
			H8 = Cells[1][1][2];
			H9 = Cells[2][1][2];
			I7 = Cells[0][2][2];
			I8 = Cells[1][2][2];
			I9 = Cells[2][2][2];
		}
		
		void jamesAi(string jamesSymbol)
		{
				while(x != 1) // James Ai
				{
						srand((unsigned)time(NULL));
						Cchoice = rand() % 27;
						
						if(E5.empty())
						{
							Cchoice = 14;
						}
						
						switch(Cchoice){
							case 1:
								if(A1.empty())
								{
									A1 = jamesSymbol;
									x = 1;
									break;
								}
							case 2: 
								if(A2.empty())
								{
									A2 = jamesSymbol;
									x = 1;
									break;
								}
							case 3:
								if(A3.empty())
								{
									A3 = jamesSymbol;
									x = 1;
									break;
							}
							case 4: 
								if(B1.empty())
								{
									B1 = jamesSymbol;
									x = 1;
									break;
								}
							case 5:
								if(B2.empty())
								{
									B2 = jamesSymbol;
									x = 1;
									break;
								}	
							case 6:
								if(B3.empty()){
									B3 = jamesSymbol;
									x = 1;
									break;
								}
							case 7:
								if(C1.empty())
								{
									C1 = jamesSymbol;
									x = 1;
									break;
								}
							case 8:
								if(C2.empty())
								{
									C2 = jamesSymbol;
									x = 1;
									break;
								}
							case 9:
								if(C3.empty())
								{
									C3 = jamesSymbol;
									x = 1;
									break;
								}
							case 10:
								if(D4.empty())
								{
									D4 = jamesSymbol;
									x = 1;
									break;
								}
							case 11:
								if(D5.empty())
								{
									D5 = jamesSymbol;
									x = 1;
									break;
								}
							case 12:
								if(D6.empty())
								{
									D6 = jamesSymbol;
									x = 1;
									break;
								}
							case 13:
								if(E4.empty())
								{
									E4 = jamesSymbol;
									x = 1;
									break;
								}
							case 14:
								if(E5.empty())
								{
									E5 = jamesSymbol;
									x = 1;
									break;
								}
							case 15:
								if(E6.empty())
								{
									E6 = jamesSymbol;
									x = 1;
									break;
								}
							case 16:
								if(F4.empty())
								{
									F4 = jamesSymbol;
									x = 1;
									break;
								}
							case 17:
								if(F5.empty())
								{
									F5 = jamesSymbol;
									x = 1;
									break;
								}
							case 18:
								if(F6.empty())
								{
									F6 = jamesSymbol;
									x = 1;
									break;
								}
							case 19:
								if(G7.empty())
								{
									G7 = jamesSymbol;
									x = 1;
									break;
								}
							case 20:
								if(G8.empty())
								{
									G8 = jamesSymbol;
									x = 1;
									break;
								}
							case 21:
								if(G9.empty())
								{
									G9 = jamesSymbol;
									x = 1;
									break;
								}
							case 22:
								if(H7.empty())
								{
									H7 = jamesSymbol;
									x = 1;
									break;
								}
							case 23:
								if(H8.empty())
								{
									H8 = jamesSymbol;
									x = 1;
									break;
								}
							case 24:
								if(H9.empty())
								{
									H9 = jamesSymbol;
									x = 1;
									break;
								}
							case 25:
								if(I7.empty())
								{
									I7 = jamesSymbol;
									x = 1;
									break;
								}
							case 26:
								if(I8.empty())
								{
									I8 = jamesSymbol;
									x = 1;
									break;
								}
							case 27:
								if(I9.empty())
								{
									I9 = jamesSymbol;
									x = 1;
									break;
								}
						}
				}
			x = 0;
		}
		void check_AiScore() //Give points
		{
			if((A1 == "X" || A1 == "O")&& A1 == A2 && A2 == A3 && z1 != 1)
			{
				if(A1 == "O")
				{
				JamesScore++;
				z1 = 1;
				}
				else if(A1 == "X")
				{
					NickScore++;
					z1 = 1;
				}
			}
			if((B1 == "X" || B1 == "O") && B1 == B2 && B2 == B3&& z2 != 1)
			{
				if(B1 == "O")
				{	
				JamesScore++;
				z2 = 1;
				}
				else if(B1 == "X")
				{
					NickScore++;
					z2 = 1;
				}		 
			}
			if((C1 == "X" || C1 == "O")&& C1 == C2 && C2 == C3 && z3 != 1)
			{
				if(C1 == "O")
				{
				JamesScore++;
				z3 = 1;
				}
				else if(C1 == "X")
				{
					NickScore++;
					z3 = 1;
				}
			}
			if((A1 == "X" || A1 == "O") && B2 == A1 && C3 == B2 && z4 != 1)
			{
				if(A1 == "O")
				{
				JamesScore++;
				z4 = 1;
				}
				else if(A1 == "X")
				{
					NickScore++;
					z4 = 1;
				}
			}
			if((C1 == "X" || C1 == "O")&& B2 == C1 && A3 == B2&& z5 != 1){
				if(C1 == "O")
				{
				JamesScore++;
				z5 = 1;
				}
				else if(C1 == "X")
				{
					NickScore++;
					z5 = 1;
				}
			}
			if((A1 == "X" || A1 == "O")&& B1 == A1 && C1 == B1 && z6 != 1)
			{
				if(A1 == "O")
				{
				JamesScore++;
				z6 = 1;
				}
				else if(A1 == "X")
				{
					NickScore++;
					z6 = 1;
				}
			}
			if((A2 == "X" || A2 == "O")&& B2 == A2 && C2 == B2 && z7 != 1)
			{
				if(A2 == "O")
				{
				JamesScore++;
				z7 = 1;
				}
				else if(A2 == "X")
				{
					NickScore++;
					z7 = 1;
				}
			}
			if((A3 == "X" || A3 == "O")&& B3 == A3 && C3 == B3 && z8 != 1)
			{
				if(A3 == "O")
				{
				JamesScore++;
				z8 = 1;
				}
				else if(A3 == "X")
				{
					NickScore++;
					z8 = 1;
				}
			}
			if((A1 == "X" || A1 == "O")&&A1 == D4 && D4 == G7 && z9 != 1)
			{
				if(A1 == "O")
				{
				JamesScore++;
				z9 = 1;
				}
				else if(A1 == "X")
				{
					NickScore++;
					z9 = 1;
				}	 
			}
			if((A2 == "X" || A2 == "O")&&A2 == D5 && D5 == G8&& z10 != 1)
			{
				if(A2 == "O")
				{
				JamesScore++;
				z10 = 1;
				}
				else if(A2 == "X")
				{
					NickScore++;
					z10 = 1;
				}
			}
			if((A3 == "X" || A3 == "O")&& A3 == D6 && D6 == G9&& z11 != 1)
			{
				if(A3 == "O")
				{
				JamesScore++;
				z11 = 1;
				}
				else if(A3 == "X")
				{
					NickScore++;
					z11 = 1;
				}	 
			}
			if((B1 == "X" || B1 == "O")&& B1 == E4 && E4 == H7&& z12 != 1)
			{
				if(B1 == "O")
				{
				JamesScore++;
				z12 = 1;
				}
				else if(B1 == "X")
				{
					NickScore++;
					z12 = 1;
				}
			}
			if((B2 == "X" || B2 == "O")&& B2 == E5 && E5 == H8&& z13 != 1)
			{
				if(B2 == "O")
				{
				JamesScore++;
				z13 = 1;
				}
				else if(B2 == "X")
				{
					NickScore++;
					z13 = 1;
				}
			}
			if((B3 == "X" || B3 == "O")&& B3 == E6 && E6 == H9 && z14 != 1)
			{
				if(B3 == "O")
				{
				JamesScore++;
				z14 = 1;
				}
				else if(B3 == "X")
				{
					NickScore++;
					z14 = 1;
				}
			}
			if((C1 == "X" || C1 == "O")&& C1 == F4 && F4 == I7 && z15 != 1)
			{
				if(C1 == "O")
				{
				JamesScore++;
				z15 = 1;
				}
				else if(C1 == "X")
				{
					NickScore++;
					z15 = 1;
				}
			}
			if((C2 == "X" || C2 == "O")&& C2 == F5 && F5 == I8 && z16 != 1)
			{
				if(C2 == "O")
				{
				JamesScore++;
				z16 = 1;
				}
				else if(C2 == "X")
				{
					NickScore++;
					z16 = 1;
				}
			}
			if((C3 == "X" || C3 == "O")&& C3 == F6 && F6 == I9 && z17 != 1)
			{
				if(C3 == "O")
				{
				JamesScore++;
				z17 = 1;
				}
				else if(C3 == "X")
				{
					NickScore++;
					z17 = 1;
				}
			}
			if((A1 == "X" || A1 == "O")&& A1 == D5 && D5 == G9 && z18 != 1)
			{
				if(A1 == "O")
				{
				JamesScore++;
				z18 = 1;
				}
				else if(A1 == "X")
				{
					NickScore++;
					z18 = 1;
				}
			}
			if((D4 == "X" || D4 == "O")&&D4 == D5 && D5 == D6 && z19 != 1)
			{
				if(D4 == "O")
				{
				JamesScore++;
				z19 = 1;
				}
				else if(D4 == "X")
				{
					NickScore++;
					z19 = 1;
				}
			}
			if((E4 == "X" || E4 == "O")&&E4 == E5 && E5 == E6 && z20 != 1)
			{
				if(E4 == "O")
				{
				JamesScore++;
				z20 = 1;
				}
				else if(E4 == "X")
				{
					NickScore++;
					z20 = 1;
				}
			}
			if((F4 == "X" || F4 == "O")&&F4 == F5 && F5 == F6 && z21 != 1)
			{
				if(F4 == "O")
				{
				JamesScore++;
				z21 = 1;
				}
				else if(F4 == "X")
				{
					NickScore++;
					z21 = 1;
				}
			}
			if((D4 == "X" || D4 == "O")&&D4 == E4 && E4 == F4 && z22 != 1)
			{
				if(D4 == "O")
				{
				JamesScore++;
				z22 = 1;
				}
				else if(D4 == "X")
				{
					NickScore++;
					z22 = 1;
				}
			}
			if((D5 == "X" || D5 == "O")&&D5 == E5 && E5 == F5 && z23 != 1)
			{
				if(D5 == "O")
				{
				JamesScore++;
				z23 = 1;
				}
				else if(D5 == "X")
				{
					NickScore++;
					z23 = 1;
				}
			}
			if((D6 == "X" || D6 == "O")&&D6 == E6 && E6 == F6 && z24 != 1)
			{
				if(D6 == "O")
				{
				JamesScore++;
				z24 = 1;
				}
				else if(D6 == "X")
				{
					NickScore++;
					z24 = 1;
				}
			}
			if((G7 == "X" || G7 == "O")&&G7 == H7 && H7 == I7 && z25 != 1)
			{
				if(G7 == "O")
				{
				JamesScore++;
				z25 = 1;
				}
				else if(G7 == "X")
				{
					NickScore++;
					z25 = 1;
				}
			}
			if((G8 == "X" || G8 == "O")&&G8 == H8 && H8 == I8 && z26 != 1)
			{
				if(G8 == "O")
				{
				JamesScore++;
				z26 = 1;
				}
				else if(G8 == "X")
				{
					NickScore++;
					z26 = 1;
				}
			}
			if((G9 == "X" || G9 == "O")&&G9 == H9 && H9 == I9 && z27 != 1)
			{
				if(G9 == "O")
				{
				JamesScore++;
				z27 = 1;
				}
				else if(G9 == "X")
				{
					NickScore++;
					z27 = 1;
				}
			}
			if((G7 == "X" || G7 == "O")&&G7 == G8 && G8 == G9 && z28 != 1)
			{
				if(G7 == "O")
				{
				JamesScore++;
				z28 = 1;
				}
				else if(G7 == "X")
				{
					NickScore++;
					z28 = 1;
				}
			}
			if((H7 == "X" || H7 == "O")&&H7 == H8 && H8 == H9 && z29 != 1)
			{
				if(H7 == "O")
				{
				JamesScore++;
				z29 = 1;
				}
				else if(H7 == "X")
				{
					NickScore++;
					z29 = 1;
				}
			}
			if((I7 == "X" || I7 == "O")&&I7 == I8 && I8 == I9 && z30 != 1)
			{
				if(I7 == "O")
				{
				JamesScore++;
				z30 = 1;
				}
				else if(I7 == "X")
				{
					NickScore++;
					z30 = 1;
				}
			}
			if((C1 == "X" || C1 == "O")&&C1 == E4 && E4 == G7 && z31 != 1)
			{
				if(C1 == "O")
				{
				JamesScore++;
				z31 = 1;
				}
				else if(C1 == "X")
				{
					NickScore++;
					z31 = 1;
				}
			}
			if((D6 == "X" || D6 == "O")&&D6 == E5 && E5 == F4 && z32 != 1)
			{
				if(D6 == "O")
				{
				JamesScore++;
				z32 = 1;
				}
				else if(D6 == "X")
				{
					NickScore++;
					z32 = 1;
				}
			}
			if((A3 == "X" || A3 == "O")&&A3 == D5 && D5 == G7 && z33 != 1)
			{
				if(A3 == "O")
				{
				JamesScore++;
				z33 = 1;
				}
				else if(A3 == "X")
				{
					NickScore++;
					z33 = 1;
				}
			}
			if((A3 == "X" || A3 == "O")&&A3 == E6 && E6 == I9 && z34 != 1)
			{
				if(A3 == "O")
				{
				JamesScore++;
				z34 = 1;
				}
				else if(A3 == "X")
				{
					NickScore++;
					z34 = 1;
				}
			}
			if((C3 == "X" || C3 == "O")&&C3 == E6 && E6 == G9 && z35 != 1)
			{
				if(A3 == "O")
				{
				JamesScore++;
				z35 = 1;
				}
				else if(A3 == "X")
				{
					NickScore++;
					z35 = 1;
				}
			}	
			if((C3 == "X" || C3 == "O")&&C3 == F5 && F5 == I7 && z36 != 1){
				if(C3 == "O")
				{
				JamesScore++;
				z36 = 1;
				}
				else if(C3 == "X")
				{
					NickScore++;
					z36 = 1;
				}
			}
			if((C1 == "X" || C1 == "O")&&C1 == F5 && F5 == I9 && z37 != 1)
			{
				if(C1 == "O")
				{
				JamesScore++;
				z37 = 1;
				}
				else if(C1 == "X")
				{
					NickScore++;
					z37 = 1;
				}
			}
			if((A1 == "X" || A1 == "O")&&A1 == E5 && E5 == I9 && z38 != 1)
			{
				if(A1 == "O")
				{
				JamesScore++;
				z38 = 1;
				}
				else if(A1 == "X")
				{
					NickScore++;
					z38 = 1;
				}
			}
			if((A3 == "X" || A3 == "O")&&A3 == E5 && E5 == I7 && z39 != 1)
			{
				if(A3 == "O")
				{
				JamesScore++;
				z39 = 1;
				}
				else if(A3 == "X")
				{
					NickScore++;
					z39 = 1;
				}
			}
			if((C1 == "X" || C1 == "O")&&C1 == E5 && E5 == G9 && z40 != 1)
			{
				if(C1 == "O")
				{
				JamesScore++;
				z40 = 1;
				}
				else if(C1 == "X")
				{
					NickScore++;
					z40 = 1;
				}
			}
			if((C3 == "X" || C3 == "O")&&C3 == E5 && E5 == G7 && z41 != 1)
			{
				if(C3 == "O")
				{
				JamesScore++;
				z41 = 1;
				}
				else if(C3 == "X")
				{
					NickScore++;
					z41 = 1;
				}
			}
			if((D4 == "X" || D4 == "O")&&D4 == E5 && E5 == F6 && z42 != 1)
			{
				if(D4 == "O")
				{
				JamesScore++;
				z42 = 1;
				}
				else if(D4 == "X")
				{
					NickScore++;
					z42 = 1;
				}
			}
			if((G7 == "X" || G7 == "O")&&G7 == H8 && H8 == I9 && z43 != 1)
			{
				if(G7 == "O")
				{
				JamesScore++;
				z43 = 1;
				}
				else if(G7 == "X")
				{
					NickScore++;
					z43 = 1;
				}
			}
			if((A1 == "X" || A1 == "O")&&A1 == E4 && E4 == I7 && z44 != 1)
			{
				if(A1 == "O")
				{
				JamesScore++;
				z44 = 1;
				}
				else if(A1 == "X")
				{
					NickScore++;
					z44 = 1;
				}
			}
			if((G9 == "X" || G9 == "O")&&G9 == H8 && H8 == I7 && z45 != 1)
			{
				if(G9 == "O")
				{
				JamesScore++;
				z45 = 1;
				}
				else if(G9 == "X")
				{
					NickScore++;
					z45 = 1;
				}
			}
			if((A2 == "X" || A2 == "O")&&A2 == E5 && E5 == I8 && z46 != 1)
			{
				if(A2 == "O")
				{
				JamesScore++;
				z46 = 1;
				}
				else if(A2 == "X")
				{
					NickScore++;
					z46 = 1;
				}
			}
			if((B1 == "X" || B1 == "O")&&B1 == E5 && E5 == H9 && z47 != 1)
			{
				if(B1 == "O")
				{
				JamesScore++;
				z47 = 1;
				}
				else if(B1 == "X")
				{
					NickScore++;
					z47 = 1;
				}
			}
			if((C3 == "X" || C3 == "O")&&C3 == E5 && E5 == H7 && z48 != 1)
			{
				if(C3 == "O")
				{
				JamesScore++;
				z48 = 1;
				}
				else if(C3 == "X")
				{
					NickScore++;
					z48 = 1;
				}
			}
			if((A2 == "X" || A2 == "O")&&A2 == E5 && E5 == I8 && z49 != 1)
			{
				if(A2 == "O")
				{
				JamesScore++;
				z49 = 1;
				}
				else if(A2 == "X")
				{
					NickScore++;
					z49 = 1;
				}
			}
		}

		//Checks winner of each game
		void Winner()
		{
			if(NickScore > JamesScore)
			{
				cout << "Nick Wins" << endl;	
				NickWin++;
			}
			else
			{
				cout << "James Wins" << endl;
				JamesWin++;
			}
		}
		
		//Checks winner of 10 games
		void Victor()
		{
			if(NickWin > JamesWin)
			{
				cout<<"Nick wins the tournament "<< NickWin <<" to "<< JamesWin <<endl;
			}
			else if(JamesWin > NickWin)
			{
				cout<<"James wins the tournament "<< JamesWin <<" to "<< NickWin <<endl;
			}
		}
		
		void Erase()
		{
			int i,j,k;
			NickScore = 0;
			JamesScore = 0;
			A1 = "";
			A2 = "";
			A3 = "";
			B1 = "";
			B2 = "";
			B3 = "";
			C1 = "";
			C2 = "";	
			C3 = "";
			D4 = "";
			D5 = "";
			D6 = "";
			E4 = "";
			E5 = "";
			E6 = "";
			F4 = "";
			F5 = "";
			F6 = "";
			G7 = "";
			G8 = "";
			G9 = "";
			H7 = "";
			H8 = "";
			H9 = "";
			I7 = "";
			I8 = "";
			I9 = "";
			for(k = 0; k < 3; k++)
			{
				for(j = 0; j < 3; j++)
				{
					for(i = 0; i < 3; i++)
					{
						Cells[i][j][k] = "";
					}
				}
			}
		}
		void show_O(string nickSymbol)
		{
			for(k = 0; k < 3; k++)
			{
				for(j = 0; j < 3; j++)
				{
					for(i = 0; i < 3; i++)
					{
						if(Cells[i][j][k] != nickSymbol)
						{
						Cells[i][j][k] = "O";
						}
					}
				}
			}
		}
};

int main()
{
	int P1,Play,GameNumber = 1;
	string nickSymbol = "X";
	string jamesSymbol = "O";
	
	string answer;
	James Jam;
	
	cout<<"Welcome to Tic-Tac-Toe"<<endl;
	cout<<"Would you like to play a tournament? Y/N"<<endl;
	cin>>answer;
	
	while(answer != "N" || answer != "n")
	{	
		//Plays a tournament
		while(GameNumber != 11)
		{
			srand((unsigned)time(NULL));
			P1 = (rand() % 2);
			cout<<"Game "<<GameNumber<<" being played."<<endl;
			Play = 1;

				if(P1 == 0)
				{
					cout << "NickAi goes first!" << endl;
					while (Play != 27)
					{
						Jam.nickAi(nickSymbol, jamesSymbol);
						Jam.converter();
						Play++;
						Jam.jamesAi(jamesSymbol);
						Play++;
					}
				}
			
				if(P1 == 1)
				{
					cout<<"JamesAi goes first!" <<endl;
					while(Play != 27)
					{
						Jam.jamesAi(jamesSymbol);
						Play++;
						Jam.nickAi(nickSymbol, jamesSymbol);
						Jam.converter();
						Play++;
					}
				}
				
			//Checks both Ai's symbols and returns a winner of the game
			Jam.show_O(nickSymbol);
			Jam.converter();
			Jam.check_AiScore();
			Jam.Winner();
			Jam.create_board();
			cout << Jam.NickScore << "    " << Jam.JamesScore << endl;
			Jam.Erase();
			cout<<"Game " << GameNumber << " Over"<<endl;
			GameNumber++;
			system("PAUSE");
		}
		cout<<"Tournament finished"<<endl;
		Jam.Victor();
		system("PAUSE");
		Jam.JamesWin = 0;
		Jam.NickWin = 0;
	}
	

	return 0;
}

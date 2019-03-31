#include <iostream>

using namespace std;

// All the function prototypes.
void safeTransaction(int x, int y);
void hackedTransaction(int& x, int& y);
void ScreenFormat();

int main()
{
	// Changes the title of the program to NSA Agent Interactive Story.
	system("title Hacking and Bankrupting Terrorists");
	// Changes the background to black and the font color green.
	system("color 0A");

	// Integer value of terroristAccount.
	int terroristAccount = 1000000;
	// Integer value of whiteHatHackerAccount.
	int whiteHatHackerAccount = 0;
	// cout statement stating the status of the original values.
	cout << "original values\n";
	// cout statement for the original value of the terrorist account (terroristAccount).
	cout << "Terrorist Account: " << terroristAccount << "\n";
	// cout statement for the original value of the white hat hacker account (whiteHatHackerAccount).
	cout << "White Hat Hacker Account: " << whiteHatHackerAccount << "\n";
	// Function in charge of formatting the screen.
	ScreenFormat(); // FUNCTION CALL.

	// cout statement stating money is being transferred securely to terrorists.
	cout << "Terrorists account securely transfering money...\n";
	// cout statement stating the money transaction has been completed.
	cout << "Money transaction to terrorist account complete.\n";
	// Function in charge of the safe transaction (safeTransaction).
	safeTransaction(terroristAccount, whiteHatHackerAccount); // FUNCTION CALL.
	// cout statement for the value of the terrorist account (terroristAccount) when the safe transaction occurs.
	cout << "Terrorist Account: " << terroristAccount + 500 << "\n";
	// cout statement for the value of the white hat hacker account (whiteHatHackerAccount) when the safe transaction occurs.
	cout << "White Hat Hacker Accout: " << whiteHatHackerAccount << "\n\n";
	// Function in charge of formatting the screen.
	ScreenFormat(); // FUNCTION CALL.

	// cout statement stating that the white hat hacker and terrorist are switching all transactions.
	cout << "Switching all transactions between white hat hacker and terrorist...\n";
	// cout statement stating that transaction between the white hat hacker and terrorist is complete.
	cout << "Money transaction between white hat hacker and terrorist complete.\n";
	// Skull ASCII.
	cout << "\t\t\t													\n\n";
	cout << "\t\t\t                 uu$$$$$$$$$$$uu                 \n\n";
	cout << "\t\t\t              uu$$$$$$$$$$$$$$$$$uu              \n\n";
	cout << "\t\t\t             u$$$$$$$$$$$$$$$$$$$$$u             \n\n";
	cout << "\t\t\t            u$$$$$$$$$$$$$$$$$$$$$$$u            \n\n";
	cout << "\t\t\t           u$$$$$$$$$$$$$$$$$$$$$$$$$u           \n\n";
	cout << "\t\t\t           u$$$$$$$$$$$$$$$$$$$$$$$$$u           \n\n";
	cout << "\t\t\t           u$$$$$$"   "$$$"   "$$$$$$u           \n\n";
	cout << "\t\t\t           $$$$        u$u        $$$$           \n\n";
	cout << "\t\t\t            $$$u       u$u       u$$$            \n\n";
	cout << "\t\t\t            $$$u      u$$$u      u$$$            \n\n";
	cout << "\t\t\t              $$$$uu$$$   $$$uu$$$$              \n\n";
	cout << "\t\t\t               $$$$$$$     $$$$$$$               \n\n";
	cout << "\t\t\t                u$$$$$$$u$$$$$$$u                \n\n";
	cout << "\t\t\t                 u$ $ $ $ $ $ $u                 \n\n";
	cout << "\t\t\t      uuu        $$u$ $ $ $ $u$$       uuu       \n\n";
	cout << "\t\t\t     u$$$$        $$$$$u$u$u$$$       u$$$$      \n\n";
	cout << "\t\t\t      $$$$$uu       $$$$$$$$$      uu$$$$$$      \n\n";
	cout << "\t\t\t    u$$$$$$$$$$$uu           uuuu$$$$$$$$$$      \n\n";
	cout << "\t\t\t    $$$$$$$$$$$$$$$$$uuu   uu$$$$$$$$$$$$$$      \n\n";
	cout << "\t\t\t                $$$$$$$$$$$uu$$$$                \n\n";
	cout << "\t\t\t               uuuu$$$$$$$$$$$$$uuu              \n\n";
	cout << "\t\t\t      u$$$uuu$$$$$$$$$uu   $$$$$$$$$$$uuu$$$     \n\n";
	cout << "\t\t\t      $$$$$$$$$$                 $$$$$$$$$$$     \n\n";
	cout << "\t\t\t        $$$$$                         $$$$       \n\n";
	cout << "\t\t\t         $$$                          $$$$       \n\n";
	// Function in charge of the hacked transaction (hackedTransaction).
	hackedTransaction(terroristAccount, whiteHatHackerAccount); // FUNCTION CALL.
	// cout statement for the value of the terrorist account (terroristAccount) when the hacked transaction occurs.
	cout << "Terrorist Account: " << terroristAccount << "\n";
	// cout statement for the value of central terrorists account (centralTerroristsAccount) when the hacked transaction occurs.
	cout << "White Hat Hacker Account: " << whiteHatHackerAccount + 500 << "\n";
	// Function in charge of formatting the screen.
	ScreenFormat(); // FUNCTION CALL.

	// Prevents the program from just running and not showing the user the console box.
	system("pause");
	// A exit number for the program. If zero is returned at the of the program, then the program ran successfully.
	return 0;
}

// Function definition of safeTransaction.
void safeTransaction(int x, int y)
{
	// int value is temporarily equal to x.
	int temp = x;
	// the value of x now equals the value of y.
	x = y;
	// the value of y now equals the value temp (tempoarily).
	y = temp;
}

// Function definition of hackedTransaction.
void hackedTransaction(int& x, int& y) // REFERENCES FOR INT X AND INT Y.
{
	// int value is temporarily equal to x.
	int temp = x;
	// the value of x now equals the value of y.
	x = y;
	// the value of y now equals the value temp (tempoarily).
	y = temp;
}

// Function definition of ScreenFormat.
void ScreenFormat()
{
	// cout used in formatting.
	cout << "=====================================================================================================================\n";
	cout << "=====================================================================================================================\n";
	cout << "=====================================================================================================================\n";
}

#include <iostream>
using namespace std;
int main()
{
	char option, op;
	cout << "\t\t***************************************************************************************" << endl;
	cout << "\t\t**   #####                                                                           **" << endl;
	cout << "\t\t**  #     #     ##    #        ####   #    #  #          ##     ###   ####   #####   **" << endl;
	cout << "\t\t**  #          #  #   #       #    #  #    #  #         #  #     #   #    #  #    #  **" << endl;
	cout << "\t\t**  #         #    #  #       #       #    #  #        #    #    #   #    #  #    #  **" << endl;
	cout << "\t\t**  #         ######  #       #       #    #  #        ######    #   #    #  #####   **" << endl;
	cout << "\t\t**  #     #  #      # #       #    #  #    #  #       #      #   #   #    #  #   #   **" << endl;
	cout << "\t\t**   #####   #      #  ######  ####    ####   ######  #      #   #    ####   #    #  **" << endl;
	cout << "\t\t***************************************************************************************" << endl;
	cout << "\t\t**ALI AHMED                  **   DR : MOHAMMED kHFAGY   **              AHMED MATTAR**" << endl;
	cout << "\t\t**MOHAMMED MAGDY             ******************************              ABDALLAH    **" << endl;
	cout << "\t\t****************************************   WAEL   *************************************" << endl;
	cout << "-------------------------------------------------------------------------------------------------------" << endl;
	cout << "Basic calculator\t'a'\nAdvanced calculator\t'b'\nASCII Table\t\t'c'\nDigital system\t\t'd'\n" << ">> ";
	cin >> option;
	if (option == 'a')
	{
		double x, y, z = 0;
		cout << "Enter first number , operation , second number (x+y)\n>> ";
		cin >> x >> op >> y;
		if (op == '+')
			z += x + y;
		else if (op == '-')
			z += x - y;
		else if (op == '*')
			z += x * y;
		else if (op == '/')
			z += x / y;
		cout << "Result = " << z << endl;
	}
	else if (option == 'b')
	{
		double x, y, z = 1;
		cout << "Square root (z^2=x)\t'a'\nnth Root\t(z^y=x)\t'b'\npower square\t(x^2)\t'c'\nPower nth\t(x^y)\t'd'\n";
		cout << "*Note ('x' first number , 'y' second number , 'z' result, '^' power sign)\n>> ";
		cin >> op;
		if (op == 'a')// sqrt
		{
			cout << "Enter the number of (x) : ";
			cin >> x;
			if (x < 0) {
				cout << "Error!\nPlease, Check the input!";
			}
			//f(X) = x , y = nth root , b = root of x
			double a, b = 1, r;
			double q = x, q1 = x;
			// q and q1 = number near x accept the root of nth
			// a = b power y
			for (long long int i = 0; i <x; i++, q--, q1++)
			{
				b = 1;
				for (long long int j = 0; j < x / 3; j++, b++) {
					a = 1;

					for (int j = 0; j < 2; j++)// a power y
					{
						a *= b;
					}
					if (a == q)
					{
						break;
					}
					else if (a == q1)
					{
						break;
					}

				}
				if (a == q || a == q1 || a == x)
				{
					break;
				}
			}
			// f(x) = x, f(a) = b , a
			// f(x)=f(a)+(x-a)f^(a)
			q = 1;
			x -= a;
			for (int i = 1; i < 2; i++)
			{
				q *= b;
			}
			r = b + (x*(1 / (2 * q)));
			cout << "Result = " << r << endl;

		}
		else if (op == 'b')// nth root
		{
			cout << "Enter the number of (x) : ";
			cin >> x;
			cout << "Enter the number of (y) : ";
			cin >> y;
			if (x < 0 || y == 0) {
				cout << "Error!\nPlease, Check the input!";
			}
			//f(X) = x , y = nth root , b = root of x
			double a, b = 1, r;
			double q = x, q1 = x;
			// q and q1 = number near x accept the root of nth
			// a = b power y
			for (long long int i = 0; i <x; i++, q--, q1++)
			{
				b = 1;
				for (long long int j = 0; j < x / 3; j++, b++) {
					a = 1;

					for (int j = 0; j < y; j++)// a power y
					{
						a *= b;
					}
					if (a == q)
					{
						break;
					}
					else if (a == q1)
					{
						break;
					}

				}
				if (a == q || a == q1 || a == x)
				{
					break;
				}
			}
			// f(x) = x, f(a) = b , a
			// f(x)=f(a)+(x-a)f^(a)
			q = 1;
			x -= a;
			for (int i = 1; i < y; i++)
			{
				q *= b;
			}
			r = b + (x*(1 / (y*q)));
			cout << "Result = " << r << endl;
		}
		else if (op == 'c')// power square
		{
			cout << "Enter the number of (x) : ";
			cin >> x;
			for (int i = 1; i <= 2; i++)
			{
				z *= x;
			}
			cout << "Result = " << z;
		}
		else if (op == 'd')// power nth
		{
			cout << "Enter the number of (x) : ";
			cin >> x;
			cout << "Enter the number of (y) : ";
			cin >> y;
			for (int i = 1; i <= y; i++)
			{
				z *= x;
			}
			cout << "Result = " << z;
		}
		else
		{
			cout << "Error!\nPlease, Check the input!";
		}
	}
	else if (option == 'c')
	{
		int i;
		cout << "Decimal number\t'a'\nCharcter\t'b'\n" << ">> ";
		cin >> op;
		if (op == 'a')//from decimal
		{
			unsigned int x;//range from 0 to 255
			char s;
			cout << "Enter number\n>> ";
			cin >> x; //decimal value
			int a = x, b = x, c = x;
			s = x;// symbol
			cout << "Dec : " << x << " | Symbol : " << s << " | Bin : ";
			//decimal to binary
			int bin[16];
			for (i = 0; a > 0; i++) {
				bin[i] = a % 2;
				a /= 2;
			}
			for (i -= 1; i >= 0; i--) {
				cout << bin[i];
			}
			//decimal to octal
			cout << " | Oct : ";
			int oct[10];
			for (i = 0; b > 0; i++) {
				oct[i] = b % 8;
				b /= 8;
			}
			for (i -= 1; i >= 0; i--) {
				cout << oct[i];
			}
			//decimal to hex
			cout << " | hex : ";
			char hex[100];
			int r = 0;
			for (i = 0; c != 0; i++)
			{
				r = c % 16;
				if (r < 10)
				{
					hex[i] = r + 48;
				}
				else {
					hex[i] = r + 55;
				}
				c /= 16;
			}
			for (i--; i >= 0; i--)
			{
				cout << hex[i];
			}
			cout << endl;
		}
		if (op == 'b')
		{
			int x;
			char s;
			cout << "Enter charcter\n>> ";
			cin >> s;
			x = s;
			int a = x, b = x, c = x;
			cout << "Symbol : \"" << s << "\" | Dec : " << x << " | Bin : ";
			//decimal to binary
			int bin[16];
			for (i = 0; a > 0; i++) {
				bin[i] = a % 2;
				a /= 2;
			}
			for (i -= 1; i >= 0; i--) {
				cout << bin[i];
			}
			//decimal to octal
			cout << " | Oct : ";
			int oct[10], i;
			for (i = 0; b > 0; i++) {
				oct[i] = b % 8;
				b /= 8;
			}
			for (i -= 1; i >= 0; i--) {
				cout << oct[i];
			}
			//decimal to hex
			cout << " | hex : ";
			char hex[100];
			int r = 0;
			for (i = 0; c != 0; i++)
			{
				r = c % 16;
				if (r < 10)
				{
					hex[i] = r + 48;
				}
				else {
					hex[i] = r + 55;
				}
				c /= 16;
			}
			for (i--; i >= 0; i--)
			{
				cout << hex[i];
			}
			cout << endl;
		}
	}
	else if (option == 'd')
	{
		cout << "Conversion\t\t'a'\nbinary calculation\t'b'\n" << ">> ";
		cin >> op;
		if (op == 'a')
		{
			cout << "From binary\t'a'\nFrom decimal\t'b'\nFrom Octal\t'c'\nFrom Hex\t'd'\n" << ">>";
			cin >> op;
			if (op == 'a') //from binary
			{
				int bin;
				cout << "From binary to decimal\t'a'\nFrom binary to octal\t'b'\nFrom binary to Hex\t'c'\n>> ";
				cin >> op;
				if (op != 'a' && op != 'b' && op != 'c') //check input
				{
					cout << "Invalid Input \n";
					return 0;
				}
				//-------
				cout << "Enter binary number\n>> ";
				cin >> bin;
				int b = bin;
				for (int i = 0; i <= b; i++) //check input
				{
					if (b % 10 > 1 || b % 10 < 0) {
						cout << "Invalid Input (binary number must only contain '0' '1')\n\n";
						return 0;
					}
					b /= 10;
				}
				//-------
				int r, dec = 0, i = 0;
				for (i = 0; bin > 0; i++) {
					int z = 1;
					//bin % 10 = first digit , *= power i of 2 to get a decimal value of first digit in octal number and store it in dec_1
					r = bin % 10; // i = 1
					for (int j = 1; j <= i; j++)
					{
						z *= 2;
					}
					r *= z;
					dec += r;
					//bin /= 10 to get rid of first digit and in the next round we get new value of first digit
					bin /= 10;
				}
				//-------
				if (op == 'a') //to decimal
				{
					cout << "result = " << dec << endl;
				}
				else if (op == 'b') //to octal
				{
					int oct[15], i;
					// loop to give a value to array
					for (i = 0; dec > 0; i++) {
						// for each round , dec_1 % 8 to get value of first digit of octal
						oct[i] = dec % 8;
						//dec_1 / 8 to get the second digit that will be the first digit in the next round
						dec /= 8;
					}
					cout << "result = ";
					// loop to print each value of array in reverse mode
					for (i -= 1; i >= 0; i--) {
						cout << oct[i];
					}
					cout << "\n";

				}
				else if (op == 'c') //to hex
				{
					char hex[100];
					int i, r = 0;
					for (i = 0; dec != 0; i++)
					{
						r = dec % 16;
						if (r < 10)
						{
							hex[i] = r + 48;
						}
						else {
							hex[i] = r + 55;
						}
						dec /= 16;
					}
					cout << "result = ";
					for (i--; i >= 0; i--)
					{
						cout << hex[i];
					}
					cout << endl;
				}
			}
			else if (op == 'b')//from decimal
			{
				int dec;
				cout << "From decimal to binary\t'a'\nFrom decimal to octal\t'b'\nFrom decimal to Hex\t'c'\n>> ";
				cin >> op;
				if (op != 'a' && op != 'b' && op != 'c') //check input
				{
					cout << "Invalid Input \n";
					return 0;
				}
				cout << "Enter decimal number\n>> ";
				cin >> dec;
				if (dec < 0)//check input
				{
					cout << "Invalid Input\n";
					return 0;
				}
				if (op == 'a') //to binary
				{
					// array to contain each digit of binary number , i = increment value of array
					int bin[16], i;
					// loop to give a value to array
					for (i = 0; dec > 0; i++) {
						//for each round , dec % 2 to get a value of first digit of binary number
						bin[i] = dec % 2;
						dec /= 2;
					}
					cout << "result = ";
					// loop to print each value of array in reverse mode
					for (i -= 1; i >= 0; i--) {
						cout << bin[i];
					}
					cout << "\n";
				}
				else if (op == 'b') //to octal
				{
					// oct[x] array to contain each digit of octal number , i = increment value of array
					int oct[10], i;
					for (i = 0; dec > 0; i++) {
						// for each round , dec_1 % 8 to get value of first digit of octal
						oct[i] = dec % 8;
						//dec_1 / 8 to get the second digit that will be the first digit in the next round
						dec /= 8;
					}
					cout << "result = ";
					// loop to print each value of array in reverse mode
					for (i -= 1; i >= 0; i--) {
						cout << oct[i];
					}
					cout << "\n";
				}
				else if (op == 'c') //to hex
				{
					char hex[100];
					int r = 0, i;
					for (i = 0; dec != 0; i++)
					{
						r = dec % 16;
						if (r < 10)
						{
							hex[i] = r + 48;
						}
						else {
							hex[i] = r + 55;
						}
						dec /= 16;
					}
					cout << "result = ";
					for (i--; i >= 0; i--)
					{
						cout << hex[i];
					}
					cout << endl;
				}
			}
			else if (op == 'c')//from oct
			{
				int oct;
				cout << "From octal to binary\t'a'\nFrom octal to decimal\t'b'\nFrom octal to Hex\t'c'\n>> ";
				cin >> op;
				if (op != 'a' && op != 'b' && op != 'c') {
					cout << "Invalid Input \n";
					return 0;
				}
				cout << "Enter octal number\n>> ";
				cin >> oct;
				int o = oct;
				for (int i = 0; i < o; i++)//check input
				{
					if (o % 10 > 7 || o < 0) {
						cout << "Invalid Input (octal range from 0 to 7)\n";
						return 0;
					}
					o /= 10;
				}
				//-------
				// r = remainder , dec_1 = decimal value , i = increment value
				int r, dec = 0, i = 0;
				for (i = 0; oct > 0; i++) // convert to decimal
				{
					int z = 1;
					// oct % 10 to get first digit of octal number ,*= power i of 8 to get decimal value for the first digit and store it in dec_1
					r = oct % 10;
					for (int j = 1; j <= i; j++)
					{
						z *= 8;
					}
					r *= z;
					dec += r;
					oct /= 10;
				}
				//------
				if (op == 'a') //to binary
				{
					int bin[16], i;
					for (i = 0; dec > 0; i++) {
						bin[i] = dec % 2;
						dec /= 2;
					}
					cout << "Result = ";
					for (i -= 1; i >= 0; i--) {
						cout << bin[i];
					}
					cout << "\n";
				}
				else if (op == 'b') //to decimal
				{
					cout << "Result = " << dec << endl;
				}
				else if (op == 'c')//to hex
				{
					char hex[100];
					int r = 0, i;
					for (i = 0; dec != 0; i++)
					{
						r = dec % 16;
						if (r < 10)
						{
							hex[i] = r + 48;
						}
						else {
							hex[i] = r + 55;
						}
						dec /= 16;
					}
					cout << "Result = ";
					for (i--; i >= 0; i--)
					{
						cout << hex[i];
					}
					cout << endl;
				}
			}
			else if (op == 'd')//from hex
			{
				char hex[15];
				cout << "From Hex to binary\t'a'\nFrom Hex to octal\t'b'\nFrom Hex to decimal \t'c'\n>> ";
				cin >> op;
				if (op != 'a' && op != 'b' && op != 'c') //check input
				{
					cout << "Invalid Input \n";
					return 0;
				}
				cout << "enter hex number (max length '7')\n>> ";
				cin >> hex;
				int length, dec = 0;
				for (length = 0; hex[length] != '\0'; length++)
					if (length > 7) // check input
					{
						cout << "Invalid Input\n";
						return 0;
					}
				for (int i = 0; i <= length - 1; i++) // check input
				{
					if ((hex[i] >= '0' && hex[i] <= '9') || (hex[i] >= 'A' && hex[i] <= 'F')) {}
					else {
						cout << "Invalid Input (hex range from 0 to F)\n";
						return 0;
					}
				}
				//------
				int i = 0, j = length;
				for (; i<j / 2; i++)
				{
					char x = hex[i];
					hex[i] = hex[j - i - 1];
					hex[j - i - 1] = x;
				}
				for (int i = 0; i <= length - 1; i++)//convert to dec
				{
					int z = 1;
					for (int j = 1; j <= i; j++)
					{
						z *= 16;
					}
					if (hex[i] >= '0' && hex[i] <= '9')
					{
						dec += (hex[i] - 48) * z;
					}
					else if (hex[i] >= 'A' && hex[i] <= 'F')
					{
						dec += (hex[i] - 55) * z;
					}
				}
				//-------
				if (op == 'a')//to binary
				{
					int bin[30], i;
					for (i = 0; dec > 0; i++) {
						bin[i] = dec % 2;
						dec /= 2;
					}
					cout << "result = ";
					for (i -= 1; i >= 0; i--) {
						cout << bin[i];
					}
					cout << "\n";
				}
				else if (op == 'b')//to oct
				{
					int oct[10], i;
					for (i = 0; dec > 0; i++) {
						oct[i] = dec % 8;
						dec /= 8;
					}
					cout << "result = ";
					for (i -= 1; i >= 0; i--) {
						cout << oct[i];
					}
					cout << "\n";
				}
				else if (op == 'c')//to decimal
				{
					cout << "result = " << dec << endl;
				}
			}
		}
		else if (op == 'b')//calculation
		{
			char op;
			int bin_1, bin_2, dec_1 = 0, dec_2 = 0, dec;
			cout << "Note: addition '+' subtraction '-' multiply '*' division '/'\n";
			cout << "enter fisrt number , operation , second number \n>> ";
			cin >> bin_1 >> op >> bin_2;
			int b1 = bin_1;
			for (int j = 0; j <= b1; j++) {
				if (b1 % 10 > 1 || b1 < 0) {
					cout << "Invalid Input (binary number must only contain '0' '1')\n\n";
					return 0;
				}
				b1 /= 10;
			}
			if (op != '+' && op != '-' && op != '*' && op != '/') {
				cout << "Invalid Input \n";
				return 0;
			}
			int b2 = bin_2;
			for (int i = 0; i <= b2; i++) {
				if (b2 % 10 > 1 || b2 % 10 < 0) {
					cout << "Invalid Input (binary number must only contain '0' '1')\n";
					return 0;
				}
				b2 /= 10;
			}
			if (bin_2 == 0) {
				cout << "error !\n";
				return 0;
			}
			for (int i = 0; bin_1 > 0; i++)
			{
				int z = 1;
				//bin % 10 = first digit , *= power i of 2 to get a decimal value of first digit in octal number and store it in dec_1
				int r = bin_1 % 10; // i = 1
				for (int j = 1; j <= i; j++)
				{
					z *= 2;
				}
				r *= z;
				dec_1 += r;
				//bin /= 10 to get rid of first digit and in the next round we get new value of first digit
				bin_1 /= 10;
			}
			for (int i = 0; bin_2 > 0; i++)
			{
				int z = 1;
				//bin % 10 = first digit , *= power i of 2 to get a decimal value of first digit in octal number and store it in dec_1
				int r = bin_2 % 10; // i = 1
				for (int j = 1; j <= i; j++)
				{
					z *= 2;
				}
				r *= z;
				dec_2 += r;
				//bin /= 10 to get rid of first digit and in the next round we get new value of first digit
				bin_2 /= 10;
			}
			if (op == '+')
			{
				dec = dec_1 + dec_2;
				int bin[20], i;
				for (i = 0; dec > 0; i++) {
					bin[i] = dec % 2;
					dec /= 2;
				}
				cout << "result = ";
				for (i -= 1; i >= 0; i--) {
					cout << bin[i];
				}
				cout << "\n";
			}
			else if (op == '-')
			{
				if (dec_1 < dec_2)
					cout << "Invalid Input\n";
				else {
					dec = dec_1 - dec_2;
					int bin[20], i;
					for (i = 0; dec > 0; i++) {
						bin[i] = dec % 2;
						dec /= 2;
					}
					cout << "result = ";
					for (i -= 1; i >= 0; i--) {
						cout << bin[i];
					}
					cout << "\n";
				}
			}
			else if (op == '*')
			{
				dec = dec_1 * dec_2;
				int bin[20], i;
				for (i = 0; dec > 0; i++) {
					bin[i] = dec % 2;
					dec /= 2;
				}
				cout << "result = ";
				for (i -= 1; i >= 0; i--) {
					cout << bin[i];
				}
				cout << "\n";
			}
			else if (op == '/')
			{
				if (dec_1 < dec_2) {
					cout << "result = 0 \n";
				}
				else {
					dec = dec_1 / dec_2;
					int bin[20], i;
					for (i = 0; dec > 0; i++) {
						bin[i] = dec % 2;
						dec /= 2;
					}
					cout << "result = ";
					for (i -= 1; i >= 0; i--) {
						cout << bin[i];
					}
					cout << "\n";
				}
			}
		}
	}
	else
	{
		cout << "Invalid Input ! \n";
	}
}

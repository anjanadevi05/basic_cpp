#include <iostream>
using namespace std;
int main()
 {
    int numerator, denominator, result;
    bool validInput = false;
      while (!validInput)
	 {
        cout << "Enter the numerator: ";
        cin >> numerator;
        cout << "Enter the denominator: ";
        cin >> denominator;

        try
		{
            if (denominator == 0)
			 {
                throw "Division by zero is not allowed.";
             }
            result = numerator / denominator;
            cout << "Result of division: " << result << endl;
            validInput = true;
        }
		 catch (const char* errorMessage) 
		{
            cout<< "Error: " << errorMessage << endl;
        } 
    }
}


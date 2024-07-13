#include <iostream>
using namespace std;
class Time
 {
public:
	int hr,min,sec;
    Time() 
	{
		hr=0;
		min=0;
		sec=0;
	}
    friend istream& operator>>(istream& in, Time& tm);
    friend ostream& operator<<(ostream& out, const Time& tm);
};
    istream& operator>>(istream& in, Time& tm)
	{
        cout << "Enter hours: ";
        in >> tm.hr;
        cout << "Enter minutes: ";
        in >> tm.min;
        cout << "Enter seconds: ";
        in >> tm.sec;
        return in;
    }
    ostream& operator<<(ostream& out, const Time& tm)
	 {
        out << "Time: " << tm.hr << " hours, " << tm.min << " minutes, " << tm.sec << " seconds";
        return out;
    }
int main() 
{
    Time T;
    cin >> T;
    cout << T << endl;
    return 0;
}


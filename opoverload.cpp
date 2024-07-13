#include<iostream>
using namespace std;

class Unary {
private:
    int x, y, z;

public:
    Unary() {
        x = 5;
        y = 10;
        z = 15;
    }
    Unary(int a,int b,int c) {
        x = a;
        y = b;
        z = 2;
    }


    void display() {
        cout << x << " " << y << " " << z;
    }

    friend void operator++(Unary& u) {
        u.x++;
        u.y++;
        u.z++;
    }

    friend void operator-(Unary& u) {
        u.x = -u.x;
        u.y = -u.y;
        u.z = -u.z;
    }
    void operator --()
    {
    	x=x--;
    	y=y--;
    	z=z--;
	}
	int operator>(Unary& u)
	{
		return x>u.x;
	}
};

int main() {
    Unary u1;
    int flag;
    Unary u2(9,2,3);
    flag=u1>u2;
    cout<<flag;
    return 0;
}


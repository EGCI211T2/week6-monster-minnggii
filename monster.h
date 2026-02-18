#ifndef monster_h
#define monster_h
#define MAX_HP 100;
#define MAX_POTION 10;

#include <cstdlib>

class monster{
private:
	string name;
	int hp,potion;

public:
	void Attack(monster &);
    void heal();
	monster(string = "Anonymous", int = 1, int = 1);
	monster(int, int);
	void operator+=(int x); //Binary
	void operator+=(monster &x); //Binary
	void operator--(); //Unary operator
	//Alt + 126 for "~"
	~monster();
	void kill();
	void display()
	{
		if(hp > 0)
		{
			cout<<"Name: " <<name <<endl;
			cout<<"HP: " <<hp <<endl;
			cout<<"Potions: " <<potion <<endl;
			cout<<"------------------" <<endl;
		}
	}
	void showhp()
	{
		cout<<name <<"'s HP: " <<hp <<endl;
	}
	bool operator>(monster &x);
};

void monster::heal()
{
	if(potion >= 1)
	{
		potion--;
		hp++;
	}
	else
	{
		cout<<"No potions remaining " <<endl;
	}
}

void monster::Attack(monster &x)
{
	if(hp>x.hp)
	{
		x.hp > 10? x.hp -= 10: x.hp = 0;
	}
	else
	{
		x.hp -= 2;
		if(hp > 1)
		{
			hp--;
		}
		else
		{
			hp = 0;
		}
	}

	cout<<name <<endl;
	cout<<"Attacks" <<endl;
	cout<<x.name <<endl;
	showhp();
    x.showhp();
    cout<<"==================" <<endl;
}

bool monster::operator>(monster &x)
{
	if(hp>x.hp)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void monster::operator+=(int x)
{
	this -> hp += x;
	//potion++;
}

void monster::operator+=(monster &x)
{
	hp += x.hp;
	x.hp = 0;
	//potion++;
}

void monster::operator--()
{
	this -> hp--;
}

void monster::kill()
{
	this -> hp = 0;
}

monster::~monster()
{
	cout<<name <<" is gone"<<endl;
}

monster::monster(string n, int h, int p)
{
	cout<<"What is your name? ";
	cin>>name;
	srand(time(0));
	hp = rand()%MAX_HP;
	potion = rand()%MAX_POTION;
	cout<<"Monster "<<name <<" is here"<<endl;
}
#endif

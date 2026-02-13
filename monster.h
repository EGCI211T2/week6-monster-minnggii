#ifndef monster_h
#define monster_h

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
	void display()
	{
		cout<<"Name: " <<name <<endl;
		cout<<"HP: " <<hp <<endl;
		cout<<"Potions: " <<potion <<endl;
	}
	bool operator>(monster &x);
};

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

monster::~monster()
{
	cout<<name <<" is gone"<<endl;
}

monster::monster(string n, int h, int p)
{
	name = n;
	hp = h;
	potion = p;
	cout<<"Monster "<<name <<" is here"<<endl;
}
#endif

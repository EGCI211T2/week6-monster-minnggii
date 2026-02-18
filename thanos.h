#ifndef thanos_h
#define thanos_h

#include "monster.h"

class Thanos {
private:
	int stones;
	int hp; 
public:
	/* constructor and destructor */
	Thanos(int = 0, int = 1000);
	~Thanos();
	void snap_finger(monster[], int);
	/* show all hps
	/ clear half of monster hp, if stone =6*/
	void operator++(); // increase the stone;
};

void Thanos::snap_finger(monster x[], int n)
	{
		for(int i = 0; i < n; i++)
		{
			x[i].showhp();
		}
		
		if(stones >= 6)
		{
			for(int i = n; i >= n / 2; i--)
			{
				x[i].kill();
			}
			cout<<"Half of the monsters are gone " <<endl;
		}
		else
		{
			cout<<"Not enough stones... Nothing happened" <<endl;
		}
	}

void Thanos::operator++()
{
	stones++;
	cout<<"-----" <<endl;
	cout<<"Stone added" <<endl;
}

Thanos::~Thanos()
{
	cout<<"Thanos is gone" <<endl;
}
Thanos::Thanos(int s, int h)
{
	stones = s;
	hp = h;
	cout<<"I am Thanos" <<endl;
}
#endif

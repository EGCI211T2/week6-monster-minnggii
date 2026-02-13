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

Thanos::~Thanos()
{
	cout<<"Thanos is gone" <<endl;
}
Thanos::Thanos(int s, int h)
{
	stones = s;
	hp = h;
	cout<<"Thanos is here" <<endl;
}
#endif

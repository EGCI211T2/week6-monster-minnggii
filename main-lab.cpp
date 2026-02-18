#include <iostream>
using namespace std;

#include "thanos.h"

int main(int argc, char* argv[]) {
  
  int n;
  cout<<"How many monsters? ";
  cin>>n;

  monster *m = new monster[n]; //Make sure they have HP

  cout<<"------------------" <<endl;
  // Quickly show all monsters currently introduced
  for(int i = 0; i < n; i++)
  {
    m[i].display(); //If the hp = 0, you do not display
  }

  // Each monster attacks the next (last monster attacks first)
  for(int i = 0; i < n - 1; i++)
  {
    m[i].Attack(m[i + 1]);
  }
  m[n - 1].Attack(m[0]);

  // Each monster heals if they have a potion and displays
  // all monster stats.
  for(int i = 0; i < n; i++)
  {
    m[i].heal();
    m[i].display(); //If the hp = 0, you do not display
  }

  // Thanos is introduced
  Thanos T;
  ++T;
  ++T;
  T.snap_finger(m,n);
  ++T;
  ++T;
  T.snap_finger(m,n);
  ++T;
  ++T;
  T.snap_finger(m,n);//Clear hp for n/2(half) of the monsters.

  // Dislay all remaining monsters (first half)
  for(int i = 0; i < n; i++)
  {
    m[i].display(); //If the hp = 0, you do not display
  }

  
  delete [] m;

}//call des for A

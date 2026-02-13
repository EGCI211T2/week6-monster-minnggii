#include <iostream>
using namespace std;

#include "thanos.h"

int main(int argc, char* argv[]) {
  
  Thanos T;
  int n;
  cout<<"How many monsters? ";
  cin>>n;

  monster *m = new monster[n];

  ++T;
  ++T;
  T.snap_finger(m,n);
  ++T;
  ++T;
  T.snap_finger(m,n);
  ++T;
  ++T;
  T.snap_finger(m,n);//Clear hp for n/2(half) of the monsters.

  cout<<"==================" <<endl;
  for(int i = 0; i < n; i++)
  {
    m[i].display(); //If the hp = 0, you do not display
  }

  cout<<"==================" <<endl;
  
  delete [] m;

}//call des for A

#include <iostream>
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {

    monster A("Siri", 10, 1);
    monster B("Daisuke");
    B+=10; //B.operator+=(10);
    A+=B; //A.operator+=(B);
    --A; //A.operator--();
    cout<<"====The stronger monster is ===\n";
    if(A>B) //A > B -> A.operator>(B);
    {
      A.display();
    }
    else
    {
      B.display();
    }
    /*
    monster *p; //No constructor is called
    //monster x[5] = {{"James"}, {"Michael", 20}, {"Sarah"}, {"Amy"}, {"Sam"}};
    monster c;
    p = &c;
    p -> display();
    p = &A;
    p -> display();
    p = new monster("Sarina", 20);
    p -> display();
    delete p;
    
    p = new monster[3];
    delete []p;
    */
  /*
 
 monster *p,x;
  p=&x;
  p=new monster;
 delete p;

 p=new monster[3];
 delete []p;

*/

}

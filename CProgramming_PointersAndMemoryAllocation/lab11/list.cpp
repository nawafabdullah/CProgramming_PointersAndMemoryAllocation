//Nawaf Alharbi
#include "list.h"
#include "node.h"

void deallocate(nodePtr &front)
{
}


void print(wnodePtr p)
{
}


void insert(nodePtr &front, std::string k, std::string v)
{

  //  typedef std::tr1::shared_ptr<node> temp_next = std::tr1::make_shared <node>();
  node * temp;   
  temp->key = k ;
  temp->value = v;
  temp -> next =  std::tr1::make_shared<node> front;
  // if (front != NULL)
  // {
  //  temp. next = front;
  //  front = temp;
  //  }

}


void remove(nodePtr &front, std::string &k, std::string &v)
{
}


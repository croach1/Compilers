/*
 * nodes.cpp
 * $Author: kbuckner $
 *
 * $Id: nodes.cpp,v 1.1 2021-09-27 11:38:16-06 kbuckner Exp kbuckner $
 * $Date: 2021-09-27 11:38:16-06 $
 *
 * $Log: nodes.cpp,v $
 * Revision 1.1  2021-09-27 11:38:16-06  kbuckner
 * *** empty log message ***
 *
 */

// Just the "node" class

#include"nodes.hpp"

Node::Node(Node *lf,Node *rt) :
  ival(0),dval(0.0),left(lf),right(rt), next(0)
{
  reset();
}

Node::~Node()
{
  if(left) delete left;
  if(right) delete right;
}

int Node::getint() const
{
  return ival;
}
double Node::getdbl() const
{
  return dval;
}
string Node::getstring() const
{
  return sval;
}
void Node::setval(const char *v)
{
  sval=v;
}
void Node::setval(const string s)
{
  sval=s;
}
void Node::setval(int i)
{
  ival=i;
}
void Node::setval(double d)
{
  dval=d;
}

void Node::reset() 
{
  myline=mycol=1;
  sval.clear();
}

void Node::setleft(Node *p) 
{
  left=p;
  return;
}

void Node::setright(Node *p) 
{
  right=p;
  return;
}

void Node::setnext(Node *p) 
{
  if(next==0) next=p;
  else next->setnext(p);
  return;
}

Node* Node::getleft()
{
  return left;
}

Node* Node::getright()
{
  return right;
}

Node* Node::getnext()
{
  return next;
}

void Node::print(ostream *out)
{
  if(left) left->print(out);
  *out << sval ;
  if(right) right->print(out);
  //*out << endl;
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}

// Now the nodeMinus subclass

nodeMinus::nodeMinus(Node *lf,Node *rt):
  Node(lf,rt)
{}

void nodeMinus::print(ostream *out)
{
  if(left) {
    *out << "-";
    left->print(out);
  }
  if(next) {
    *out << endl;
    next->print(out);
  }
  //*out << endl;
  return;
}


// And the nodeNum subclass

nodeNum::nodeNum(int i)
{
  ival=i;
};

void nodeNum::print(ostream *out)
{
  *out << ival;
  return;
}

// Here is nodeParExp subclass

nodeParExp::nodeParExp(Node *lf,Node *rt):Node(lf,rt){}

void nodeParExp::print(ostream *out)
{
  *out << "( ";
  if(left) left->print(out);
  if(right) right->print(out);
  *out << " )" ;//<< endl;
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeExpExp::nodeExpExp(Node *lf,Node *rt):Node(lf,rt){}
void nodeExpExp::print(ostream *out)
{
  if(left) left->print(out);
  *out << "^";
  if(right) right->print(out);
  if(next) {
    *out << endl;
    next->print(out);
  }
}

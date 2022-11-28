// nodes.hpp
// Colton Roach
// cosc 4785 Fall 2022
// October 19, 2022

#ifndef NODES_HPP
#define NODES_HPP
#include<iostream>
#include<string>

using std::string;
using std::endl;
using std::ostream;

class Node
{
    public:
        Node(string lbl="", int pt=0);
        virtual ~Node();

	string getLabel(){return label;};
        void setLabel(string s){label = s;};

	virtual void print(ostream *out = 0, string place = "");

    protected:
        string label;
        int prodType;
};


class nodeID : public Node
{
    public:
        nodeID(string s);

	string getID(){return id;};
	
	virtual void print(ostream *out = 0, string place = "");
    protected:
        string id;
};

class nodeNum : public Node
{
    public:
        nodeNum(int n);

	int getNum(){return num;};
	
	virtual void print(ostream *out = 0, string place = "");
    protected:
        int num;
};


class nodeName : public Node
{
    public:
        nodeName();
        nodeName(Node* fi);
        nodeName(Node* fi, Node* si, int pt);
        
        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* id;
        Node* name;
        Node* bracketexps;
};

class nodeMultibrackets : public Node
{
    public:
        nodeMultibrackets();
        nodeMultibrackets(Node* mb);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* multibrackets;
};


class nodeBracketExp : public Node
{
    public:
        nodeBracketExp(Node* e);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* exp;
};


class nodeBracketExps : public Node
{
    public:
        nodeBracketExps(Node* be);
        nodeBracketExps(Node* bes, Node* be);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* bracketexp;
        Node* bracketexps;
};

class nodeSimpleType : public Node
{
    public:
        nodeSimpleType();
	
	virtual void print(ostream *out = 0, string place = "");
};


class nodeType : public Node
{
    public:
        nodeType(Node* st);

	Node* getSimpleType(){return simpleType;};
	
	virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* simpleType;
};


class nodeNewExp : public Node
{
    public:
        nodeNewExp(Node* fi, int pt);
        nodeNewExp(Node* fi, Node* si, int pt);
        nodeNewExp(Node* fi, Node* si, Node* ti, int pt);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* id;
        Node* simpletype;
        Node* bracketexps;
        Node* multibrackets;
};


class nodeExp : public Node
{
    public:
        nodeExp(int pt);
        nodeExp(Node* fi, int pt);
        nodeExp(Node* fi, Node* si, int pt);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* name;
        Node* numb;
        Node* newexp;
        Node* firstexp;
        Node* secondexp;
};


class nodeVarDec : public Node
{
    public:
        nodeVarDec(Node* fi, Node* si, int pt);
        nodeVarDec(Node* fi, Node* mb, Node* si, int pt);
        
	Node* getType(){return type;};
	Node* getFirstID(){return firstId;};
	Node* getSecondID(){return secondId;};
	Node* getMultibrackets(){return multibrackets;};
	
	virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* type;
        Node* firstId;
        Node* secondId;
        Node* multibrackets;        
};


class nodeElements : public Node
{
    public:
        nodeElements(Node* vd, int pt);

	Node* getVardec(){return vardec;};
	Node* getExp(){return exp;};
	
	virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* vardec;
        Node* exp;
};


class nodeProgram : public Node
{
    public:
        nodeProgram(Node* ne);
        nodeProgram(Node* np, Node* ne);
        
	Node* getElements(){return elements;};
	Node* getProgram(){return program;};
	
	virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* elements;
        Node* program;
};


#endif

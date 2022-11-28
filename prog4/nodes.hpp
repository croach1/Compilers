// nodes.hpp
// Colton Roach
// cosc 4785 Fall 2022
// November 3, 2022

#ifndef NODES_HPP
#define NODES_HPP
#include<iostream>
#include<string>
#include<vector>

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


class nodeProgram : public Node
{
    public:
        nodeProgram(Node* cd);
        nodeProgram(Node* np, Node* cd);
        
        Node* getProgram(){return program;};
	Node* getClassDeclaration(){return classDeclaration;};
	
	virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* program;
        Node* classDeclaration;
};

class nodeClassDeclaration : public Node
{
    public:
        nodeClassDeclaration(Node* ci, Node* cb);

	virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* classId;
        Node* classBody;
};

class nodeClassId : public Node
{
    public:
        nodeClassId(Node* id);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* ident;
};

class nodeClassBody : public Node
{
    public:
        nodeClassBody(int pt);
        nodeClassBody(Node* fdec, int pt);
        nodeClassBody(Node* fdec, Node* sdec, int pt);
        nodeClassBody(Node* fdec, Node* sdec, Node* tdec, int pt);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* vardecs;
        Node* consdecs;
        Node* methdecs;
};

class nodeVariableDeclarations : public Node
{
    public:
        nodeVariableDeclarations(Node* vd);
        nodeVariableDeclarations(Node* vds, Node* vd);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* vardecs;
        Node* vardec;
};


class nodeVarDec : public Node
{
    public:
        nodeVarDec(Node* t, Node* id, int pt);
	
	virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* type;
        Node* ident;
};


class nodeType : public Node
{
    public:
        nodeType(Node* t, int pt);

	virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* simpleType;
        Node* type;
};


class nodeSimpleType : public Node
{
    public:
        nodeSimpleType();
        nodeSimpleType(Node* id);
	
	virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* ident;
};


class nodeConstructorDeclarations : public Node
{
    public:
        nodeConstructorDeclarations(Node* cd);
        nodeConstructorDeclarations(Node* cds, Node* cd);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* consdecs;
        Node* consdec;
};

class nodeConsDec : public Node
{
    public:
        nodeConsDec(Node* id, Node* plist, Node* b);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* ident;
        Node* parameterList;
        Node* block;
};

class nodeMethodDeclarations : public Node
{
    public:
        nodeMethodDeclarations(Node* md);
        nodeMethodDeclarations(Node* md, Node* mds);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* methdecs;
        Node* methdec;
};

class nodeMethDec : public Node
{
    public:
        nodeMethDec(Node* rt, Node* id, Node* plist, Node* b);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* resultType;
        Node* ident;
        Node* parameterList;
        Node* block;
};


class nodeResultType : public Node
{
    public:
        nodeResultType();
        nodeResultType(Node* t);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* type;
};


class nodeParameterList : public Node
{
    public:
        nodeParameterList();
        nodeParameterList(Node* p);
        nodeParameterList(Node* pl, Node* p);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* parameter;
        Node* paramList;
};


class nodeParameter : public Node
{
    public:
        nodeParameter(Node* t, Node* id);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* type;
        Node* ident;
};


class nodeBlock : public Node
{
    public:
        nodeBlock(int pt);
        nodeBlock(Node* lvds, int pt);
        nodeBlock(Node* lvds, Node* st, int pt);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* localVarDecs;
        Node* statements;
};


class nodeLocalVariableDeclarations : public Node
{
    public:
        nodeLocalVariableDeclarations(Node* vd);
        nodeLocalVariableDeclarations(Node* vd, Node* vds);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* vardec;
        Node* vardecs;
};


class nodeStatements : public Node
{
    public:
        nodeStatements(Node* st, int pt);
        nodeStatements(Node* st, Node* sts, int pt);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* statements;
        Node* statement;
};


class nodeStatement : public Node
{
    public:
        nodeStatement(int pt);
        nodeStatement(Node* fnode, int pt);
        nodeStatement(Node* fnode, Node* snode, int pt);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* name;
        Node* expression;
        Node* arglist;
        Node* constate;
        Node* statement;
        Node* opexp;
        Node* block;
};


class nodeName : public Node
{
    public:
        nodeName(int pt);
        nodeName(Node* id, int pt);
        nodeName(Node* n, Node* snode, int pt);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* ident;
        Node* name;
        Node* exp;
};


class nodeArgList : public Node
{
    public:
        nodeArgList();
        nodeArgList(Node* p);
        nodeArgList(Node* pl, Node* p);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* exp;
        Node* expList;
};


class nodeConState : public Node
{
    public:
        nodeConState(Node* e, Node* s, int pt);
        nodeConState(Node* fe, Node* s, Node* se, int pt);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* fexp;
        Node* sexp;
        Node* statement;
};


class nodeOpExp : public Node
{
    public:
        nodeOpExp();
        nodeOpExp(Node* e);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* exp;
};


class nodeExpression : public Node
{
    public:
        nodeExpression(int pt);
        nodeExpression(Node* fnode, int pt);
        nodeExpression(Node* fnode, Node* snode, int pt);
        nodeExpression(Node* fnode, Node* snode, Node* tnode, int pt);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* name;
        Node* number;
        Node* arglist;
        Node* newexp;
        Node* unaryop;
        Node* fexp;
        Node* sexp;
        Node* relationop;
        Node* sumop;
        Node* productop;
};


class nodeNewExp : public Node
{
    public:
        nodeNewExp(Node* fnode, Node* snode, int pt);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* ident;
        Node* arglist;
        Node* simpletype;
        Node* expression;
};


class nodeUnaryOp : public Node
{
    public:
        nodeUnaryOp(int pt);

        virtual void print(ostream *out = 0, string place = "");
};


class nodeRelationOp : public Node
{
    public:
        nodeRelationOp(int pt);

        virtual void print(ostream *out = 0, string place = "");
};


class nodeSumOp : public Node
{
    public:
        nodeSumOp(int pt);

        virtual void print(ostream *out = 0, string place = "");
};


class nodeProductOp : public Node
{
    public:
        nodeProductOp(int pt);

        virtual void print(ostream *out = 0, string place = "");
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



/*
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
*/


#endif

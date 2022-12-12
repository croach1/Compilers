// nodes.hpp
// Colton Roach
// cosc 4785 Fall 2022
// December 2, 2022

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
        
        string getID(){return id;};
        void setID(string ident){id=ident;};

        int getNum(){return num;};
        void setNum(int number){num=number;};

        string getVardecType(){return vardecType;};

	virtual void print(ostream *out = 0, string place = "");

    protected:
        string vardecType;
        int num;
        string id;
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

class nodeClassVariableDeclarations : public Node
{
    public:
        nodeClassVariableDeclarations(Node* vd);
        nodeClassVariableDeclarations(Node* vds, Node* vd);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* vardecs;
        Node* vardec;
};

class nodeConstructorVariableDeclarations : public Node
{
    public:
        nodeConstructorVariableDeclarations(Node* vd);
        nodeConstructorVariableDeclarations(Node* vds, Node* vd);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* vardecs;
        Node* vardec;
};

class nodeMethodVariableDeclarations : public Node
{
    public:
        nodeMethodVariableDeclarations(Node* vd);
        nodeMethodVariableDeclarations(Node* vds, Node* vd);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* vardecs;
        Node* vardec;
};

class nodeBlockVariableDeclarations : public Node
{
    public:
        nodeBlockVariableDeclarations(Node* vd);
        nodeBlockVariableDeclarations(Node* vds, Node* vd);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* vardecs;
        Node* vardec;
};

class nodeVarDec : public Node
{
    public:
        nodeVarDec(Node* t, Node* nid, string ident, string vdt, int pt);
	
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
        nodeMethDec(Node* id, Node* plist, Node* b);
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
        nodeResultType(int pt);
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
        nodeParameter(Node* t, Node* nid, string identif, string vdt);

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

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* name;
        Node* number;
        Node* arglist;
        Node* newexp;
        Node* fexp;
        Node* sexp;
};


class nodeNewExp : public Node
{
    public:
        nodeNewExp(Node* fnode, Node* snode, int pt);
        nodeNewExp(Node* fnode, Node* snode, Node* tnode, int pt);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* ident;
        Node* arglist;
        Node* simpletype;
        Node* expressions;
        Node* brackets;
};


class nodeBrackExpressions : public Node
{
    public:
        nodeBrackExpressions(Node* exp);
        nodeBrackExpressions(Node* bes, Node* exp);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* expression;
        Node* brackets;
};


class nodeBracks : public Node
{
    public:
        nodeBracks();
        nodeBracks(Node* bs);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        Node* bracks;
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


#endif

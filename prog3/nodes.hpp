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
        
        string getLabel();
        int getProdType();

        void setLabel(string lbl);
        void setProdType(int pt);

    protected:
        string label;
        int prodType;
};


class nodeID : public Node
{
    public:
        nodeID(string s);

        string getId();

        void setId(string i);

    protected:
        string id;
};


class nodeMultibrackets : public Node
{
    public: 

    protected:
};


class nodeSimpleType : public Node
{
    public:
        nodeSimpleType();
};


class nodeType : public Node
{
    public:
        nodeType(nodeSimpleType* st);

        nodeSimpleType* getNodeSimpleType();
        
        void setNodeSimpleType(nodeSimpleType* st);

    protected:
        nodeSimpleType* simpleType;
};


class nodeExp : public Node
{
    public:
        

    protected:
};


class nodeVarDec : public Node
{
    public:
        nodeVarDec(nodeType* t, nodeID* i);
        nodeVarDec(nodeID* fi, nodeID* si);
        nodeVarDec(nodeType* t, nodeMultibrackets* mb, nodeID* i);
        nodeVarDec(nodeID* fi, nodeMultibrackets* mb, nodeID* si);
        
        nodeType* getNodeType();
        nodeID* getNodeFirstID();
        nodeID* getNodeSecondID();
        nodeMultibrackets* getNodeMultibrackets();

        void setNodeType(nodeType* nt);
        void setNodeFirstID(nodeID* i);
        void setNodeSecondID(nodeID* i);
        void setNodeMultibrackets(nodeMultibrackets* mb);
        
    protected:
        nodeType* type;
        nodeID* firstId;
        nodeID* secondId;
        nodeMultibrackets* multibrackets;        
};


class nodeElements : public Node
{
    public:
        nodeElements(nodeVarDec* vd);
        nodeElements(nodeExp* e);

        nodeVarDec* getNodeVarDec();
        nodeExp* getNodeExp();

        void setNodeVarDec(nodeVarDec* vd);
        void setNodeExp(nodeExp* e);

    protected:
        nodeVarDec* vardec;
        nodeExp* exp;
};


class nodeProgram : public Node
{
    public:
        nodeProgram(nodeElements* ne);
        nodeProgram(nodeProgram* np, nodeElements* ne);
        
        nodeElements* getNodeElements();
        nodeProgram* getNodeProgram();

        void setNodeElements(nodeElements* ne);
        void setNodeProgram(nodeProgram* np);

    protected:
        nodeElements* elements;
        nodeProgram* program;
};


#endif

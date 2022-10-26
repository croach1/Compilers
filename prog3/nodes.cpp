//Program 3
//Colton Roach
//October 17, 2022
//COSC 4785

#include "nodes.hpp"


//Node Class

Node::Node(string lbl, int pt) :
    label(lbl),prodType(pt)
{    
    //reset();
}

Node::~Node(){}

//Getters
string Node::getLabel()
{
    return label;
}
int Node::getProdType()
{
    return prodType;
}

//Setters
void Node::setLabel(string lbl)
{
    label = lbl;
}
void Node::setProdType(int pt)
{
    prodType = pt;
}


//NodeProgram Subclass---------------------------------------------------------------
//Constructors
nodeProgram::nodeProgram(nodeElements *ne) :
    Node("<program> --> <elements>", 1)
{
    elements = ne;
}
nodeProgram::nodeProgram(nodeProgram *np, nodeElements *ne) :
    Node("<program> --> <program> <elements>", 2)
{
    elements = ne;
    program = np;
}

//Getters
nodeElements* nodeProgram::getNodeElements()
{
    return elements;
}
nodeProgram* nodeProgram::getNodeProgram()
{
    return program;
}

//Setters
void nodeProgram::setNodeElements(nodeElements *ne)
{
    elements = ne;
}
void nodeProgram::setNodeProgram(nodeProgram *np)
{
    program = np;
}


//NodeElements Subclass--------------------------------------------------------------
//Constructors
nodeElements::nodeElements(nodeVarDec *vd) :
    Node("<elements> --> <vardec>", 1)
{
    vardec = vd;
}
nodeElements::nodeElements(nodeExp *e) :
    Node("<elements> --> <exp> SEMI", 2)
{
    exp = e;
}

//Getters
nodeVarDec* nodeElements::getNodeVarDec()
{
    return vardec;
}
nodeExp* nodeElements::getNodeExp()
{
    return exp;
}

//Setters
void nodeElements::setNodeVarDec(nodeVarDec *vd)
{
    vardec = vd;
}
void nodeElements::setNodeExp(nodeExp *e)
{
    exp = e;
}


//NodeVarDec Subclass----------------------------------------------------------------
//Constructors
nodeVarDec::nodeVarDec(nodeType *tp, nodeID *id) :
    Node("<vardec> --> <type> ID SEMI", 1)
{
    type = tp;
    firstId = id;
}
nodeVarDec::nodeVarDec(nodeID *fid, nodeID *sid) :
    Node("<vardec> --> ID ID SEMI", 2)
{
    firstId = fid;
    secondId = sid;
}
nodeVarDec::nodeVarDec(nodeType *tp, nodeMultibrackets *mb, nodeID *id) :
    Node("<vardec> --> <type> <multibrackets> ID SEMI", 3)
{
    type = tp;
    multibrackets = mb;
    firstId = id;
}
nodeVarDec::nodeVarDec(nodeID *fid, nodeMultibrackets *mb, nodeID *sid) :
    Node("<vardec> --> ID <multibrackets> ID SEMI", 4)
{
    firstId = fid;
    secondId = sid;
    multibrackets = mb;
}

//Getters
nodeType* nodeVarDec::getNodeType()
{
    return type;
}
nodeID* nodeVarDec::getNodeFirstID()
{
    return firstId;
}
nodeID* nodeVarDec::getNodeSecondID()
{
    return secondId;
}
nodeMultibrackets* nodeVarDec::getNodeMultibrackets()
{
    return multibrackets;
}

//Setters
void nodeVarDec::setNodeType(nodeType *nt)
{
    type = nt;
}
void nodeVarDec::setNodeFirstID(nodeID *id)
{
    firstId = id;
}
void nodeVarDec::setNodeSecondID(nodeID *id)
{
    secondId = id;
}
void nodeVarDec::setNodeMultibrackets(nodeMultibrackets *mb)
{
    multibrackets = mb;
}


//NodeType Subclass -----------------------------------------------------------------
//Constructors
nodeType::nodeType(nodeSimpleType *st) :
    Node("<type> --> <simpletype>", 1)
{
    simpleType = st;
}

//Getters
nodeSimpleType* nodeType::getNodeSimpleType()
{
    return simpleType;
}

//Setters
void nodeType::setNodeSimpleType(nodeSimpleType *st)
{
    simpleType = st;
}


//NodeSimpleType Subclass------------------------------------------------------------
//Constructors
nodeSimpleType::nodeSimpleType() :
    Node("<simpletype> --> INT", 1)
{}


//NodeID Subclass--------------------------------------------------------------------
//Constructors
nodeID::nodeID(string i) :
    Node("ID --> " + i, 1)
{
    id = i;
}



//Program 6
//Colton Roach
//December 12, 2022
//COSC 4785

#include "nodes.hpp"

//Node Class-----------------------------------------------------------------------

Node::Node(string lbl, int pt) :
    label(lbl),prodType(pt)
{}
Node::~Node(){}

void Node::print(ostream *out, string place)
{
    *out << place + label << endl;
}


//NodeProgram Subclass---------------------------------------------------------------

nodeProgram::nodeProgram(Node *cd) :
    Node("<program> --> <classdec>", 1)
{
    classDeclaration = cd;
}
nodeProgram::nodeProgram(Node *np, Node *cd) :
    Node("<program> --> <program> <classdec>", 2)
{
    classDeclaration = cd;
    program = np;
}
void nodeProgram::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            classDeclaration->print(out, place + "  ");
            break;
        case 2:
            program->print(out, place);
            *out << place + label << endl;
            classDeclaration->print(out, place + "  ");
            break;
    }
}


//NodeClassDeclaration Subclass------------------------------------------------------

nodeClassDeclaration::nodeClassDeclaration(Node* ci, Node* cb) :
    Node("<classdec> --> CLASS ID <classbody>", 1)
{
    classId = ci;
    classBody = cb;
}
void nodeClassDeclaration::print(ostream *out, string place)
{
    *out << place + label << endl;
    classId->print(out, place + "  ");
    classBody->print(out, place + "  ");
}


//NodeClassId Subclass---------------------------------------------------------------

nodeClassId::nodeClassId(Node* id) :
    Node("CLASS ID --> ID", 1)
{
    ident = id;
}
void nodeClassId::print(ostream *out, string place)
{
    *out << place + label << endl;
    ident->print(out, place + "  ");
}

//NodeClassBody----------------------------------------------------------------------

nodeClassBody::nodeClassBody(int pt) :
    Node("<classbody> --> { }", pt)
{}
nodeClassBody::nodeClassBody(Node* fdec, int pt) :
    Node("<classbody> --> { ? }", pt)
{
    switch(prodType) {
        case 2:
            setLabel("<classbody> --> { <vardecs> }");
            vardecs = fdec;
            break;
        case 3:
            setLabel("<classbody> --> { <consdecs> }");
            consdecs = fdec;
            break;
        case 4:
            setLabel("<classbody> --> { <methdecs> }");
            methdecs = fdec;
            break;
    }
}
nodeClassBody::nodeClassBody(Node* fdec, Node* sdec, int pt) :
    Node("<classbody> --> { ? ? }", pt)
{
    switch(prodType) {
        case 5:
            setLabel("<classbody> --> { <vardecs> <consdecs> }");
            vardecs = fdec;
            consdecs = sdec;
            break;
        case 6:
            setLabel("<classbody> --> { <vardecs> <methdecs> }");
            vardecs = fdec;
            methdecs = sdec;
            break;
        case 7:
            setLabel("<classbody> --> { <consdecs> <methdecs> }");
            consdecs = fdec;
            methdecs = sdec;
            break;
        
    }
}
nodeClassBody::nodeClassBody(Node* fdec, Node* sdec, Node* tdec, int pt) :
    Node("<classbody> --> { ? ? ? }", pt)
{
    setLabel("<classbody> --> { <vardecs> <consdecs> <methdecs> }");
    vardecs = fdec;
    consdecs = sdec;
    methdecs = tdec;
}
void nodeClassBody::print(ostream *out, string place)
{
    *out << place + label << endl;
    switch(prodType) {
        case 1:
            break;
        case 2:
            vardecs->print(out, place + "  ");
            break;
        case 3:
            consdecs->print(out, place + "  ");
            break;
        case 4:
            methdecs->print(out, place + "  ");
            break;
        case 5:
            vardecs->print(out, place + "  ");
            consdecs->print(out, place + "  ");
            break;
        case 6:
            vardecs->print(out, place + "  ");
            methdecs->print(out, place + "  ");
            break;
        case 7:
            consdecs->print(out, place + "  ");
            methdecs->print(out, place + "  ");
            break;
        case 8:
            vardecs->print(out, place + "  ");
            consdecs->print(out, place + "  ");
            methdecs->print(out, place + "  ");
            break;
    }
}


//NodeClassVariableDeclarations------------------------------------------------------

nodeClassVariableDeclarations::nodeClassVariableDeclarations(Node *vd):
    Node("<class vardecs> --> <vardec>", 1)
{
    vardec = vd;
}
nodeClassVariableDeclarations::nodeClassVariableDeclarations(Node *vds, Node* vd):
    Node("<class vardecs> --> <class vardecs> <vardec>", 2)
{
    vardecs = vds;
    vardec = vd;
}
void nodeClassVariableDeclarations::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            vardec->print(out, place + "  ");
            break;
        case 2:
            vardecs->print(out, place);
            *out << place + label << endl;
            vardec->print(out, place + "  ");
            break;
    }
}


//nodeConstructorDeclarations subclass-----------------------------------------------

nodeConstructorVariableDeclarations::nodeConstructorVariableDeclarations(Node *vd):
    Node("<cons vardecs> --> <vardec>", 1)
{
    vardec = vd;
}
nodeConstructorVariableDeclarations::nodeConstructorVariableDeclarations(Node *vds, Node *vd):
    Node("<cons vardecs> --> <cons vardecs> <vardec>", 2)
{
    vardecs = vds;
    vardec = vd;
}
void nodeConstructorVariableDeclarations::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            vardec->print(out, place + "  ");
            break;
        case 2:
            vardecs->print(out, place);
            *out << place + label << endl;
            vardec->print(out, place + "  ");
            break;
    }
}


//NodeMethodVariableDeclarations-----------------------------------------------------

nodeMethodVariableDeclarations::nodeMethodVariableDeclarations(Node *vd):
    Node("<meth vardecs> --> <vardec>", 1)
{
    vardec = vd;
}
nodeMethodVariableDeclarations::nodeMethodVariableDeclarations(Node *vds, Node *vd):
    Node("<meth vardecs> --> <meth vardecs> <vardec>", 2)
{
    vardecs = vds;
    vardec = vd;
}
void nodeMethodVariableDeclarations::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            vardec->print(out, place + "  ");
            break;
        case 2:
            vardecs->print(out, place);
            *out << place + label << endl;
            vardec->print(out, place + "  ");
            break;
    }
}


//NodeBlockVariableDeclarations::nodeBlockVariableDeclarations-----------------------

nodeBlockVariableDeclarations::nodeBlockVariableDeclarations(Node *vd):
    Node("<block vardecs> --> <vardec>", 1)
{
    vardec = vd;
}
nodeBlockVariableDeclarations::nodeBlockVariableDeclarations(Node *vds, Node *vd):
    Node("<block vardecs> --> <meth vardecs> <vardec>", 2)
{
    vardecs = vds;
    vardec = vd;
}
void nodeBlockVariableDeclarations::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            vardec->print(out, place + "  ");
            break;
        case 2:
            vardecs->print(out, place);
            *out << place + label << endl;
            vardec->print(out, place + "  ");
            break;
    }
}


//NodeVarDec Subclass----------------------------------------------------------------

nodeVarDec::nodeVarDec(Node *t, Node *nid, string identif, string vdt, int pt):
    Node("<vardec> --> <type> ID", 1)
{
    id = identif;
    vardecType=vdt;
    type = t;
    ident = nid;
}
void nodeVarDec::print(ostream *out, string place)
{
   *out << place + label << endl;
   type->print(out, place + "  ");
   ident->print(out, place + "  ");
}


//NodeType Subclass -----------------------------------------------------------------

nodeType::nodeType(Node *t, int pt) :
    Node("<type> --> ?", pt)
{
    switch(pt) {
        case 1:
            setLabel("<type> --> <simpletype>");
            simpleType = t;
            id = simpleType->getID();
            break;
        case 2:
            setLabel("<type> --> <type> []");
            type = t;
            id = type->getID();
            break;
    }
}
void nodeType::print(ostream *out, string place)
{
    *out << place + label << endl;
    switch(prodType) {
        case 1:
            simpleType->print(out, place + "  ");
            break;
        case 2:
            type->print(out, place + "  ");
            break;
    }
}


//NodeSimpleType Subclass-----------------------------------------------------------

nodeSimpleType::nodeSimpleType() :
    Node("<simpletype> --> INT", 1)
{
    id = "int";
}
nodeSimpleType::nodeSimpleType(Node *tid) :
    Node("<simpletype> --> ID", 2)
{
    ident = tid;
    id = tid->getID();
}
void nodeSimpleType::print(ostream *out, string place)
{
    *out << place + label << endl;
    if(prodType == 2)
    {
        ident->print(out, place + "  ");
    }
}


//NodeConstructorDeclarations Subclass -----------------------------------------------

nodeConstructorDeclarations::nodeConstructorDeclarations(Node *cd) :
    Node("<consdecs> --> <consdec>", 1)
{
    consdec = cd;
}
nodeConstructorDeclarations::nodeConstructorDeclarations(Node *cds, Node *cd) :
    Node("<consdecs> --> <consdecs> <consdec>", 2)
{
    consdec = cd;
    consdecs = cds;
}
void nodeConstructorDeclarations::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            consdec->print(out, place + "  ");
            break;
        case 2:
            consdecs->print(out, place + "  ");
            *out << place + label << endl;
            consdec->print(out, place + "  ");
            break;
    }
}


//NodeConsDec Subclass---------------------------------------------------------------

nodeConsDec::nodeConsDec(Node *id, Node *plist, Node *b) :
    Node("<consdecs> --> ID ( <paramlist> ) <block>", 1)
{
    ident = id;
    parameterList = plist;
    block = b;
}
void nodeConsDec::print(ostream *out, string place)
{
    *out << place + label << endl;
    ident->print(out, place + "  ");
    parameterList->print(out, place + "  ");
    block->print(out, place + "  ");
}

//NodeMethodDeclarations Subclass----------------------------------------------------

nodeMethodDeclarations::nodeMethodDeclarations(Node *md) :
    Node("<methdecs> --> <methdec>", 1)
{
    methdec = md;
}
nodeMethodDeclarations::nodeMethodDeclarations(Node *md, Node *mds) :
    Node("<methdecs> --> <methdecs> <methdec>", 2)
{
    methdec = md;
    methdecs = mds;
}
void nodeMethodDeclarations::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            methdec->print(out, place + "  ");
            break;
        case 2:
            methdecs->print(out, place + "  ");
            *out << place + label << endl;
            methdec->print(out, place + "  ");
            break;
    }
}


//NodeMethDec Subclass---------------------------------------------------------------

nodeMethDec::nodeMethDec(Node *id, Node *plist, Node *b) :
    Node("<methdec> --> VOID ID ( <paramlist> ) <block>", 1)
{
    ident = id;
    parameterList = plist;
    block = b;
}
nodeMethDec::nodeMethDec(Node *rt, Node *id, Node *plist, Node *b) :
    Node("<methdec> --> <type> ID ( <paramlist> ) <block>", 2)
{
    resultType = rt;
    ident = id;
    parameterList = plist;
    block = b;
}
void nodeMethDec::print(ostream *out, string place)
{
    switch(prodType){
        case 1:
            *out << place + label << endl;
            ident->print(out, place + "  ");
            parameterList->print(out, place + "  ");
            block->print(out, place + "  ");
            break;
        case 2:
            *out << place + label << endl;
            resultType->print(out, place + "  ");
            ident->print(out, place + "  ");
            parameterList->print(out, place + "  ");
            block->print(out, place + "  ");
            break;
    }
}


//NodeResultType Subclass------------------------------------------------------------

nodeResultType::nodeResultType(int pt) :
    Node("<resulttype> --> VOID", pt)
{
    switch(prodType){
        case 1:
            id = "int";
            break;
        case 2:
            id = "void";
            break;
    }
}
nodeResultType::nodeResultType(Node *t) :
    Node("<resulttype> --> <type>", 2)
{
    type = t;
    id = type->getID();
}
void nodeResultType::print(ostream *out, string place)
{
    *out << place + label << endl;
    if(prodType == 2)
    {
        type->print(out, place + "  ");
    }
}


//nodeParameterList------------------------------------------------------------------

nodeParameterList::nodeParameterList() :
    Node("<paramlist> --> EMPTY", 1)
{}
nodeParameterList::nodeParameterList(Node *p) :
    Node("<paramlist> --> <param>", 2)
{
    parameter = p;
}
nodeParameterList::nodeParameterList(Node *pl, Node *p) :
    Node("<paramlist> --> <paramlist> , <param>", 3)
{
    paramList = pl;
    parameter = p;
}
void nodeParameterList::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            break;
        case 2:
            *out << place + label << endl;
            parameter->print(out, place + "  ");
            break;
        case 3:
            paramList->print(out, place);
            *out << place + label << endl;
            parameter->print(out, place + "  ");
            break;
    }
}


//NodeParameter Subclass-------------------------------------------------------------

nodeParameter::nodeParameter(Node *t, Node *nid, string identif, string vdt) :
    Node("<param> --> <type> ID", 1)
{
    type = t;
    ident = nid;
    id = identif;
    vardecType = vdt;
}
void nodeParameter::print(ostream *out, string place)
{
    *out << place + label << endl;
    type->print(out, place + "  ");
    ident->print(out, place + "  ");
}


//NodeBlock Subclass-----------------------------------------------------------------

nodeBlock::nodeBlock(int pt) :
    Node("<block> --> { }", pt)
{}
nodeBlock::nodeBlock(Node *lvds, int pt) :
    Node("<block> --> { ? }", pt)
{
    switch(prodType) {
        case 2:
            setLabel("<block> --> { <local vardecs> }");
            localVarDecs = lvds;
            break;
        case 3:
            setLabel("<block> --> { <statements> }");
            statements = lvds;
            break;
    }
}
nodeBlock::nodeBlock(Node *lvds, Node *st, int pt) :
    Node("<block> --> { <local vardecs> <statements> }", pt)
{
    localVarDecs = lvds;
    statements = st;
}
void nodeBlock::print(ostream *out, string place)
{
    *out << place + label << endl;
    switch(prodType) {
        case 1:
            break;
        case 2:
            localVarDecs->print(out, place + "  ");
            break;
        case 3:
            statements->print(out, place + "  ");
            break;
        case 4:
            localVarDecs->print(out, place + "  ");
            statements->print(out, place + "  ");
            break;
    }
}


//NodeLocalVariableDeclarations

nodeLocalVariableDeclarations::nodeLocalVariableDeclarations(Node *vd) :
    Node("<local vardecs> --> <vardec>", 1)
{
    vardec = vd;
}
nodeLocalVariableDeclarations::nodeLocalVariableDeclarations(Node *vd, Node *vds) :
    Node("<local vardecs> --> <local vardecs> <vardec>", 2)
{
    vardec = vd;
    vardecs = vds;
}
void nodeLocalVariableDeclarations::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            vardec->print(out, place + "  ");
            break;
        case 2:
            vardecs->print(out, place);
            *out << place + label << endl;
            vardec->print(out, place + "  ");
            break;
    }
}

//NodeStatements---------------------------------------------------------------------

nodeStatements::nodeStatements(Node *st, int pt) :
    Node("<statements> --> <statement>", pt)
{
    statement = st;
}
nodeStatements::nodeStatements(Node *st, Node *sts, int pt) :
    Node("<statements> --> <statements> <statement>", pt)
{
    statement = st;
    statements = sts;
}
void nodeStatements::print(ostream *out, string place)
{
    switch(prodType){
        case 1:
            *out << place + label << endl;
            statement->print(out, place + "  ");
            break;
        case 2:
            statements->print(out, place);
            *out << place + label << endl;
            statement->print(out, place + "  ");
            break;
    }
}

//Node statement---------------------------------------------------------------------

nodeStatement::nodeStatement(int pt) :
    Node("<statement> --> ?", pt)
{
    switch(prodType){
        case 1:
            setLabel("<statement> --> SEMI");
            break;
    }
}
nodeStatement::nodeStatement(Node *fnode, int pt) :
    Node("<statement> --> ?", pt)
{
    switch(prodType){
        case 4:
            setLabel("<statement> --> PRINT ( <arglist> ) SEMI");
            arglist = fnode;
            break;
        case 5:
            setLabel("<statement> --> <conditional statement>");
            constate = fnode;
            break;
        case 7:
            setLabel("<statement> --> RETURN <optional expression> SEMI");
            opexp = fnode;
            break;
        case 8:
            setLabel("<statement> --> <block>");
            block = fnode;
            break;
    }
}
nodeStatement::nodeStatement(Node *fnode, Node *snode, int pt) :
    Node("<statement> --> ?", pt)
{
    switch(prodType){
        case 2:
            setLabel("<statement> --> <name> = <expression> SEMI");
            name = fnode;
            expression = snode;
            break;
        case 3:
            setLabel("<statement> --> <name> ( <arglist> ) SEMI");
            name = fnode;
            arglist = snode;
            break;
        case 6:
            setLabel("<statement> --> WHILE ( <expression> ) <statement>");
            expression = fnode;
            statement = snode;
            break;
    }
}
void nodeStatement::print(ostream *out, string place)
{
    switch(prodType){
        case 1:
            *out << place + label << endl;
            break;
        case 2:
            *out << place + label << endl;
            name->print(out, place + "  ");
            expression->print(out, place + "  ");
            break;
        case 3:
            *out << place + label << endl;
            name->print(out, place + "  ");
            arglist->print(out, place + "  ");
            break;
        case 4:
            *out << place + label << endl;
            arglist->print(out, place + "  ");
            break;
        case 5:
            *out << place + label << endl;
            constate->print(out, place + "  ");
            break;
        case 6:
            *out << place + label << endl;
            expression->print(out, place + "  ");
            statement->print(out, place + "  ");
            break;
        case 7:
            *out << place + label << endl;
            opexp->print(out, place + "  ");
            break;
        case 8:
            *out << place + label << endl;
            block->print(out, place + "  ");
            break;
    }
}


//nodeName Subclass------------------------------------------------------------------

nodeName::nodeName(int pt) :
    Node("<name> --> THIS", pt)
{}
nodeName::nodeName(Node* nid, int pt) :
    Node("<name> --> ID", pt)
{
    ident = nid;
    id = ident->getID();
}
nodeName::nodeName(Node* n, Node* snode, int pt) :
    Node("<name> --> ?", pt)
{
    switch(prodType){
        case 3:
            setLabel("<name> --> THIS . ID");
            name = n;
            ident = snode;
            break;
        case 4:
            setLabel("<name> --> <name> [ <expression> ]");
            name = n;
            exp = snode;
            break;
        case 5:
            setLabel("<name> --> <thisHere> . ID");
            name = n;
            ident = snode;
            break;
    }
}
void nodeName::print(ostream *out, string place)
{
    switch(prodType){
        case 1:
            *out << place + label << endl;
            break;
        case 2:
            *out << place + label << endl;
            ident->print(out, place + "  ");
            break;
        case 3:
            *out << place + label << endl;
            name->print(out, place + "  ");
            ident->print(out, place + "  ");
            break;
        case 4:
            *out << place + label << endl;
            name->print(out, place + "  ");
            exp->print(out, place + "  ");
            break;
        case 5:
            *out << place + label << endl;
            name->print(out, place + "  ");
            ident->print(out, place + "  ");
            break;
    }
}


//NodeThisHere Subclass--------------------------------------------------------------

nodeThisHere::nodeThisHere() :
    Node("<thisHere> --> THIS", 1)
{}
void nodeThisHere::print(ostream *out, string place)
{
    *out << place + label << endl;
}


//NodeArgList Subclass---------------------------------------------------------------

nodeArgList::nodeArgList() :
    Node("<arglist> --> EMPTY", 1)
{}
nodeArgList::nodeArgList(Node *p) :
    Node("<arglist> --> <exp>", 2)
{
    exp = p;
}
nodeArgList::nodeArgList(Node *pl, Node *p) :
    Node("<arglist> --> <exp> , <exp>", 3)
{
    exp = p;
    expList = pl;
}
void nodeArgList::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            break;
        case 2:
            *out << place + label << endl;
            exp->print(out, place + "  ");
            break;
        case 3:
            expList->print(out, place);
            *out << place + label << endl;
            exp->print(out, place + "  ");
            break;
    }
}


//nodeConState Subclass--------------------------------------------------------------

nodeConState::nodeConState(Node *e, Node *s, int pt) :
    Node("<conditional statement> --> IF ( <exp> ) <statement>", 1)
{
    fexp = e;
    statement = s;
}
nodeConState::nodeConState(Node *fe, Node *s, Node *se, int pt) :
    Node("<conditional statement> --> IF ( <exp> ) <statement> ELSE <exp>", 2)
{
    fexp = fe;
    statement = s;
    sexp = se;
}
void nodeConState::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            fexp->print(out, place + "  ");
            statement->print(out, place + "  ");
            break;
        case 2:
            *out << place + label << endl;
            fexp->print(out, place + "  ");
            statement->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
    }
}


//nodeOpExp subclass-----------------------------------------------------------------

nodeOpExp::nodeOpExp() :
    Node("<optional expression> --> EPSILON", 1)
{}
nodeOpExp::nodeOpExp(Node* e) :
    Node("<optional expression> --> <exp>", 2)
{
    exp = e;
}
void nodeOpExp::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            break;
        case 2:
            exp->print(out, place);
            break;
    }
}


//nodeExpression subclass------------------------------------------------------------

nodeExpression::nodeExpression(int pt) :
    Node("<exp> --> ?", pt)
{
    switch(prodType) {
        case 3:
            setLabel("<exp> --> NULL");
            break;
        case 5:
            setLabel("<exp> --> READ ( )");
            break;
    }
}
nodeExpression::nodeExpression(Node *fnode, int pt) :
    Node("<exp> --> ?", pt)
{
    switch(prodType) {
        case 1:
            name = fnode;
            id = name->getID(); 
            setLabel("<exp> --> <name>");
            break;
        case 2:
            number = fnode;
            setLabel("<exp> --> NUM");
            break;
        case 6:
            newexp = fnode;
            setLabel("<exp> --> <newexp>");
            break;
        case 7:
            fexp = fnode;
            setLabel("<exp> --> PLUS <exp>");
            break;
        case 8:
            fexp = fnode;
            setLabel("<exp> --> MINUS <exp>");
            break;
        case 9:
            fexp = fnode;
            setLabel("<exp> --> NOT <exp>");
            break;
        case 22:
            fexp = fnode;
            setLabel("<exp> --> LPARAEN <exp> RPAREN");
            break;
    }
}
nodeExpression::nodeExpression(Node *fnode, Node *snode, int pt) :
    Node("<exp> --> ? ?", pt)
{
    switch(prodType) {
        case 4:
            setLabel("<exp> --> <name> ( <arglist> )");
            name = fnode;
            arglist = snode;
            break;
        case 10:
            setLabel("<exp> --> <exp> EQ <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 11:
            setLabel("<exp> --> <exp> NE <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 12:
            setLabel("<exp> --> <exp> LE <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 13:
            setLabel("<exp> --> <exp> GE <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 14:
            setLabel("<exp> --> <exp> LT <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 15:
            setLabel("<exp> --> <exp> GT <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 16:
            setLabel("<exp> --> <exp> PLUS <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 17:
            setLabel("<exp> --> <exp> MINUS <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 18:
            setLabel("<exp> --> <exp> OR <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 19:
            setLabel("<exp> --> <exp> TIMES <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 20:
            setLabel("<exp> --> <exp> DIV <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 21:
            setLabel("<exp> --> <exp> MOD <exp>");
            fexp = fnode;
            sexp = snode;
            break;
        case 23:
            setLabel("<exp> --> <exp> AND <exp>");
            fexp = fnode;
            sexp = snode;
            break;
    }
}

void nodeExpression::print(ostream *out, string place)
{
    *out << place + label << endl;
    switch(prodType) {
        case 1:
            name->print(out, place + "  ");
            break;
        case 2:
            number->print(out, place + "  ");
            break;
        case 3:
            //nothing more
            break;
        case 4:
            name->print(out, place + "  ");
            arglist->print(out, place + "  ");
            break;
        case 5:
            //nothing more
            break;
        case 6:
            newexp->print(out, place + "  ");
            break;
        case 7:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 8:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 9:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 10:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 11:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 12:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 13:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 14:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 15:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 16:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 17:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 18:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 19:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 20:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 21:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
        case 22:
            fexp->print(out, place + "  ");
            break;
        case 23:
            fexp->print(out, place + "  ");
            sexp->print(out, place + "  ");
            break;
    }
}


//nodeNewExp subclass----------------------------------------------------------------

nodeNewExp::nodeNewExp(Node *fnode, Node *snode, int pt) :
    Node("<newexp> --> ? ?", pt)
{
    switch(prodType){
        case 1:
            setLabel("<newexp> --> NEW ID ( <arglist> )");
            ident = fnode;
            arglist = snode;
            break;
        case 3:
            setLabel("<newexp> --> NEW <simpletype> <brackexps>");
            simpletype = fnode;
            expressions = snode;
            break;
    }
}
nodeNewExp::nodeNewExp(Node *fnode, Node *snode, Node *tnode, int pt) :
    Node("<newexp> --> NEW <simpletype> <brackexps> <bracks>", pt)
{
    simpletype = fnode;
    expressions = snode;
    brackets = tnode;
}
void nodeNewExp::print(ostream *out, string place)
{
    *out << place + label << endl;
    switch(prodType){
        case 1:
            ident->print(out, place + "  ");
            arglist->print(out, place + "  ");
            break;
        case 2:
            simpletype->print(out, place + "  ");
            expressions->print(out, place + "  ");
            break;
        case 3:
            simpletype->print(out, place + "  ");
            expressions->print(out, place + "  ");
            brackets->print(out, place + "  ");
            break;
    }
}


//nodeBrackExpressions subclass------------------------------------------------------

nodeBrackExpressions::nodeBrackExpressions(Node* exp) :
    Node("<brackexps> --> LBRACK <exp> RBRACK", 1)
{
    expression = exp;
}
nodeBrackExpressions::nodeBrackExpressions(Node* bes, Node* exp) :
    Node("<bracketexps> --> <bracketexps> LBRACK <exp> RBRACK", 2)
{
    expression = exp;
    brackets = bes;
}
void nodeBrackExpressions::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl; 
            expression->print(out, place + "  ");
            break;
        case 2:
            brackets->print(out, place);
            *out << place + label << endl;
            expression->print(out, place + "  ");
            break;
    }
}


//nodeBracks subclass----------------------------------------------------------------

nodeBracks::nodeBracks() :
    Node("<bracks> --> LBRACK RBRACK", 1)
{}
nodeBracks::nodeBracks(Node *bs) :
    Node("<bracks> --> <bracks> LBRACK RBRACK", 2)
{
    bracks = bs;
}
void nodeBracks::print(ostream *out, string place)
{
    switch(prodType) {
        case 1:
            *out << place + label << endl;
            break;
        case 2:
            bracks->print(out, place);
            *out << place + label << endl;
            break;
    }
}


//nodeUnaryOp subclass --------------------------------------------------------------

nodeUnaryOp::nodeUnaryOp(int pt) :
    Node("<unaryop> --> ?", pt)
{
    switch (prodType) {
        case 1:
            setLabel("<unaryop> --> +");
            break;
        case 2:
            setLabel("<unaryop> --> -");
            break;
        case 3:
            setLabel("<unaryop> --> !");
            break;
    }
}
void nodeUnaryOp::print(ostream *out, string place)
{
    *out << place + label << endl;
}


//nodeRelationOp subclass -----------------------------------------------------------

nodeRelationOp::nodeRelationOp(int pt) :
    Node("<relationop> --> ?", pt)
{
    switch (prodType) {
        case 1:
            setLabel("<relationop> --> ==");
            break;
        case 2:
            setLabel("<relationop> --> !=");
            break;
        case 3:
            setLabel("<relationop> --> <=");
            break;
        case 4:
            setLabel("<relationop> --> >=");
            break;
        case 5:
            setLabel("<relationop> --> <");
            break;
        case 6:
            setLabel("<relationop> --> >");
            break;
    }
}
void nodeRelationOp::print(ostream *out, string place)
{
    *out << place + label << endl;
}


//nodeSumOp subclass ----------------------------------------------------------------


nodeSumOp::nodeSumOp(int pt) :
    Node("<sumop> --> ?", pt)
{
    switch (prodType) {
        case 1:
            setLabel("<sumop> --> +");
            break;
        case 2:
            setLabel("<sumop> --> -");
            break;
        case 3:
            setLabel("<sumop> --> ||");
            break;
    }
}
void nodeSumOp::print(ostream *out, string place)
{
    *out << place + label << endl;
}

//nodeProductOp subclass ------------------------------------------------------------

nodeProductOp::nodeProductOp(int pt) :
    Node("<productop> --> ?", pt)
{
    switch (prodType) {
        case 1:
            setLabel("<productop> --> *");
            break;
        case 2:
            setLabel("<productop> --> /");
            break;
        case 3:
            setLabel("<productop> --> %");
            break;
        case 4:
            setLabel("<productop> --> &&");
            break;
    }
}
void nodeProductOp::print(ostream *out, string place)
{
    *out << place + label << endl;
}








/*

//Constructors
nodeExp::nodeExp(int pt) :
    Node("<exp> --> ?", pt)
{
    switch(prodType) {
        case 3:
            setLabel("<exp> --> NULL");
            break;
        case 4:
            setLabel("<exp> --> READ LPAREN RPAREN");
            break;

    }
}
nodeExp::nodeExp(Node *fi, int pt) :
    Node("<exp> --> ?", pt)
{
    switch(prodType) {
        case 1:
            setLabel("<exp> --> <name>");
            name = fi;
            break;
        case 2:
            setLabel("<exp> --> NUMBER");
            numb = fi;
            break;
        case 5:
            setLabel("<exp> --> <newexp>");
            newexp = fi;
            break;
        case 6:
            setLabel("<exp> --> LPAREN <exp> RPAREN");
            firstexp = fi;
            break;
        case 7:
            setLabel("<exp> --> <name> LPAREN RPAREN");
            name = fi;
            break;
        case 21:
            setLabel("<exp> --> MINUS <exp>");
            firstexp = fi;
            break;
        case 22:
            setLabel("<exp> --> PLUS <exp>");
            firstexp = fi;
            break;
        case 23:
            setLabel("<exp> --> NOT <exp>");
            firstexp = fi;
            break;
    }
}
nodeExp::nodeExp(Node *fi, Node *si, int pt) :
    Node("<exp> --> ?", pt)
{
    switch(prodType) {
        case 8:
            setLabel("<exp> --> <exp> PLUS <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 9:
            setLabel("<exp> --> <exp> MINUS <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 10:
            setLabel("<exp> --> <exp> OR <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 11:
            setLabel("<exp> --> <exp> TIMES <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 12:
            setLabel("<exp> --> <exp> DIV <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 13:
            setLabel("<exp> --> <exp> MOD <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 14:
            setLabel("<exp> --> <exp> AND <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 15:
            setLabel("<exp> --> <exp> EQ <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 16:
            setLabel("<exp> --> <exp> NE <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 17:
            setLabel("<exp> --> <exp> GE <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 18:
            setLabel("<exp> --> <exp> LE <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 19:
            setLabel("<exp> --> <exp> GT <exp>");
            firstexp = fi;
            secondexp = si;
            break;
        case 20:
            setLabel("<exp> --> <exp> LT <exp>");
            firstexp = fi;
            secondexp = si;
            break;

    }
}
void nodeExp::print(ostream *out, string place)
{
    *out << place + label << endl;
    switch(prodType){
        case 1:
            name->print(out, place + "  ");
            break;
        case 2:
            numb->print(out, place + "  ");
            break;
        case 3:
            //nothing more
            break;
        case 4:
            //nothing more
            break;
        case 5:
            newexp->print(out, place + "  ");
            break;
        case 6:
            firstexp->print(out, place + "  ");
            break;
        case 7:
            name->print(out, place + "  ");
            break;
        case 8:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 9:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 10:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 11:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 12:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 13:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 14:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 15:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 16:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 17:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 18:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 19:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 20:
            firstexp->print(out, place + "  ");
            secondexp->print(out, place + "  ");
            break;
        case 21:
            firstexp->print(out, place + "  ");
            break;
        case 22:
            firstexp->print(out, place + "  ");
            break;
        case 23:
            firstexp->print(out, place + "  ");
            break;
    } 
}

//NodeNewExp Subclass ---------------------------------------------------------------
//Constructors
nodeNewExp::nodeNewExp(Node *fi, int pt) :
    Node("<newexp> --> ?", pt)
{
    switch(prodType) {
        case 1:
            setLabel("<newexp> --> NEW ID LPAREN RPAREN");
            id = fi;
            break;
        case 2:
            setLabel("<newexp> --> NEW <simpletype>");
            simpletype = fi;
            break;
    }
}
nodeNewExp::nodeNewExp(Node *fi, Node *si, int pt) :
    Node("<newexp> --> ?", pt)
{
    switch(prodType) {
        case 3:
            setLabel("<newexp> --> NEW <simpletype> <bracketexps>");
            simpletype = fi;
            bracketexps = si;
            break;
        case 4:
            setLabel("<newexp> --> NEW ID <bracketexps>");
            id = fi;
            bracketexps = si;
            break;
    }
}
nodeNewExp::nodeNewExp(Node *fi, Node *si, Node *ti, int pt) :
    Node("<newexp> --> ?", pt)
{
    switch(prodType) {
        case 5:
            setLabel("<newexp> --> NEW <simpletype> <bracketexps> <multibrackets>");
            simpletype = fi;
            bracketexps = si;
            multibrackets = ti;
            break;
        case 6:
            setLabel("<newexp> --> NEW ID <bracketexps> <multibrackets>");
            id = fi;
            bracketexps = si;
            multibrackets = ti;
            break;
    }
}
void nodeNewExp::print(ostream *out, string place)
{
    *out << place + label << endl;
    switch(prodType) {
        case 1:
            id->print(out, place + "  ");
            break;
        case 2:
            simpletype->print(out, place + "  ");
            break;
        case 3:
            simpletype->print(out, place + "  ");
            bracketexps->print(out, place + "  ");
            break;
        case 4:
            id->print(out, place + "  ");
            bracketexps->print(out, place + "  ");
            break;
        case 5:
            simpletype->print(out, place + "  ");
            bracketexps->print(out, place + "  ");
            multibrackets->print(out, place + "  ");
            break;
        case 6:
            id->print(out, place + "  ");
            bracketexps->print(out, place + "  ");
            multibrackets->print(out, place + "  ");
            break;
    }
}


//NodeType Subclass -----------------------------------------------------------------
//Constructors
nodeType::nodeType(Node *st) :
    Node("<type> --> <simpletype>", 1)
{
    simpleType = st;
}
void nodeType::print(ostream *out, string place)
{
    *out << place + label << endl;
    simpleType->print(out, place + "  ");
}
//NodeSimpleType Subclass------------------------------------------------------------
//Constructors
nodeSimpleType::nodeSimpleType() :
    Node("<simpletype> --> INT", 1)
{}
void nodeSimpleType::print(ostream *out, string place)
{
    *out << place + label << endl;
}


//NodeBracketExps Subclass ---------------------------------------------------------
//Constructors
nodeBracketExps::nodeBracketExps(Node *be) :
    Node("<bracketexps> --> <bracketexp>", 1)
{
    bracketexp = be;
}
nodeBracketExps::nodeBracketExps(Node *bes, Node *be) :
    Node("<bracketexps> --> <bracketexps> <bracketexp>", 2)
{
    bracketexps = bes;
    bracketexp = be;
}
void nodeBracketExps::print(ostream *out, string place)
{
    *out << place + label << endl;
    switch(prodType) {
        case 1:
            bracketexp->print(out, place + "  ");
            break;
        case 2:
            bracketexps->print(out, place + "  ");
            bracketexp->print(out, place + "  ");
            break;
    }
}


//NodeBracketExp Subclass -----------------------------------------------------------
//Constructors
nodeBracketExp::nodeBracketExp(Node *e) :
    Node("<bracketexp> --> LBRACK <exp> RBRACK")
{
    exp = e;
}
void nodeBracketExp::print(ostream *out, string place)
{
    *out << place + label << endl;
    exp->print(out, place + "  ");
}

//NodeMultibrackets Subclass --------------------------------------------------------
//Constructors
nodeMultibrackets::nodeMultibrackets() :
    Node("<multibrackets> --> LBRACK RBRACK", 1){}
nodeMultibrackets::nodeMultibrackets(Node *mb) :
    Node("<multibrackets> --> <multibrackets> LBRACK RBRACK", 2)
{
    multibrackets = mb;
}
void nodeMultibrackets::print(ostream *out, string place)
{
    *out << place + label << endl;
    switch(prodType) {
        case 1:
            break;
        case 2:
            multibrackets->print(out, place + "  ");
            break;
    }
}

//NodeName Subclass -----------------------------------------------------------------
//Constructors
nodeName::nodeName() :
    Node("<name> --> THIS", 1){}
nodeName::nodeName(Node *fi) :
    Node("<name> --> ID", 2)
{
    id = fi;
}
nodeName::nodeName(Node *fi, Node *si, int pt) :
    Node("<name> --> ?", pt)
{
    switch(prodType) {
        case 3:
            setLabel("<name> --> <name> DOT ID");
            name = fi;
            id = si;
            break;
        case 4:
            setLabel("<name> --> <name> <bracketexps>");
            name = fi;
            bracketexps = si;
            break;
    }
}
void nodeName::print(ostream *out, string place)
{
    *out << place + label << endl;
    switch(prodType) {
        case 1:
           break;
        case 2:
            id->print(out, place + "  ");
            break;
        case 3:
            name->print(out, place);
            id->print(out, place + "  ");
            break;
        case 4:
            name->print(out, place + "  ");
            bracketexps->print(out, place + "  ");
            break;
    }
}
*/
//NodeID Subclass--------------------------------------------------------------------
//Constructors
nodeID::nodeID(string i) :
    Node("ID --> " + i, 1)
{
    setID(i);
    id = i;
}
void nodeID::print(ostream *out, string place)
{
    *out << place + label << endl;
}
//NodeNum Subclass-------------------------------------------------------------------
//Constructors
nodeNum::nodeNum(int n) :
    Node("NUMBER --> ?", 1)
{
    setNum(n);
    num = n;
    string wordnum = std::to_string(num);
    setLabel("NUMBER --> " + wordnum);
}
void nodeNum::print(ostream *out, string place)
{
    *out << place + label << endl;
}



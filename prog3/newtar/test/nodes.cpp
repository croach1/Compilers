//Program 3
//Colton Roach
//October 17, 2022
//COSC 4785

#include "nodes.hpp"

//Node Class-----------------------------------------------------------------------

Node::Node(string lbl, int pt) :
    label(lbl),prodType(pt)
{    
    //reset();
}
Node::~Node(){}
void Node::print(ostream *out, string place)
{
        *out << place +  label << endl;
}

//NodeProgram Subclass---------------------------------------------------------------
//Constructors
nodeProgram::nodeProgram(Node *ne) :
    Node("<program> --> <elements>", 1)
{
    elements = ne;
}
nodeProgram::nodeProgram(Node *np, Node *ne) :
    Node("<program> --> <program> <elements>", 2)
{
    elements = ne;
    program = np;
}
void nodeProgram::print(ostream *out, string place)
{
        *out << place + label << endl;
        switch(prodType) {
                case 1:
                        elements->print(out, place + "  ");
                        break;
                case 2:
                        //elements->print(out, place + "  ");
                        //program->print(out, place);
                        program->print(out, place);
                        elements->print(out, place + "  ");
                        break;
        }
}

//NodeElements Subclass--------------------------------------------------------------
//Constructors
nodeElements::nodeElements(Node *vd, int pt) :
    Node("<elements> --> ?", pt)
{
    switch(prodType) {
        case 1:
            setLabel("<elements> --> <vardec>");
            vardec = vd;
            break;
        case 2:
            setLabel("<elements> --> <exp> SEMI");
            exp = vd;
            break;
    }
}
void nodeElements::print(ostream *out, string place)
{
        *out << place + label << endl;
        switch(prodType) {
                case 1:
                        vardec->print(out, place + "  ");
                        break;
                case 2:
                        exp->print(out, place + "  ");
                        break;
        }
}


//NodeVarDec Subclass----------------------------------------------------------------
//Constructors
nodeVarDec::nodeVarDec(Node *fid, Node *sid, int pt):
    Node("<vardec> --> ?", pt)
{
    switch(pt) {
        case 1:
            setLabel("<vardec> --> <type> ID SEMI");
            type = fid;
            secondId = sid;
            break;
        case 2:
            setLabel("<vardec> --> ID ID SEMI");
            firstId = fid;
            secondId = sid;
            break;
    }
}
nodeVarDec::nodeVarDec(Node *fid, Node *mb, Node *sid, int pt):
    Node("<vardec> --> ?", pt)
{
    switch(pt) {
        case 3:
            setLabel("<vardec> --> <type> <multibrackets> ID SEMI");
            type = fid;
            multibrackets = mb;
            secondId = sid;
            break;
        case 4:
            setLabel("<vardec> --> ID <multibrackets> ID SEMI");
            firstId = fid;
            multibrackets = mb;
            secondId = sid;
            break;
    }
}
void nodeVarDec::print(ostream *out, string place)
{
    *out << place + label << endl;
    switch(prodType) {
        case 1:
            type->print(out, place + "  ");
            secondId->print(out, place + "  ");
            break;
        case 2:
            firstId->print(out, place + "  ");
            secondId->print(out, place + "  ");
            break;
        case 3:
            type->print(out, place + "  ");
            multibrackets->print(out, place + "  ");
            secondId->print(out, place + "  ");
            break;
        case 4:
            firstId->print(out, place + "  ");
            multibrackets->print(out, place + "  ");
            secondId->print(out, place + "  ");
            break;
    }
}

//NodeExp Subclass ------------------------------------------------------------------
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

//NodeID Subclass--------------------------------------------------------------------
//Constructors
nodeID::nodeID(string i) :
    Node("ID --> " + i, 1)
{
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
    num = n;
    string wordnum = std::to_string(num);
    setLabel("NUMBER --> " + wordnum);
}
void nodeNum::print(ostream *out, string place)
{
    *out << place + label << endl;
}

//Program 5
//Colton Roach
//December 2, 2022
//COSC 4785

#include "symbols.hpp"

SymbolTable::SymbolTable(string lbl, SymbolTable *p)
{
    label = lbl;
    parent = p;
}

SymbolTable::SymbolTable(string lbl, string cn, SymbolTable *p)
{
    label = lbl;
    className = cn;
    parent = p;
}

string SymbolTable::getLabel()
{
    return label;
}
string SymbolTable::getClassName()
{
    return className;
}
void SymbolTable::setLabel(string lbl)
{
    label = lbl;
}
void SymbolTable::setClassName(string cn)
{
    className = cn;
}
void SymbolTable::setMethodReturnType(string rt)
{
    methodReturnType = rt;
}

int SymbolTable::setParent(SymbolTable *p)
{
    parent = p;
    return 0;
}


int SymbolTable::insertNonClassType(string type)
{
    nonClassTypes.push_back(type);
    return 0;
}
int SymbolTable::insertClassType(SymbolTable *ct)
{
    classTypes.push_back(*ct);
    return 0;
}
int SymbolTable::insertVariable(string id, string type)
{
    variables.insert(make_pair(id, type));
    return 0;
}
int SymbolTable::insertConstructor(SymbolTable *cons)
{
    constructors.push_back(*cons);
    return 0;
}
int SymbolTable::insertMethod(SymbolTable *meth)
{
    constructors.push_back(*meth);
    return 0;
}
int SymbolTable::insertParameter(string id, string type)
{
    parameters.insert(make_pair(id, type));
    return 0;
}

int SymbolTable::insertBlock(SymbolTable *b)
{
    blocks.push_back(*b);
    return 0;
}


void SymbolTable::print(ostream *out, string place)
{
    bool output = false;
    if(className.length() > 0)
    {
        *out << place + className << endl;
        place += "  ";
    }
    
    if(methodReturnType.length() > 0)
    {
        *out << place + label + ": " + methodReturnType << endl;
    }
    else
    {
        *out << place + label << endl;
    }
    place += "  ";

    if(!classTypes.empty())
    {
        output=true;
        for(SymbolTable x : classTypes)
        {
            x.print(out, place);
        }
    }

    if(!nonClassTypes.empty())
    {
        output=true;
        for(string x : nonClassTypes)
        {
            *out << place + x  << endl;
        }
    }

    if(!parameters.empty())
    {
        output=true;
        int pos = 1;
        for(auto x : parameters)
        {
            *out << place << "parameter " << pos << "(" << x.first << ": " << x.second << ")" << endl;
            pos++;
        }
    }

    if(!variables.empty())
    {
        output=true;
        for(auto x : variables)
        {
            *out << place << x.first << ": " << x.second << endl;
        }
    }

    if(!constructors.empty())
    {
        output=true;
        for(SymbolTable x : constructors)
        {
            x.print(out, place);
        }
    }

    if(!methods.empty())
    {
        output=true;
        for(SymbolTable x : methods)
        {
            x.print(out, place);
        }
    }

    if(!blocks.empty())
    {
        output=true;
        for(SymbolTable x : blocks)
        {
            x.print(out, place);
        }
    }
    if(!output)
    {
        *out << place + "EMPTY" << endl;
    }
}

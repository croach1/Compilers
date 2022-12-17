//Program 6
//Colton Roach
//December 12, 2022
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
void SymbolTable::setMethodName(string mn)
{
    methodName = mn;
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
    methods.push_back(*meth);
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

string SymbolTable::getMethodName()
{
    return methodName;
}
int SymbolTable::getParameterCount()
{
    return parameters.size();
}
string SymbolTable::getMethodReturnType()
{
    return methodReturnType;
}
vector<SymbolTable> SymbolTable::getMethods()
{
    return methods;
}

string SymbolTable::validateMain()
{
    int maincount = 0;
    for(SymbolTable classType : classTypes)
    {
        for(SymbolTable method : classType.methods)
        {
            if(method.methodName == "main")
            {
                maincount += 1;
                if(method.parameters.size() > 0)
                {
                    return "Main method must not have parameters, Exiting...";
                }
                if(maincount > 1)
                {
                    return "Must have exactly 1 main method, Exiting";
                }
                if(method.methodReturnType != "int" && method.methodReturnType != "void")
                {
                    return "Main method must return int or void, Exiting...";
                }
            }
        }
    }
    if(maincount != 1)
    {
        return "Must have exactly 1 main method, Exiting...";
    }
    return "";
}

/*
string SymbolTable::lookup(string id, unordered_map<string, string> tempClassVars, 
    unordered_map<string, string> tempConsVars,
    unordered_map<string, string> tempMethVars,
    unordered_map<string, string> tempBlockVars,
    map<string, string> tempMethParams,
    map<string, string> tempConsParams)
{
    for(auto x : tempMethVars)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    for(auto x : tempMethParams)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    for(auto x : tempConsVars)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    for(auto x : tempConsParams)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    for(auto x : tempBlockVars)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    //This comes last
    for(auto x : tempClassVars)
    {
        if(x.first == id)
        {
            return x.second;
        }
    }
    return "";
}
*/

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

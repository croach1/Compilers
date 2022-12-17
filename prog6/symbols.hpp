// symbols.hpp
// Colton Roach
// COSC 4785 Fall 2022
// December 12, 2022
// Program 6

#ifndef SYMBOLS_HPP
#define SYMBOLS_HPP
#include<iostream>
#include<string>
#include<unordered_map>
#include<map>
#include<vector>

using std::string;
using std::endl;
using std::ostream;
using std::unordered_map;
using std::vector;
using std::map;
using std::cout;

class SymbolTable
{
    public:
        SymbolTable(string lbl, SymbolTable *p=nullptr);
        SymbolTable(string lbl, string cn, SymbolTable *p=nullptr);

        string getLabel();
        string getClassName();
        void setLabel(string lbl);
        void setClassName(string cn);
        void setMethodReturnType(string rt);
        void setMethodName(string mn);

        string getMethodName();
        int getParameterCount();
        string getMethodReturnType();

        vector<SymbolTable> getMethods();

        int setParent(SymbolTable *p);
        SymbolTable* getParent(){return parent;};

        int insertNonClassType(string type);
        int insertClassType(SymbolTable *ct);

        int insertConstructor(SymbolTable *cons);
        int insertMethod(SymbolTable *meth);

        int insertVariable(string id, string type);
        int insertParameter(string id, string type);

        int insertBlock(SymbolTable *b);

        string validateMain();
        
/*
        string lookup(string id, unordered_map<string, string> tempClassVars, 
                      unordered_map<string, string> tempConsVars,
                      unordered_map<string, string> tempMethVars,
                      unordered_map<string, string> tempBlockVars,
                      map<string, string> tempMethParams,
                      map<string, string> tempConsParams);
*/

        virtual void print(ostream *out = 0, string place = "");
    protected:
        SymbolTable *parent;
        
        string label;
        string className="";
        string methodReturnType="";
        string methodName="";
        
        vector<string> nonClassTypes;   //only used in type table
        vector<SymbolTable> classTypes; //only used in type table

        vector<SymbolTable> constructors;
        vector<SymbolTable> methods;
        vector<SymbolTable> blocks;

        unordered_map<string, string> variables;
        map<string, string> parameters;
};

#endif

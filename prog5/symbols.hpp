// symbols.hpp
// Colton Roach
// COSC 4785 Fall 2022
// December 2, 2022
// Program 5

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

        int setParent(SymbolTable *p);

        int insertNonClassType(string type);
        int insertClassType(SymbolTable *ct);

        int insertConstructor(SymbolTable *cons);
        int insertMethod(SymbolTable *meth);

        int insertVariable(string id, string type);
        int insertParameter(string id, string type);

        int insertBlock(SymbolTable *b);

        virtual void print(ostream *out = 0, string place = "");
    protected:
        SymbolTable *parent;
        
        string label;
        string className="";
        string methodReturnType="";
        
        vector<string> nonClassTypes;   //only used in type table
        vector<SymbolTable> classTypes; //only used in type table

        vector<SymbolTable> constructors;
        vector<SymbolTable> methods;
        vector<SymbolTable> blocks;

        unordered_map<string, string> variables;
        map<string, string> parameters;
};

#endif

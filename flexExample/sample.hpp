/*******************************
 * sample.hpp
 * $Author: kbuckner $
 * $Date: 2020-08-25 13:03:41-06 $
 * $Id: sample.hpp,v 1.1 2020-08-25 13:03:41-06 kbuckner Exp kbuckner $
 *
 * Purpose of this file is to allow variables to be shared between the scanner
 * and the driver. The variables are declared in the driver (.cpp)
 *
 * Do NOT have to have this, can just put any extern declarations in the .lpp
 * file.
 *
 * Or declare enums or #defines or anything you want shared. 
 *
 * $Log: sample.hpp,v $
 * Revision 1.1  2020-08-25 13:03:41-06  kbuckner
 * Initial revision
 *
 *
 *
 *********************************/

#ifndef SAMPLE_HPP
#define SAMPLE_HPP
/*
 * This allows that variable to be declared in a different file and 'shared'
 * with files that include this header. It tells the compiler that it has been
 * declared someplace and then the compiler will 'link' up all the usages of the
 * name "value" so they reference the same storage. 
 */
extern string value;



#endif

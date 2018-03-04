//====================================================================
// Anamay Agnihotri and Aixin Li
// dictionrbt.cpp
// Dictionary definition for RBT
//====================================================================

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

#include "redblack.h"

#ifndef DICTIONRBT_H
#define DICTIONRBT_H



template<class KeyType>
class dictionrbt : public RedBlack<KeyType>
{
public:	
	
/*constructor, destructor and copy constructor inherited from BST<KeyType>*/
	
    // using RedBlack<KeyType>::root;
    // using RedBlack<KeyType>:: NIL;
    
    using RedBlack<KeyType>::empty;
    using RedBlack<KeyType>::get;
    using RedBlack<KeyType>::remove;
    using RedBlack<KeyType>::insert;
    using RedBlack<KeyType>::inOrder;
};

#endif

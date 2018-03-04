//====================================================================
// Anamay Agnihotri and Aixin Li
// Submitted: November 17, 2017
// dictionrbt.cpp
// Dictionary implementation of RBT
//====================================================================

#include<iostream>

/*-----------------------------
* constructor
-----------------------------*/
template<class KeyType>
dictionrbt<KeyType>::dictionrbt()
{
   b = new RedBlack<KeyType>;
}

/*-----------------------------
* destructor
-----------------------------*/
template<class KeyType>
dictionrbt<KeyType>::~dictionrbt()
{
  delete b;
}

/*-----------------------------
* insert
-----------------------------*/

template<class KeyType>
void dictionrbt<KeyType>::insert(KeyType *k)
{
  b->insert(k);
}

// /*-----------------------------
// * remove
// -----------------------------*/

template<class KeyType>
 void dictionrbt<KeyType>::remove(KeyType& k)
 {
   b->remove(k);
 }

/*-----------------------------
* get
-----------------------------*/
template<class KeyType>
KeyType* dictionrbt<KeyType>::get(KeyType& k)
{
  return b->get(k);
}

/*-----------------------------
* empty
-----------------------------*/
template<class KeyType>
bool dictionrbt<KeyType>::empty()
{
  return b->empty();
}

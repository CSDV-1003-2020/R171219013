//Data structure to implement Avl tree 

#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>
#define pow2(n) (1 << (n))
using namespace std;
struct avl {
   int d;
   struct avl *l;
   struct avl *r;
}*r;

#include "address.h"
#include <bits/stdc++.h>
using namespace std;
string Address::getAddress(){
    return flat_no + street + locality + district + state;
}
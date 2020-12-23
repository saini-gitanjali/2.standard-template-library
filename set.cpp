//sets 
//each operation takes logn time
//elements are stored in a sorted order so need of sort operation


#include <iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
  set<int> s;
  
 //inserting element into set
 s.insert(1);               //insetead of hardcoded value 1 a vairable can also be written
 s.insert(2);
 s.insert(-1);
 s.insert(-10);
 
 for(int x:s)
    cout<<x<<" ";
cout<<endl;

//finding if -1 is present in set set
auto it = s.find(-1);           //find returns the iterator to  the element if found else points to last element
cout<<*it<<endl;

if(it == s.end())           
    cout<<"not present";
else
    cout<<"present";

//finding no. strictly greater than some no.
auto it2 = s.lower_bound(-1);   //returns iterator to >= -1
auto it3 = s.upper_bound(0);   //return iterator tp > 0
cout<<endl<< *it2<<" "<<*it3<<endl;

auto it4 = s.upper_bound(2);        //since no no. is >2 this will return s.end()
if(it4 ==  s.end())
    cout<<"\ncan't find upper bound of 2"<<endl;

s.erase(1);     //will deete 1 from set
for(auto x:s)
cout<<x<<" ";

    
}

#include<bits/stdc++.h>
using namespace std;
int main()

{
             //vector
	vector<int>v;
	v.push_back(1);
	cout<<"capcity"<<v.capacity()<<endl;
		v.push_back(2);
	cout<<"capcity"<<v.capacity()<<endl;
		v.push_back(3);
	cout<<"capcity"<<v.capacity()<<endl;
	cout<<"size-->"<<v.size()<<endl;
	for(int i:v){
		cout<<i<<endl;
	}
         //Queue or deque

	deque<int>d;
	d.push_front(1);
	d.push_back(2);
	 for(int i:d)
	 {
	 	cout<<i<<" ";
	 }
d.pop_front() 
d.pop_back()
 d.erase(d.begin(),d.begin()+1);
 for(int i:d)
 {
 	cout<<i<<" ";
	  }	 
          //List
         {
         	list<int>l;
         	list<int>n(5,100);
         	cout<<"print n"<<endl;
         	for(int i:n)
         	{
         		cout<<i<<" ";
			 }
         	l.push_back(1);
         	l.push_front(2);                         
         	for(int i:l)
         	{
         		cout<<i<<" ";
			 }
		 }
           //  Set
   {
   	 set<int>s;
   	 s.insert(4);
   	 s.insert(3);
   	 s.insert(2);
   	 s.insert(4);
   	 for(auto i:s){
   	 	cout<<i<<endl;
		}
   }
         //MAP
         //unquie key in sorted order
   {
   	map<int,int>mpp;   // first int key and int value
   	mpp.insert({2,4});
   	for(auto it:mpp)
   	{
   		cout<<it.first<<" "<<it.second<< " ";
	   }
   	 auto it=mpp.find(4);
   	 cout<< *(it).second;
   }
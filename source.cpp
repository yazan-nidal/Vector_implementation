#include<iostream>
#include"Vheader.h"
using namespace std;
// C
template<class T>
Vector <T> ::  Vector(int mc=10)
{
	(*this).capacity=mc;
	(*this).A=new T[(*this).capaCity()];
	(*this).cleaR();
	//cout<<" 3 in 1 C\n";
}

template<class T>
Vector <T> ::  Vector(const Vector &obj)
{
	(*this).A=NULL;
	(*this)=obj;
	//cout<<" copy C \n";
}
// /C

// tag1
template<class T>
int Vector <T> :: capaCity()const{ return (*this).capacity; }

template<class T>
void Vector <T> :: cleaR()
{
	//if((*this).A == NULL){(*this).n=0; (*this).capacity=0; return;}
	(*this).n=0;
	for(int i=0;i<(*this).capaCity();i++)this->A[i]='\0'; 
	// instal Initial value for Items of vector
}

template<class T>
int Vector <T> :: sizE()const{  return this->n; }

template<class T>
bool Vector <T> :: isEmpty()const
{
	if( (((*this).sizE()) == 0) /*|| ((*this).A == NULL)*/ )return true;
	return false;
}

template<class T>
void Vector <T> ::  reSize()
{   
	(*this).capacity=((*this).capaCity())*2;
	T* temp=new T[(*this).capaCity()];
	for(int i=0;i<(*this).capaCity();i++)temp[i]='\0'; // instal Initial value for Items of vector
	for(int i=0;i<(*this).sizE();i++)temp[i]=(*this).A[i]; // copy data 
	delete []A;
	(*this).A=temp;
	//cout<<" re\n";
}

template<class T>
void Vector<T> :: prinT()
{
	if((*this).isEmpty()){cout<<" Error empty vector \n" ; return;}
	cout<<" The Vector is : ";
	for(int i=0;i<(*this).sizE();i++){cout<<(*this).A[i]<<" ";}
	cout<<"\n";
}
// /tag1

// tag2
template<class T>
T Vector <T> :: lastItem()
{
	if(!(*this).isEmpty())
		return this->A[(*this).sizE()-1];
	cout<<" Error empty Vector : ";
	return '\0';
}

template<class T>
T Vector <T> :: firstItem()
{
	if(!(*this).isEmpty())
		return this->A[0];
	cout<<" Error empty Vector : ";
	return '\0';
}

template<class T>
bool Vector <T> :: containsItem(const T &item)const
{
	for(int i=0;i<(*this).sizE();i++)
	{
		if(item == ((*this).A[i])){ return true; }
	} 
	return false;
}

template<class T>
int Vector <T> :: indexOF_F(const T &item)const
{
	for(int i=0;i<(*this).sizE();i++)
	{
		if(item == ((*this).A[i])){ return i; }
	} 
		return -1;
}

template<class T>
int Vector <T> :: indexOF_L(const T &item)
{
	int loc=-1;
	for(int i=0;i<(*this).sizE();i++)
	{
		if(item == ((*this).A[i])){ loc=i; }
	} 
		return loc;
}

template<class T>
T Vector<T> ::  getElment(int index)
{
	return (*this).operator[](index);
}

template<class T>
T Vector<T> ::  elementAT(int index)
{
	return(*this).getElment(index);
}

template<class T>
void Vector <T> :: set_(const T &item,int index)
{
	if((*this).isEmpty()){cout<<" Error the Vector is Empty !!! \n"; return;}
	if(index < 0){cout<<" Error the index is not existed / Negative index / !!! \n"; return; }
	if( index >= (*this).capaCity() ){ cout<<" Error the index is not existed / out of range / !!! \n"; return; }
	if(index >= (*this).sizE() ){cout<<" You must use a valid index that does not exceed size\n"; return; }
	*((*this).A + index)=item;
}
// /tag2

template<class T>
void Vector <T> :: addBack(const T &item)// private
{
	//if( ((*this).sizE()) == ((*this).capaCity() ){(*this).reSize();}
	A[((*this).n++)]=item;
	//cout<<" addBack\n";
}

template<class T>
void Vector <T> :: addElement(const T &item,int index)// private
{
	//if( ((*this).sizE()) == ((*this).capaCity() ){(*this).reSize();}
	A[index]=item;
	//cout<<" addIndex\n";
}

template<class T>
void Vector <T> :: add_(const T &item,int index)
{
	if(index < 0){cout<<" Error the index is not existed / Negative index / !!! \n"; return; }
	if( index > (*this).capaCity() ){ cout<<" Error the index is not existed / out of range / !!! \n"; return; }
	if(index > (*this).sizE() ){cout<<" You must use a valid index that does not exceed size\n"; return; }
	if( (*this).sizE() == (*this).capaCity() ){(*this).reSize();}
	if( index == (*this).sizE()){(*this).addBack(item);}
	else
	{
		T t1,t2=item;
		for(int i=index;i<(*this).sizE();i++)//add item && shift 
		{
			t1=t2;
			t2=(*this).A[i];
			(*this).addElement(t1,i);
		}
		(*this).A[(*this).n++]=t2;
	}
}

template<class T>
bool Vector <T> :: add_(const T &item)
{ 
	int i=(*this).sizE();
	(*this).add_(item,(*this).sizE()); 
	return ( i < (*this).sizE() );
}

template<class T>
void Vector <T> :: addComp(const T &item,int index)
{
	if(index < 0){cout<<" Error the index is not existed / Negative index / !!! \n"; return; }
	if( index > (*this).capaCity() ){ cout<<" Error the index is not existed / out of range / !!! \n"; return; }
	if(index > (*this).sizE() ){cout<<" You must use a valid index that does not exceed size\n"; return; }
	// resize = old size +1 
	(*this).capacity=(*this).capaCity()+1;
	T *a=new T[(*this).capaCity()];
	int i=0;
	for(;i<(*this).sizE();i++){a[i]=(*this).A[i];}
	for(;i<(*this).capaCity();i++)a[i]='\0';
	delete [](*this).A;
	(*this).A=a;
	//
	if( index == (*this).sizE()){(*this).addBack(item);}
	else
	{
		T t1,t2=item;
		for(int i=index;i<(*this).sizE();i++)
		{
			t1=t2;
			t2=(*this).A[i];
			(*this).addElement(t1,i);
		}
		(*this).A[(*this).n++]=t2;
	}
}

template<class T>
void Vector <T> :: addComp(const T &item)
{ (*this).addComp(item,(*this).sizE()); }

// /add

// insert
template<class T>
void Vector <T> :: insertElementAT(const T &item,int index)
{
	(*this).add_(item,index);
}

template<class T>
void Vector <T> :: insertElementAT(const T &item)
{
	(*this).add_(item);
}
// /insert

// remove
template<class T>
int Vector<T> :: removE(int index)
{
	if((*this).isEmpty()){cout<<" Error the Vector is Empty ! \n"; return 0;}
	if(index < 0){cout<<" Error Negative index ! \n"; return 0; }
	if(index >= (*this).capaCity() ){cout<<" Error the location is out of range ! \n"; return 0;}
	if(index >= (*this).sizE() ){cout<<" You must use a valid index that does not exceed size \n"; return 0; }
	for(int i=index;i<(*this).sizE()-1;i++)(*this).A[i]=(*this).getElment(i+1);
	(*this).A[(*this).sizE()]='\0';
	(*this).n=(*this).sizE()-1;
	return 1;
}

template<class T>
bool Vector<T> :: removE_F(const T &item)
{
	if((*this).isEmpty()){cout<<" Error the Vector is Empty !!! "; return false;}
	if(!(*this).containsItem(item)){cout<<" Error  the vector not contain the iteam \n"; return false;}
	int loc=(*this).indexOF_F(item);
	bool l=(*this).removE(loc);
	return l;
}

template<class T>
void Vector<T> :: removeAllElemnts()
{
	(*this).cleaR();
}

template<class T>
bool Vector<T> :: removeElement(const T &item)
{
	int i=(*this).sizE();
	(*this).removE_F(item);
	return ( i > (*this).sizE() );
}
// /remove

// op
template<class T>
Vector<T>& Vector <T> :: operator=(const Vector &obj)
{   
	if( this != &obj){
	(*this).cleaR();
	if((*this).A != NULL){delete [](*this).A;}
	(*this).A=new T[obj.capaCity()];
	(*this).capacity=obj.capaCity();
	for(int i=0;i<(*this).capaCity();i++){(*this).A[i]=obj.A[i];}
	this->n=obj.sizE();
	//cout<<" op =\n";
	}
	return (*this);
}

template<class T>
bool Vector <T> :: operator==(const Vector &obj)
{
	if((*this).capaCity() != obj.capaCity())return false;
	if((*this).sizE() != obj.sizE() )return false;
	for(int i=0;i<(*this).sizE();i++){ if((*this).A[i] != obj.A[i])return false; }
	return true;
}

template<class T>
Vector<T> Vector <T> :: operator+(const Vector &obj)
{
	Vector<T> j;
	int i=0;
	for(;((i<(*this).sizE())&&(i<obj.sizE()));i++)
	{ T t=(*this).A[i]+obj.A[i];
	j.add_(t);
	}

	for(;i<(*this).sizE() ;i++)
	{ T t=(*this).A[i];
	j.add_(t);
	}

	for(; i< obj.sizE();i++)
	{ T t=obj.A[i];
	j.add_(t);
	}
	//cout<<" op +\n";
	return j;
}
template<class T>
Vector<T> Vector <T> :: operator-(const Vector &obj)
{
	Vector<T> j;
	int i=0;
	for(;((i<(*this).sizE())&&(i<obj.sizE()));i++)
	{ T t=(*this).A[i]-obj.A[i];
	j.add_(t);
	}

	for(;i<(*this).sizE() ;i++)
	{ T t=(*this).A[i];
	j.add_(t);
	}

	for(; i< obj.sizE();i++)
	{ T t=-1*(obj.A[i]);
	j.add_(t);
	}
	//cout<<" op -\n";
	return j;
}

template<class T>
Vector<T> Vector <T> :: operator*(const Vector &obj)
{
	Vector<T> j;
	int i=0;
	for(;((i<(*this).sizE())&&(i<obj.sizE()));i++)
	{ T t=(*this).A[i]*obj.A[i];
	j.add_(t);
	}
	//cout<<" op *\n";
	return j;

}

template<class T>
T Vector <T> :: operator [](int index)
{
	if((*this).isEmpty()){cout<<" Error the Vector is Empty !!! "; return '\0';}
	if(index < 0){cout<<" Error the index is not existed / Negative index / !!! "; return '\0'; }
	if( index >= (*this).capaCity() ){cout<<" Error the location is out of range !!! "; return '\0';}
	if(index >= (*this).sizE() ){cout<<" You must use a valid index that does not exceed size !!! "; return '\0'; }
	T *w=(*this).A;
	return (*(w+index));
}
// /op

// ds
template<class T>
Vector<T> :: ~Vector()
{
	if((*this).A != NULL)
	delete []A;
	this->A=NULL;
	(*this).n=this->capacity=0;
	//cout<<"ds\n";
}
// /ds
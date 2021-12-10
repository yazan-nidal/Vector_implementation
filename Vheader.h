#ifndef Vheader_h
#define Vheader_h

template<typename T>
class Vector
{
private :

	T *A;
	int n;
	int capacity;

public :

Vector(int mc=10); //Vector (int mc) && Vector()instal Initial size :10
Vector(const Vector &obj);// copy constractur for deep copy

int capaCity()const;
void cleaR();
int sizE()const;
bool isEmpty()const;
void reSize();
void prinT();

T lastItem();
T firstItem();
bool containsItem(const T &item)const;
int indexOF_F(const T &item)const;
int indexOF_L(const T &item);
T getElment(int index);
T elementAT(int index);
void set_(const T &iem,int index);

void add_(const T &item,int index);
bool add_(const T &item);
void addComp(const T &item,int index);
void addComp(const T &item);

void insertElementAT(const T &item,int index);
void insertElementAT(const T &item);

int removE(int index);
bool removE_F(const T &item);
void removeAllElemnts();
bool removeElement(const T &item);

Vector<T>& operator=(const Vector &obj);
bool operator==(const Vector &obj);
Vector<T>  operator+(const Vector &obj);
Vector<T>  operator-(const Vector &obj);
Vector<T>  operator*(const Vector &obj);
T  operator[](int index);

~Vector();

private :
void addBack(const T &item);
void addElement(const T &item,int index);

};

#endif
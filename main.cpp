#include"source.cpp"

void main()
{
	//  This main for test all possibilities
	Vector<int> v;
	/*cout<<" a :"<<v.capaCity()<<"\n";
	v.reSize();
	cout<<" b :"<<v.capaCity()<<"\n";
	cout<<" c :"<<v.isEmpty()<<" , "<<v.sizE()<<"\n";
	v.cleaR();
	v.prinT();*/
	cout<<" a :"<<v.capaCity()<<"\n";
	v.add_(4,5);
	v.add_(4,11);
	v.add_(4,-5);
	v.add_(4,10);
	v.add_(5);
	v.add_(4);
	v.add_(3);
	v.add_(5);
	v.add_(0);
	v.add_(3);
	v.add_(0);
	v.add_(2);
	v.add_(1);
	v.add_(9);
	v.add_(9);
	v.add_(9);
	v.add_(14,9);
	v.prinT();
	v.insertElementAT(77);
	v.insertElementAT(77,5);
	cout<<" H : "<<v.removeElement(0)<<endl;
	v.prinT();
	Vector<int> t;
	Vector<int> t2=(t+v);
	t2.prinT();
	t2=v-t;
	t2.prinT();
	t2=t-v;
	t2.prinT();
	t2=t*v;
	t2.prinT();


	
	cout<<v.add_(122)<<"   ll\n ";
	cout<<" a :"<<v.capaCity()<<"\n";
	v.addComp(5);
	cout<<" a :"<<v.capaCity()<<"\n";
	v.addComp(5,9);
	cout<<" a :"<<v.capaCity()<<"\n";
	v.prinT();
	cout<<v.firstItem();
	cout<<"\n"<<v.lastItem()<<"\n";
	cout<<v.containsItem(100)<<" "<<v.indexOF_F(9)<<" "<<v.indexOF_L(9)<<" "<<v.indexOF_L(100)<<"\n";
	cout<<v.getElment(22)<<"\n";
	cout<<v.getElment(17)<<"\n";
	cout<<v.getElment(-5)<<"\n";
	cout<<v.getElment(5)<<"\n";
	cout<<v.elementAT(5)<<" h \n";
	
	cout<<" ---------------\n";
	v.removE(-5);
	v.removE(-5);
	v.removE(17);
	v.removE(25);
	v.removE(5);
	v.prinT();
	v.removE_F(17);
	v.removE_F(9);
	v.prinT();
	v.set_(110,15);
	v.set_(110,22);
	v.set_(110,5);
	v.prinT();
	//v.removeAllElemnts();
	v.set_(110,100);
	v.prinT();
	cout<<" -------------------------------\n";
	Vector<int> v2;
	v2.add_(5);
	v2.add_(2);
	v2.add_(9);
	v2.add_(3);
	v2.add_(10);
	Vector<int> v3=v;
	cout<<(v2==v3)<<"  "<<(v==v3)<<"\n";
	v.prinT();
	v2.prinT();
	v3=v2+v;
	v3.prinT();
	Vector<int> v4=v2-v;
	v4=v2-v;
	v4.prinT();
	v4=v-v2;
	v4.prinT();
	v4=v2*v;
	v4.prinT();
	v4=v-v;
	v4.prinT();
	v3=v2*v;
	v3.prinT();
	v.removE_F(5);
	v.removeAllElemnts();
	v.prinT();
	cout<<v.operator[](0);
	cout<<v.getElment(0);
	v.addComp(31,15);
	cout<<" "<<v.capaCity()<<endl;
	v.prinT();


	/*cout<<v.indexOF_F(7)<<" : "<<v.indexOF_L(7)<<"\n";
	cout<<v.indexOF_F(5)<<" : "<<v.indexOF_L(5)<<"\n";
	//v.prinT();
	Vector<int> v2;
	/*v2.reSize();
	cout<<v2.capaCity()<<" "<<v.sizE()<<" "<<v2.isEmpty()<<" "<<v.isEmpty()<<endl;
	v2.prinT();
	cout<<" rownd2\n";
	cout<<v.indexOF_F(7);*/
	/*v.prinT();
	v2.prinT();*/
	/*cout<<" rownd3\n";
	v2=v;
	//cout<<(v2==v);
	Vector<int> v3=(v2);
	v3=v2*v;
	cout<<"\nhhhj\n"; 
	v.prinT();
	v2.prinT();
	v3.prinT();*/
	cout<<"\n *** **** ****  This main for test all possibilities **** **** ***\n";

}
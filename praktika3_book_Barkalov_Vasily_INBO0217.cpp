#include <iostream>
#include <cstring>
using namespace std;
 
class Book {
public:
    string janr;
   string avtor;
    string nazvanie;
    int god_izdania;
    int cena;
 
void set()
{
    cout<<"������� ����: ";
    cin>>janr;
    cout<<"������� ������: ";
    cin>>avtor;
    cout<<"������� ��������: ";
    cin>>nazvanie;
    cout<<"������� ��� �������: ";
    cin>>god_izdania;
    cout<<"������� ����: ";
    cin>>cena;
}
void show()
{
    cout<<"����: "<<janr<<endl;
    cout<<"�����: "<<avtor<<endl;
    cout<<"�������� : "<<nazvanie<<endl;
    cout<<"��� �������: "<<god_izdania<<endl;
    cout<<"����: "<<cena<<endl;
}
  
};
 
 
int main()
{
	setlocale(LC_ALL, "rus");
    Book n1;
 
    n1.set();
    n1.show();
 
 
    system("pause");
    return 0;
}

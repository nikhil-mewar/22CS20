//COPY CONSTRUCT
/*#include<iostream>
#include<conio.h>

using namespace std;

class number
{
    private:
    int a,b;
    public:
    number (int,int);
    number(number &);
    void display(void);
};
number :: number(int x,int y)
{
    a=x;
    b=y;
}
number :: number(number &n1)
{
    a=n1.a;
    b=n1.b;
}
void number :: display(void)
{
    cout <<"value is :" <<endl;
    cout <<"a =" <<a<<endl;
    cout <<"b =" <<b<<endl;
}
int main (void)
{
    int a,b;
    cout << "a =";
    cin >>a;
    cout <<"b =";
    cin >>b;
    number n1(a,b);
    number n2(n1);
    n2.display();
getch();
return(0);    
}*/
//SINGLE INHERITANCE

#include<iostream>
#include<conio.h>

using namespace std;

class number
{
    private:
    int a,b;
    public:
    void getdata(void);
    int var_a(void);
    int var_b(void);
};
class addition : public number
{
    private:
    int m,n,c;
    public:
    void sum(void);
}
void number :: getdata(void)
{
    cout <<"a =";
    cin >>a;
    cout <<"b =";
    cin >>b;
}
int number :: var_a(void)
{
    return(a);
}
int number :: var_b(void)
{
    return(b);
}
int addition :: sum(void)
{
    m=var_a();
    n=var_b();
    c=m+n;
    return(sum);
}
int main(void)
{
    int num;
    addition a1;
    a1.getdata();
    num=a1.sum();
    cout <<"addition is ="<<num<< endl;
getch();
return(0);    
}

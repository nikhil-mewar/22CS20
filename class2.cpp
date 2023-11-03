//  DEFAULT CONSTRUCTOR
/*#include<iostream>
#include<conio.h>

using namespace std;

class number
{
    private:
    int a,b;
    public:
    number();

};
number :: number()
{
    cout <<"a =";
    cin >>a;
    cout <<"b =";
    cin >>b;
    cout <<"display "<< endl;
    cout <<"a ="<<a<< endl;
    cout <<"b =" <<b<< endl;
    cout <<"sum =" <<a+b<< endl;
}
int main(void)
{
    number n1;
getch();
return(0);
}
// PARAMETERISED CONSTRUCTOR
#include<iostream>
#include<conio.h>

using namespace std;

class number
{
    private:
    int a,b;
    public:
    number();
    number(int,int);
};
number :: number()
{
    cout <<"HELLLO WORLD"<<endl;
}
number :: number(int x, int y)
{
    cout <<"a ="<<x<< endl;
    cout <<"b ="<<y<< endl;
    cout <<"sum is ="<<x+y<< endl;
}
int main(void)
{
    int a,b;
    cout <<"a =";
    cin>>a;
    cout <<"b =";
    cin >>b;
    number n1;
    number n2(a,b);
getch();
return(0);    
}
//PASSING OBJECT AS A FUNCTION PARAMETER 

#include<iostream>
#include<conio.h>

using namespace std;

class number
{
    private:
    int a,b;
    public:
    void getdata(void);
    void sum(number);
};
void number :: getdata(void)
{
    cout<<"a =";
    cin >>a;
    cout <<"b= ";
    cin >>b;
}
void number :: sum(number a1)
{
    cout <<"sum is =" <<a1.a+a1.b <<endl;
}
int main(void)
{
    number n1,n2;
    n1.getdata();
    n2.sum(n1);
getch();
return(0);     
}

//NO PARAMETERS BUT RETURN OBJECT FROM FUNCTON DEFINATION

#include<iostream>
#include<conio.h>

using namespace std;

class number
{
    public:
    int a,b;
    void getdata(void);
    number sum(void);
};
void number :: getdata(void)
{
    cout<<"a =";
    cin >>a;
    cout <<"b= ";
    cin >>b;
}
number number :: sum(void)
{
    number n2;
    n2.a=a;
    n2.b=b;
    return(n2);
}
int main(void)
{
    number n1,n3;
    n1.getdata();
    n3=n1.sum();
    cout <<"a ="<<n3.a << endl;
    cout <<"b ="<<n3.b << endl;
    cout <<"sum is =" <<n3.a+n3.b<<endl;
getch();
return(0);
}
*/

//PASSING TWO OBJECT AS A FUNCTION PARAMETER

#include<iostream>
#include<conio.h>

using namespace std;

class number
{
    private:
    int a,b;
    public:
    void getdata(void);
    number sum(number,number);
};
void number :: getdata(void)
{
    cout<<"a =";
    cin >> a;
    cout <<"b= ";
    cin >> b;
}
number number :: sum(number a1, number a2)
{
    number n3;
    n3.a=a1.a+a2.a;
    n3.b=a1.b+a2.b;
    return(n3);
}
int main(void)
{
    number n1,n2,n3;
    n1.getdata();
    n2.getdata();
    n3=n3.sum(n1,n2);
    cout <<"a =" <<n3.a<<endl;
    cout <<"b =" <<n3.b<<endl;
getch();
return(0);    
}

//CLASS AND OBJECT 
/*#include<iostream>
#include<conio.h>

using namespace std;

class number
{
    private:
    int a,b,c;
    public:
    void getdata(void);
    void putdata(void);
    
};
void number :: getdata(void)
{
    cout<<"a =";
    cin>>a;
    cout <<"b =";
    cin>>b;
}
void number :: putdata(void)
{
    cout<<"---------------"<<endl;
    cout <<"a= "<<a<<endl;
    cout <<"b = "<<b<< endl;
    c=a+b;
    cout <<" sum is =" <<c<<endl;

}
int main (void)
{
    number n1;
    n1.getdata();
    n1.putdata();
getch();
return(0);    
}
// HOW TO ACCESS PRIVATE SECTOR THROUGH MAIN USING VARIABLE (INDIRECT MANNAR)
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
void number :: getdata(void)
{
    cout <<"a = ";
    cin >> a;
    cout <<"b = ";
    cin >>b;
}
int number :: var_a(void)
{
    return(0);
}
int number :: var_b(void)
{
    return(b);
}
int main()
{
    int m,n;
    number n1;
    n1.getdata();
    m=n1.var_a();
    n=n1.var_b();
    cout <<"a =" <<m<< endl;
    cout <<"b =" <<n<< endl;
getch();
return(0);    
}
//IN LINE DEFINATION OF CLASS
#include<iostream>
#include<conio.h>

using namespace std;
 
class number
{
    private:
    int a,b;
    public:
    void getdata()
    {
        cout <<"a =";
        cin >>a;
        cout <<"b =";
        cin >>b;
    }
    void display(void)
    {
        cout <<"value is ="<<endl;
        cout <<"a =" <<a<< endl;
        cout <<"b =" <<b<< endl;
    }
};
int main (void)
{
    number n1;
    n1.getdata();
    n1.display();
getch();
return(0);
} */
//PARAMETAR FUNCTION
#include<iostream>
#include<conio.h>
using namespace std;
class number
{
    private:
    int m,n;
    public:
    void getdata(int , int);
    void display(void); 
};
void number :: getdata(int a, int b)
{
    m=a;
    n=b;
}
void number :: display(void)
{
    cout <<"m =" <<m<< endl;
    cout <<"n =" <<n<< endl;
    cout <<"addition is = "<<m+n<< endl;
}
int main (void)
{
    int a,b;
    cout <<"a =";
    cin >>a;
    cout <<"b =";
    cin >> b;
    number n1;
    n1.getdata(a,b);
    n1.display();
getch();
return(0);    
}
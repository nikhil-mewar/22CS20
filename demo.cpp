// INPUT AND OUTPUT IN C++

#include<iostream>
#include<conio.h>
 
using namespace std;
int main(void)
{
    int a[100],i,b;
    cout <<"enter size of the element";
    cin>>b;
    cout<<"enter "<<b<<" elements of array"<<endl;
    for (i=0;i<b;i++)
    {
        cout <<"a["<<i<<"]=";
        cin>>a[i];
    }
    cout <<"array is = "<<endl;
    for (i=0;i<b; i++)
    {
        cout <<"a["<<i<<"]="<<a[i]<<endl;

    }
getch();
return(0);    
}


//EXCHANGE OF DATA BY REVERSING
#include<iostream>
#include<conio.h>

using namespace std;
int main(void)
{
    int a[100],i,b,m[100];
    cout <<"enter number of elements = ";
    cin>>b;
    cout<<"enter" <<b<< "numbers" <<endl;
    for (i=0;i<b;i++)
    {
        cout <<"a["<<i<<"]=";
        cin>>a[i];

    }
//array reversing 
    for (i=0;i<b;i++)
    {
        m[i]=a[i];
    }
    for (i=0;i<b;i++)
    {
        a[i]=m[(b-1)-i];
    }
    cout<<"array is = "<<endl;
    for (i=0;i<b;i++)
    {
        cout <<"a["<<i<<"]="<<a[i]<<endl;
    }
getch();
return(0);
}

//EXCHANGING DATA BY SWAPPING
#include<iostream>
#include<conio.h>

using namespace std;
int main(void)
{
    int a[100],i,b,t;
    cout <<"enter number of elements = ";
    cin>>b;
    cout<<"enter" <<b<< "numbers" <<endl;
    for (i=0;i<b;i++)
    {
        cout <<"a["<<i<<"]=";
        cin>>a[i];

    }
    //array reversing
    for(i=0; i<b/2;i++)
    {
        t=a[i];
        a[i]=a[(b-1)-i];
        a[(b-1)-i]=t;
    }
    cout << "array is = " << endl;
    for(i=0;i<b;i++)
    {
        cout <<"a["<<i<<"] ="<<a[i]<<endl;

    }
getch();
return(0);
}
//LOCATION INSERTION IN ARRAY

#include<iostream>
#include<conio.h>

using namespace std;
int main(void)
{
    int a[100],i,loc,num,b;
    cout <<"enter size of array = ";
    cin>>b;
    cout <<"enter "<<b<< "array" <<endl;
    for (i=0;i<b;i++)
    {
        cout << "a["<<i<<"]=";
        cin >>a[i];
    }
    cout <<"enter location = ";
    cin >>loc;
    cout << "enter elements = ";
    cin>>num;
    if(loc>=1 && loc<=b)
    cin>>loc;
    cout<<"enter elements =";
    cin>>num;
    if (loc>=1 && loc<=b)
    {
        for (i=0;i>=loc;i--)
        {
            a[i]=a[i-1];

        }
        a[i]=num;
        cout<<"array is = "<< endl;
        for (i=0;i<b+1;i++)
        {
            cout <<"a["<<i<<"]="<<a[i]<<endl;

        }
    }
    else
    {
        cout <<"INVALID LOCATION "<<endl;

    }
getch();
return(0);
}

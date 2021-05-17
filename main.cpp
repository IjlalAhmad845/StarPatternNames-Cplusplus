#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(int,int);
void A(int);   void B(int);   void C(int);   void D(int);   void E(int);   void F(int);   void G(int);   void H(int);   void I(int);
void J(int);   void K(int);   void L(int);   void M(int);   void N(int);   void O(int);   void P(int);   void Q(int);   void R(int);
void S(int);   void T(int);   void U(int);   void V(int);   void W(int);   void X(int);   void Y(int);   void Z(int);
using namespace std;
int i,j,k;
int main()
{int name;char ch[50];for(i=0;i<50;i++)ch[i]=0;
cout<<"enter name=";
gets(ch);
cout<<"enter size=";
cin>>name;
for(int st=0;st<=50;st++)
{    if(ch[st]=='h'||ch[st]=='H')  {H(name);cout<<endl<<endl;}     else if(ch[st]=='a'||ch[st]=='A')  {A(name);cout<<endl<<endl;}
else if(ch[st]=='b'||ch[st]=='B')  {B(name);cout<<endl<<endl;}     else if(ch[st]=='c'||ch[st]=='C')  {C(name);cout<<endl<<endl;}
else if(ch[st]=='d'||ch[st]=='D')  {D(name);cout<<endl<<endl;}     else if(ch[st]=='e'||ch[st]=='E')  {E(name);cout<<endl<<endl;}
else if(ch[st]=='f'||ch[st]=='F')  {F(name);cout<<endl<<endl;}     else if(ch[st]=='g'||ch[st]=='G')  {G(name);cout<<endl<<endl;}
else if(ch[st]=='h'||ch[st]=='H')  {H(name);cout<<endl<<endl;}     else if(ch[st]=='i'||ch[st]=='I')  {I(name);cout<<endl<<endl;}
else if(ch[st]=='j'||ch[st]=='J')  {J(name);cout<<endl<<endl;}     else if(ch[st]=='k'||ch[st]=='K')  {K(name);cout<<endl<<endl;}
else if(ch[st]=='l'||ch[st]=='L')  {L(name);cout<<endl<<endl;}     else if(ch[st]=='m'||ch[st]=='M')  {M(name);cout<<endl<<endl;}
else if(ch[st]=='n'||ch[st]=='N')  {N(name);cout<<endl<<endl;}     else if(ch[st]=='o'||ch[st]=='O')  {O(name);cout<<endl<<endl;}
else if(ch[st]=='p'||ch[st]=='P')  {P(name);cout<<endl<<endl;}     else if(ch[st]=='q'||ch[st]=='Q')  {Q(name);cout<<endl<<endl;}
else if(ch[st]=='r'||ch[st]=='R')  {R(name);cout<<endl<<endl;}     else if(ch[st]=='s'||ch[st]=='S')  {S(name);cout<<endl<<endl;}
else if(ch[st]=='t'||ch[st]=='T')  {T(name);cout<<endl<<endl;}     else if(ch[st]=='u'||ch[st]=='U')  {U(name);cout<<endl<<endl;}
else if(ch[st]=='v'||ch[st]=='V')  {V(name);cout<<endl<<endl;}     else if(ch[st]=='w'||ch[st]=='W')  {W(name);cout<<endl<<endl;}
else if(ch[st]=='x'||ch[st]=='X')  {X(name);cout<<endl<<endl;}     else if(ch[st]=='y'||ch[st]=='Y')  {Y(name);cout<<endl<<endl;}
else if(ch[st]=='z'||ch[st]=='Z')  {Z(name);cout<<endl<<endl;}     else if(ch[st]==' ') cout<<"\n\n\n\n\n\n\n";
}
getch();}void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void A(int a) ///-------------------------------------------------------------definition for printing A
{for(i=1;i<=3*a;i++)
cout<<" ";
cout<<" *\n";    ///----------------------------------------------------------prints a single star
for(i=1;i<a;i++)
{for(j=3*a;j>=i;j--)
cout<<" ";
cout<<"*";
for(j=1;j<=6*i-5;j=j+3)
{cout<<" ";}
cout<<"*"<<"\n";}   ///----------------------------------------------------------cout<<"             ";
for(i=1;i<=2*a;i++)
cout<<" ";
cout<<" * ";
for(j=1;j<=a;j++)
    cout<<"* ";
    cout<<"\n";
for(i=1;i<=a;i++)
{for(j=2*a;j>=i;j--)
cout<<" ";
cout<<"*";
for(j=1;j<=6*i-5;j=j+3)
{if(j==1)
{for(k=1;k<=2*a;k++)
    cout<<" ";}
cout<<" ";}
cout<<"*"<<"\n";}}
void B(int b)   ///----------------------------------------------------------------definition for printing B
{cout<<"\t";
for(i=1;i<=2*b-2;i++)
cout<<"* ";
for(i=2;i<=b;i++)
{cout<<"\n\t *";
for(j=1;j<=2*b-3;j++)
    cout<<"  ";
    cout<<"*";}
    cout<<"\n\t ";
for(i=1;i<=2*b-2;i++)
cout<<"* ";
for(i=2;i<=b;i++)
{cout<<"\n\t *";
for(j=1;j<=2*b-3;j++)
    cout<<"  ";
    cout<<"*";}
    cout<<"\n\t";
for(i=1;i<=2*b-2;i++)
cout<<"* ";
}
void C(int c) ///-------------------------------------------------------------definition for printing C
{cout<<"\t ";
for(i=1;i<=1.5*c;i++)
cout<<"* ";
cout<<"\n";
for(i=1;i<=1.9*c;i++)
cout<<"\t*\n";
cout<<"\t ";
for(i=1;i<=1.5*c;i++)
cout<<"* ";
}
void D(int d) ///-------------------------------------------------------------definition for printing D
{cout<<"\t";
for(i=1;i<=2*d-2;i++)
cout<<"* ";
for(i=2;i<=2*d;i++)
{cout<<"\n\t *";
for(j=1;j<=2*d-3;j++)
    cout<<"  ";
    cout<<"*";}
    cout<<"\n\t";
for(i=1;i<=2*d-2;i++)
cout<<"* ";
}
void E(int e)   ///-------------------------------------------------------------definition for printing E
{cout<<"\t ";
for(i=1;i<=1.5*e;i++)
cout<<"* ";
cout<<"\n";
for(i=1;i<=0.9*e;i++)
cout<<"\t*\n";
cout<<"\t ";
for(i=1;i<=1.5*e;i++)
cout<<"* ";
cout<<"\n";
for(i=1;i<=0.9*e;i++)
{cout<<"\t*\n";
}
cout<<"\t ";
for(i=1;i<=1.5*e;i++)
cout<<"* ";
}
void F(int f)    ///------------------------------------------------------------definition for printing F
{cout<<"\t ";
for(i=1;i<=1.5*f;i++)
cout<<"* ";
cout<<"\n";
for(i=1;i<=0.9*f;i++)
cout<<"\t*\n";
cout<<"\t";
for(i=1;i<=1.5*f;i++)
cout<<"* ";
cout<<"\n";
for(i=0;i<=0.9*f;i++)
cout<<"\t*\n";}
void G(int g)      ///--------------------------------------------------------------definition for printing G
{cout<<"\t ";
for(i=2;i<=2*g;i++)    ///------------------------------------------------------prints upper side
cout<<"* ";
for(i=2;i<=g;i++)   ///---------------------------------------------------------prints left and right side
cout<<"\n\t*";
for(i=2;i<=2*g-2;i++)
cout<<" ";
for(i=1;i<=g;i++)
cout<<"* ";
for(i=1;i<=g;i++)
{cout<<"\n\t*";
for(j=0;j<=4*g-5;j++)
cout<<" ";
cout<<"*";}
cout<<"\n\t ";
for(i=3;i<=2*g;i++)
cout<<"* ";}
void H(int h)        ///-----------------------------------------------------definition for printing H
{for(i=1;i<=h;i++)
{cout<<"\t*";
for(j=0;j<=2*h+6;j++)
{cout<<" ";}
    cout<<"*";
cout<<"\n";}
cout<<"\t";
for(i=0;i<=h+4;i++)
cout<<"* ";
cout<<"\n";
for(i=1;i<=h;i++)
{cout<<"\t*";
for(j=0;j<=2*h+6;j++)
{cout<<" ";}
    cout<<"*";
cout<<"\n";}}
void I(int I)     ///------------------------------------------------------definition for printing I
{cout<<"\t";
for(i=0;i<=2*I-2;i++)
cout<<"* ";
for(i=2;i<=2*I;i++)   ///----------------------------------prints middle
{cout<<"\n";
for(j=1;j<=2*I+6;j++)
    cout<<" ";
    cout<<"*";}
    cout<<"\n\t";
    for(i=0;i<=2*I-2;i++)
cout<<"* ";
}
void J(int J)    ///--------------------------------------------------------definition for printing J
{cout<<"\t";
for(i=0;i<=2*J-2;i++)
cout<<"* ";
for(i=2;i<=2*J;i++)
{cout<<"\n";
for(j=1;j<=2*J+6;j++)
    cout<<" ";
    cout<<"*";}
    cout<<"\n\t ";
    for(i=0;i<=J-2;i++)
cout<<"* ";}
void K(int K)   ///----------------------------------------------------definition for printing K
{for(i=K+1;i>=0;i--)
{cout<<"\t*";
for(j=i;j>=0;j--)
cout<<"  ";
cout<<"*";
if(i==0)    ///-------------------------------------------------------for an extra star at the cut off of K
cout<<"   *";
cout<<"\n";
}
for(i=3;i<=K+1;i++)
{cout<<"\t*";
for(j=i;j>=0;j--)
cout<<"  ";
cout<<"*\n";}
}
void L(int l)  ///------------------------------------------------------------definition for printing L
{for(i=1;i<=2*l;i++)
{cout<<"\n\t";
    cout<<"*";}
    cout<<"\n\t ";
    for(i=0;i<=2*l-4;i++)
cout<<"* ";}
void M(int m)     ///----------------------------------------------------definition for printing M
{for(i=0;i<=m;i++)
{cout<<"\t*";
for(j=i;j>0;j--)
cout<<"  ";
if(i<=m)
{cout<<"*";
for(k=4*m-4*i;k>=2;k--)
cout<<" ";
        if(i<m)    ///-------------------------------make limit to print the stars to the middle of M
            cout<<"*";
            for(k=i;k>=1;k--)
            cout<<"  ";
            cout<<"*";}
cout<<"\n";}
for(i=1;i<=m;i++)
{cout<<"\t*";
for(j=0;j<=4*m;j++)
cout<<" ";
cout<<"*\n";}
}
void N(int n)   ///----------------------------------------------------definition for printing N
{for(i=1;i<=2*n+1;i++)
{cout<<"\t*";
for(j=i-1;j>0;j--)
cout<<" ";
cout<<"*";
for(k=2*n-i;k>=0;k--)
cout<<" ";
cout<<"*";
cout<<"\n";}}
void O(int o)      ///-----------------------------------------------------definition for printing O
{cout<<"\t    ";
for(i=0;i<=2*o-4;i++) ///-------------------------------------------------prints upper body
cout<<"* ";
cout<<"\n\t  *";
for(i=0;i<=4*o-6;i++)
    cout<<" ";
cout<<"*";
for(i=0;i<=2*o-4;i++)   ///---------------------------------------------prints middle left and right
{cout<<"\n\t*";
for(j=0;j<=4*o-2;j++)
    cout<<" ";
cout<<"*";}
cout<<"\n\t  *";
for(i=0;i<=4*o-6;i++)
    cout<<" ";
cout<<"*\n";
cout<<"\t    ";
for(i=0;i<=2*o-4;i++)///---------------------------------------------------------------prints lower body
cout<<"* ";
}
void P(int p)///-----------------------------------------------------------------------definition for printing P
{cout<<"\t";
for(i=1;i<=2*p-2;i++)///----------------------------------------------------------prints upper body
cout<<"* ";
for(i=2;i<=p;i++)///-----------------------------------------------------------------prints middle of p
{cout<<"\n\t*";
for(j=1;j<=2*p-3;j++)
    cout<<"  ";
    cout<<"*";}
    cout<<"\n\t";
for(i=1;i<=2*p-2;i++)///---------------------------------------------------------------prints lower part of p as __
cout<<"* ";
for(i=1;i<=p;i++) ///-------------------------------------------------------------------prints lower body as |
cout<<"\n\t*";
}
void Q(int q)  ///------------------------------------------------------------------------definition for printing Q
{cout<<"\t ";
for(i=2;i<=2*q-2;i++)  ///---------------------------------------------------------prints upper part of Q
cout<<"* ";
for(i=2;i<=q;i++)///---------------------------------------------------------------------------prints middle part
{cout<<"\n\t*";
for(j=2;j<=2*q-3;j++)
    cout<<"  ";
    cout<<"*";}
    cout<<"\n\t";
for(i=2;i<=2*q-2;i++) ///---------------------------------------------------------------------------prints lower part as __
cout<<" *";
for(i=0;i<=q;i++)
{cout<<"\n\t ";
for(j=0;j<=2*q-5;j++)///------------------------------------------------------------------------prints lower body as |
    cout<<"  ";
cout<<"*";}
}
void R(int r)///---------------------------------------------------------------------------definition for printing R
{cout<<"\t";
for(i=2;i<=2*r-2;i++)
cout<<"* ";
for(i=1;i<=r-1;i++)
{cout<<"\n\t*";
for(j=2;j<=2*r-3;j++)
    cout<<"  ";
    cout<<"*";}
    cout<<"\n\t";
for(i=2;i<=2*r-2;i++)
cout<<"* ";
cout<<"\n";
k=2*r-8;
for(i=2;i<=r+1;i++) ///---------------------------------------------------------------------------cross section part of R
{cout<<"\t*";
for(j=2*i+k;j>=4;j--)
cout<<" ";
cout<<"*\n";}
}
void S(int s)  ///---------------------------------------------------------------------------definition for printing S
{cout<<"\t ";
for(i=0;i<=s+2;i++)
    cout<<"* ";
for(i=2;i<=s;i++)
    cout<<"\n\t*";
cout<<"\n\t ";
for(i=1;i<=s+2;i++)
    cout<<"* ";
    for(i=2;i<=s;i++)
    {cout<<"\n\t";
    for(j=0;j<=2*s+4;j++)
        cout<<" ";
        cout<<"*";}
    cout<<"\n\t";
for(i=0;i<=s+2;i++)
    cout<<"* ";}
void T(int t)    ///---------------------------------------------------------------------------definition for printing T
{cout<<"\t";
for(i=0;i<=2*t-2;i++)
    cout<<"* ";
for(i=1;i<=2*t;i++)
{cout<<"\n\t";
for(j=1;j<=2*t-2;j++)
    cout<<" ";
cout<<"*";}
}
void U(int u)     ///---------------------------------------------------------------------------definition for printing U
{for(i=1;i<=2*u;i++)
{cout<<"\t*";
for(j=0;j<=2*u+4;j++)
cout<<" ";
cout<<"*\n";}
cout<<"\t ";
for(i=0;i<=u+2;i++)
    cout<<"* ";
}
void V(int v)
{for(i=0;i<=2*v;i++)
{for(j=0;j<=i+7;j++)
cout<<" ";
    cout<<"*";
    for(k=2;k<=4*v-2*i;k++)
        cout<<" ";
            if(i!=2*v) ///-------------------------------------------------------for removing extra '*' at intersection point
    cout<<"*";
    if(i!=2*v) ///-------------------------------------------------------------------for remove \n from last
        cout<<"\n";}
}
void W(int w) ///--------------------------------------------------------------------definition for printing W
{for(i=0;i<=2*w;i++)
{for(j=0;j<=i+7;j++)
cout<<" ";
cout<<"*";
for(k=2;k<=4*w-2*i;k++)
        cout<<" ";
            if(i!=2*w) ///-----------------------------------------------------for removing extra '*' at intersection point
    cout<<"*";       ///---------------------------------------------------------------------------half body
    for(j=0;j<=2*i-2;j++)   ///---------------------------------------------------------------------------for another half
cout<<" ";
   if(i!=0)          ///----------------------------------------------------------for removing extra '*' at second intersection of W
   cout<<"*";
for(k=2;k<=4*w-2*i;k++)
        cout<<" ";
            if(i!=2*w)///----------------------------------------------------------------for removing extra '*' at intersection point
    cout<<"*";
    if(i!=2*w)
        cout<<"\n";}
}
void X(int x)   ///-------------------------------------------------------------------definition for printing X
{for(i=0;i<=x;i++)
{for(j=0;j<=i+3;j++)
cout<<"  ";
    cout<<"*";
    for(j=2;j<=4*x-4*i;j++)
        cout<<" ";
            if(i!=x) ///-------------------------------------------------------for removing extra '*' at intersection point
    cout<<"*";
        cout<<"\n";}  ///-----------------------------------------------half body
for(i=1;i<=x;i++)           ///---------------------------------------------another half
{for(j=0;j<=x-i+3;j++)   ///------------------------------------for inverse V
cout<<"  ";
    cout<<"*";
    for(j=0;j<=4*i-2;j++)
cout<<" ";
cout<<"*\n";}
}
void Y(int y)       ///------------------------------------------------------------definition for printing Y
{for(i=0;i<=y;i++)
{for(j=0;j<=i+3;j++)
cout<<"  ";
    cout<<"*";
    for(k=2;k<=4*y-4*i;k++)
        cout<<" ";
            if(i!=y) ///-------------------------------------------------------for removing extra '*' at intersection point
    cout<<"*";
        cout<<"\n";}///-----------------------------------------------half body
for(j=0;j<=y;j++)
{cout<<"\t";
for(i=1;i<=2*y;i++)           ///---------------------------------------------another half
cout<<" ";
cout<<"*\n";}
}
void Z(int z)   ///------------------------------------------------------------------definition for printing Z
{cout<<"\t";
for(i=0;i<=2*z;i++)  ///--------------------------------------------------prints upper part
cout<<"* ";
cout<<"\n";
for(i=2;i<=2*z;i++)     ///-------------------------------------------------prints middle part as '/'
{cout<<"\t";
    for(j=0;j<=4*z-2*i+1;j++)
        cout<<" ";
    cout<<"*\n";}
    cout<<"\t";
    for(i=0;i<=2*z;i++)  ///-----------------------------------------------------------prints lower body as __
        cout<<"* ";}

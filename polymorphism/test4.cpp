#include <iostream>
using namespace std;
class CBase
{
public:
    CBase(){};
    virtual void Walk(){cout<<"CBase:Walk"<<endl;}
    virtual void Jump(){cout<<"CBase:Jump"<<endl;}
    void Run(int speed){cout<<"CBase:Run:"<<"Speed="<<speed<<endl;}
};
class CDerivedA : public CBase
{
public:
    CDerivedA(){};
    void Walk(){cout<<"CDerivedA:Walk"<<endl;}
    void Jump(){cout<<"CDerivedA:Jump"<<endl;}
    void Run(int speed) {cout<<"CDerivedA:Run"<<"Speed="<<speed<<endl;}
    void Run(int speed,int direction){cout<<"CDerivedA:Run"<<"Speed="<<speed<<";Direction="<<direction<<endl;}
};
int main()
{
    CBase *pTmp1=new CDerivedA ;
    pTmp1->Walk();
    pTmp1->Run(20);
    CDerivedA *pTmp2=(CDerivedA*)pTmp1 ;
    pTmp2->Run(20,3);//合法的
    //pTmp1->Run(20,3);//不合法
    return 0;
}

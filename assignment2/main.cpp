#include <iostream>
using namespace std;




int cnt=1;
int xMin;
int xMax;
int yMax;
int yMin;

int in=0;
int Left=1;
int Right=2;
int bottom=4;
int up=8;



int checkCode(double x, double y)
{

    int c = in;

    if (x < xMin)
        c |= Left;
    else if (x > xMax)
        c |= Right;
    if (y < yMin)
        c |= bottom;
    else if (y > yMax)
        c |= up;

    return c;
}







int main()
{
    int x;
    int y;
    int x2;
    int y2;

    int x3;
    int y3;




    cout<< "Enter First co ordinate of Window : ";
    cin>>xMin>>yMin;
    cout<< "Enter second co ordinate of Window : ";
    cin>>xMax>>yMax;


    cout<<"Input the first point of line :";
    cin>>x>>y;

    cout<<"Input the second point of line :";
    cin>>x2>>y2;

float slopeM=(y2-y)/(x2-x);

int   outcode1=checkCode(x,y);
int   outcode2=checkCode(x2,y2);


int outcode;
bool complete=false;
 do{
    if(!(outcode1|outcode2)){
        cout<<"Inside the Window "<<endl;
        complete=true;
    }

    else if (outcode1 & outcode2){
        cout<<"Both in one side of the region"<<endl;
        complete=true;
    }


    else{
        if(outcode1!=in){
            outcode=outcode1;
        }

        else{
            outcode=outcode2;
        }



        if(outcode & up){
            x3=x+(1.0/slopeM)*(yMax-y);
            y3=yMax;
        }
        else if(outcode & bottom){
            x3=x+(1.0/slopeM)*(yMin-y);
            y3=yMin;
        }


        else if (outcode & Right){
            y3=y+slopeM*(xMax-x);
            x3=xMax;
        }
        else if(outcode & Left){
            y3=y+slopeM*(xMin-x);
            x3=xMax;
        }


        cout<< "Intersection point : "<<cnt<<" ("<<x3<<", "<<y3<<")"<<endl;
        cnt++;

        if(outcode==outcode1){
            x=y3;
            y=y3;
            outcode1=checkCode(x,y);
        }
        else{
            x2=x3;
            y2=y3;
            outcode2=checkCode(x2,y2);

        }

    }
 }
   while(!complete);



    return 0;
}




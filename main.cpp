#include <iostream>
using namespace std;
void organize(int&, int&, int&);
int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA
  cout<<red<<green<<blue<< "\n";
  organize(red,green, blue);




  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
void organize(int &red, int &green, int &blue)
{
    if((red > green) && (red > blue))
    {
        int temp = blue;
        blue = red;
        red = temp;
        if(red > green)
        {  
            int temp = green;
            green = red;
            red = temp;
        }
    }
    else if ((green > red) && (green > blue))
    {   
        int temp = blue;
        blue = green; 
        green = temp;
        if(red > green)
        {   
           int temp = green;
           green = red;
           red = temp;
        }
    }
    else if ((blue > red) && (blue > green))
    {
        if(red > green) 
        {  
            int temp = green;
            green = red;
            red = temp;
        }
    }
    
}

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
        if(blue > green)
        {  
            int temp = green;
            green = blue;
            blue = temp;
        }
    }
    else if ((green > blue) && (green > red))
    {   
        int temp = red;
        red = green; 
        green = temp;
        if(blue > green)
        {   
           int temp = green;
           green = blue;
           blue = temp;
        }
    }
    else if ((blue > red) && (blue > green))
    {
        int temp = red;
        red = blue;
        blue = temp;
        if(blue > green) 
        {  
            int temp = green;
            green = blue;
            blue = temp;
        }
    }
    
}

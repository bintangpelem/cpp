#include <iostream>

using namespace std;
class lingkaran
{
                
				public:
                float phi=3.14;
				float r;
                                
                    float luas(void)
					{
                    return(phi*r*r);                           
                    }
};


int main()
{
                lingkaran bundar;
                float a,b;
               
                cout<<"masukan jari-jari : ";cin>>b;
              
                bundar.r=b;
                cout<<"luas = "<<bundar.luas();
               
               
                return 0;
}

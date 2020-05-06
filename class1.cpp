#include <iostream>

using namespace std;
class trapesium{
            int x,y,z;
            public:
                        void sisi(int x);
                        int keliling(void){
                                    y=4*x;
                                    return(y);
                       
                        }
};
void trapesium::sisi(int a)
{
            x = a;
}
int main()
{
            trapesium rumah;
            int a;
            cout<<"masukkan sisi: ";
			cin>>a;
			rumah.sisi(a);
            cout<<"keliling: "<<rumah.keliling()<<endl;
           
         
}

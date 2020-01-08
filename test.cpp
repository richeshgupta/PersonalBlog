#include<iostream>
using namespace std;
int main(int argv,char **argc)
{
    cout<<"argv : "<<argv;
    if(argv>1)
        {
            for(int i=0;i<argv;i++)
            {
                // cout<<"\n"<<argc[i];
                if(argc[i]=="")
                {
                    if(i!=argv-1)
                    {
                        string path;
                        path = argc[i+1];
                        cout<<"Path : "<<path<<"\n";
                    }
                    else
                    {
                        cout<<"No path is given\n";
                    }
                    
                }
            }
        }
    return 0;
}
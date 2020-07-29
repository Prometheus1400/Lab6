#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class DartBoard{
    long long int thrown = 0;
    long long int hit_target = 0;
    int radius = 1;
    private:
        //Random Number Function
        double RandomFloat(double min, double max){
            // this  function assumes max > min, you may want 
            // more robust error checking for a non-debug build
            double random = ((double) rand()) / (double) RAND_MAX;

            // generate (in your case) a float between 0 and (4.5-.78)
            // then add .78, giving you a float between .78 and 4.5
            double range = max - min;  
            return (random*range) + min;
        }
        //Determine which darts hit or missed
        void calc_hit(){
            float x;
            float y;
            for(int i = 0; i < thrown; i++){
                x = RandomFloat(-1,1);
                y = RandomFloat(-1,1);
                if( sqrt((pow(x,2) + (pow(y,2)))) <= radius){
                    hit_target++;
                }
            }
        }

    public:
        //Functions
        void Throw(int num){
            thrown = num;
            srand( (unsigned)time( NULL ) );
            calc_hit();
        }

        long long int get_hit(){
            return hit_target;
        }
        long long int get_thrown(){
            return thrown;
        }

        double Get_Pi(){
            double pi = 4 * ((double)hit_target / thrown);
            return pi;
        }



};
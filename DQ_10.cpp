//Permutations of 4 numbers(no repetitions)
#include <iostream>
#include <cstdlib>

#include <cstdio>



using namespace std;



int main()

{

      int array[4]={1,2,3,4};

      for (int cnt4=4;cnt4!=0;--cnt4)

      {



          for (int cnt3=3;cnt3!=0;--cnt3)

          {



             for (int cnt2=2;cnt2!=0;--cnt2)

             {

                 printf("%d %d %d %d\n",array[0],array[1],array[2],array[3]);

                 int swap2=array[2];

                 array[2]=array[3];

                 array[3]=swap2;

             }

             int swap3=array[1];

             array[1]=array[2];

             array[2]=array[3];

             array[3]=swap3;

          }



          int swap4=array[0];

          array[0]=array[1];

          array[1]=array[2];

          array[2]=array[3];

          array[3]=swap4;



      }

      system("PAUSE");



      return 0;

}



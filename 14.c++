//FAST TRASPOSE

#include<iostream>
using namespace std;

//fast_transpose is a member of class sparsematrix.
class sparsematrix {
public:
    void fast_transpose();
};

void sparsematrix::fast_transpose(){
     int loc, i, col_no, sparse[100][3];
     int result[100][3];
     int total[sparse[0][1]], index[sparse[0][1]+1];
     for(int i=0;i<sparse[0][1];i++){
          total[i]=0;
     }
     for(int i=1;i<=sparse[0][2];i++){
          col_no=sparse[i][1];
          total[col_no]++;
     }
     index[0]=1;
     for(int i=1;i<=sparse[0][1];i++){
          index[i]=index[i-1]+ total[i-1];
     }
     result[0][0]=sparse[0][1];
     result[0][1]=sparse[0][0];
     result[0][2]=sparse[0][2];

     for(i=1;i<=sparse[0][2];i++){
          col_no=sparse[i][1];
          loc=index[col_no];
          result[loc][0]=sparse[i][1];
          result[loc][1]=sparse[i][0];
          result[loc][2]=sparse[i][2];
          index[col_no]++;
     }

     cout<<"\n\t Fast Transpose Result";
     cout<<"\n\t Rows Columns Values";
     for(int i=0;i<=result[0][2];i++){
          cout<<"\n";
          for(int j=0;j<3;j++){
               cout<<"\t"<<result[i][j];
          }
     }


}
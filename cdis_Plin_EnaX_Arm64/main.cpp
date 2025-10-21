#include <iostream>
#include <iomanip>
#include <math.h>
#include "sum_cdi.h"
using namespace std;

    long long int main_number=0;
    long long int ar_ofres[10];int refof=0;
    long long int result=0;
    long long int stbl=9;
    long long int rttl=0;
    long long int rti=0;long long int tri=0;
    long long int arint[100];int intar=0;
    long long int sumof_them=0;
    long long int afair=0;
    long long int res_one=0;
    long long int res_two=0;
    long long int asump=0;
    long long int resultt=0;
    long long int ts_loop=0;


    //of protous
   long long int tmsie[5]; int ltm=0;
   long long int stb_nine=0;
   long long int stb_nn=9;
   long long int tbs_rst=0;
   long long int frs_tbs=0;
   long long int rfs_sbt=0;
   long long int rst_sb=0;
   long long int confi=0;
   //

    sum_cdi *smcd=new sum_cdi();


int using_protous(long long int main_number,long long int first_cdi,long long int sum_of_nines,long long int last_cdi)
{
   cout<<"    using " << main_number <<"  ";
   cout<<"    first cdi " << first_cdi <<"\n";
   cout<<"    sum_of_nines " << sum_of_nines <<" ";
   cout<<"    last cdi " << last_cdi <<"\n";
   cout<<"\n";
   tbs_rst=stb_nine-first_cdi;
   cout<<"      with " << stb_nine << " - " << first_cdi << " ::== " << tbs_rst <<"\n";
   frs_tbs=main_number-tbs_rst;
   cout<<"      and " << main_number << " - " << tbs_rst << " ::== " << frs_tbs <<"\n";
   rfs_sbt=sum_of_nines-frs_tbs;
   cout<<"      --> " << sum_of_nines << " - " << frs_tbs << " ::== " << rfs_sbt <<"\n";
   rst_sb=rfs_sbt-tbs_rst;
   cout<<"      --> " << rfs_sbt << " - " << tbs_rst << " ::== " << rst_sb <<"\n";
   confi=stb_nn-rst_sb;
   cout<<"      --> " << stb_nn << " - " << rst_sb << " ::== " << confi <<"\n";
   cout<<"\n";
   if(confi==last_cdi) {cout<<"its the same " << confi << "  with " << last_cdi <<"\n";}
   if(confi!=last_cdi){cout<<"its not the same " << confi << " with " << last_cdi <<"\n";}
   return 0;
}

long long int sum_temp=0;
void loop(long long int m_b,long long int result_loop){
        result_loop=result;
        cout<<"current cdi " << " - " << " next cdi " << " ::== " << " subtraction \n";
        while(result_loop>9){
         rti=smcd->cdis(result_loop,3);
         tri=result_loop-rti;
         cout<<result_loop <<" -  " << rti << " ::== " <<  tri <<"\n";
         arint[intar]=tri; intar+=1;
         result_loop=smcd->cdis(result_loop,3);
         if(result_loop<=9){//cout<<"final value " << result <<"\n";
                        //cout<<"of last \n";
                        cout<<result_loop << " - " << stbl << " ::== " << stbl <<"\n";
                        arint[intar]=stbl; intar+=1;
                        afair=stbl-result_loop;
                        cout<<"and " << stbl << " - " << result_loop << " ::== " << afair <<"\n";
                        cout<<"\n";
                        cout<<"additions of all subtractions \n";
                        for(int i=0;i<=intar-1;i++){
                                //cout<<"sumof_them  + arint @i pos " << sumof_them << " + ";
                                cout<<sumof_them << " + " ;
                                sumof_them=sumof_them+arint[i];
                                cout<< arint[i] <<" ::== " << sumof_them <<"\n";
                        }
                        cout<<"exiting with sum of " << sumof_them <<" ";
                        sum_temp=0;
                        sum_temp=sumof_them;
                        sumof_them=sumof_them-afair;
                        cout<<" - " << afair << " ::== " << sumof_them <<"\n";
                        break;
                    }
    }
    cout<<"\n";
    if(sumof_them==main_number){cout<<"Matches Main number with Sumof Them \n";}
    if(sumof_them!=main_number){cout<<"No match\n";}
    cout<<"\n";
    cout<<"-------------USING FIRST CDI-----------------------------\n";
    using_protous(main_number,result,sum_temp,result_loop);
    cout<<"-------------END OF PROTOUS------------------------------\n";
    cout<<"\n";
    cout<<"----------END OF LOOP -----------------------------------\n";
    cout<<"\n";
 }






int main(int argc,char** argv)
{
    cout<<"enter ur number, enter the 9[X]! \n ";
    main_number=stoll(argv[1]);
    stb_nine=stoll(argv[2]);
    smcd->cdi=0;
    smcd->cdis(main_number,3);
    result=smcd->cdis(main_number,3);
    cout<<"the result is " << result <<"\n"; //22
    ar_ofres[refof]=main_number-result; refof+=1; //2763
    rttl=ar_ofres[refof-1];
    cout<<"\n";
    cout<<"of " << main_number << " - " << result << " ::== " << ar_ofres[refof-1] <<" the sum of digits \n";
    cout<<"\n";
    cout<<"----------WITH ALL IN LOOP -----------------------------------\n";
    //arint[intar]=ar_ofres[refof-1];intar+=1;
    arint[intar]=main_number-result; intar+=1;
    loop(arint[intar-1],0);
    cout<<"----------------------DEPTH of cdis----------------------------\n";
    cout<<"the code below contains a depth proof. If depth isnt satisfied \n";
    cout<<"the result MAY BE NOT the main number you entered above        \n";
    ar_ofres[refof]=result; refof+=1; //22
    result=smcd->cdis(ar_ofres[refof-1],3);
    res_one=ar_ofres[1]-result;
    cout<<"of " <<ar_ofres[1] << " - " << result << " ::== " << res_one <<"\n";
    ar_ofres[refof]=result;refof+=1;
    cout<<"of assumption " << ar_ofres[2] << " - " << ar_ofres[2] << " ::== " << stbl <<"\n";
    res_two=stbl-ar_ofres[2];
    asump=ar_ofres[0] + res_one + stbl;
    cout<<"with assumption of addition " << ar_ofres[0] << " + " << res_one << " + " << stbl << " ::== " << asump <<"\n";
    cout<<"of assumption " << stbl << " - " << ar_ofres[2] << " ::== " << res_two <<"\n";
    resultt=asump-res_two;
    cout<<"and final of " << asump << " - " << res_two << " ::== " << resultt <<"\n";
    ar_ofres[refof]=res_two; refof+=1;
    cout<<"\n";
    if(resultt==main_number){cout<<"Depth is NOT correct but numbers matches\n";}
    if(resultt!=main_number){cout<<"Unknown error \n";}
    cout<<"\n";
    result=rttl;
    cout<<"And of number " << result <<"\n";
    while(result>9){
       result=smcd->cdis(result,3);
       cout<<"internal result " << result <<"\n";
       if(result>9){
                    ts_loop=smcd->cdis(result,3);
                    cout<<"with ts_loop of " << ts_loop <<"\n";
       }
       cout<<result <<  " - " << ts_loop << " ::== " << result-ts_loop <<"\n";
       if(result-ts_loop>=9){result=result-ts_loop; cout<<"continue with " << result <<"\n";}
       if(result-ts_loop<9){break;}
    }
    return 0;
}

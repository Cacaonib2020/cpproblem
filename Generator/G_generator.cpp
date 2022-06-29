#include<iostream>
#include<fstream>
#include<random>
#include<stdlib.h>
#include<string.h>
#define rep(i,s,n) for (int i = (s); i < (int)(n); i++)
using namespace std;
/*---------------------------------------------------------------------------------------------------------*/

char prob[10][100] = {
    "Ilikemath",
    "ThereAreSomeCacaonibs",
    "TheunanimousDeclarationofthethirteenunitedStatesofAmerica",
    "WhenintheCourseofhumanevents",
    "itbecomesnecessaryforonepeopletodissolve",
    "thepoliticalbandswhichhaveconnectedthem",
    "withanotherandtoassumeamongthepowersoftheearth",
    "theseparateandequalstationtowhichtheLawsofNatureandofNaturesGodentitlethem",
    "adecentrespecttotheopinionsofmankindrequiresthatthey",
    "shoulddeclarethecauseswhichimpelthemtotheseparation"
};

int main(){
    for(int i = 0; i < 10;i++){
        int a = rand() % 1000 + 1;
        int m = a % 26;

        char outname[25];
        sprintf(outname, "./in/Case%02d.txt", i);
        FILE* fp = NULL;
        fopen_s(&fp, outname, "w");

        char ques[100]={};
        strcpy(ques , prob[i]);
        int len=0;
        for (int o = 0; ques[o]!='\0'; o++) len++;
        fprintf(fp, "%d\n", len);
        rep(j, 0, len){
            if (ques[j]<='Z'){
                ques[j] = char(int(ques[j])-m);
                if (ques[j] < 'A')  ques[j] = char(int(ques[j]) + 26);
            }else{
                ques[j] = char(int(ques[j]) - m);
                if (ques[j] < 'a')  ques[j] = char(int(ques[j]) + 26);
            }
            fprintf(fp,"%c", ques[j]);
        }
        fprintf(fp, "\n%d\n",a);
        fclose(fp);
    }
    return 0;
}
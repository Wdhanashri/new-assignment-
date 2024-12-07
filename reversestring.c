#include<iostream>
#include<string.h>
#define MAX_SIZE 100
using namespace std;
int main(){
int i,j,lenght;
char string[MAX_SIZE];
char reverse[MAX_SIZE];
count<<"Enter a string :";
cin>>string;
lenght = strlen(string);
j=0;
for(i = lenght-1; i >=0; i--){
reverse [j] string[i];
j++;
}
reverse [j] = '\0';
count<<reverse;
return 0;


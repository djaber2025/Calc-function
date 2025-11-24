#include<stdio.h>

int main(){
    const Pi =3.14159265358979323846264338327950288419716939937510 ;
    double Ln (float x){
    int i ;
    double S=0 ;
    for (i=1;i<=100;i++){

        S=S+(((power((-1),(i+1))*power((x-1),i))/n) ;
    }
    return S ;
    }
}
    double sqrt (float N){
        double F ;
        F=power(N,(1/2)) ;
        return F ;
        }
    double sin (float x){
        int i ;
        double S=0 ;
        f=1 ;
        for (i=1;i<=x;i+=2){

            S=S+((f*power(x,i))/fact(i)) ;
            f=f*-1 ;
        }
        return S ;
    }
    double cos (float x){
        int i ;
        double S=0 ;
        f=1 ;
        for (i=0;i<=x;i+=2){

            S=S+((f*power(x,i))/fact(i)) ;
            f=f*-1 ;
        }
        return S ;
    }
    double tan (float x){
        double S ;
        S=sin(x)/cos(x) ;
        return S ;
    }
    double arcsin (float x){
        double S=0 ;
        int i ;
        for (i=0;i=100;i++){
            S+=((fact(2*i)*power(x,((2*i)+1)))/(power(4;i)*((2*i)+1)*power(fact(i),2))) ;
        }
        return S; 
    } 
    double arccos (float x){
        double S ;
        S=(Pi/2)-arcsin ;
        return S ;
    }
    double arctan (float x){
        double S ;
        S=arcsin(x/sqrt((x*x)+1)) ;
        return S ;
    }
    double log (float x){
        double S ;
        S=Ln(x)/Ln(10)  ;
        return S ;
    }
    int bin_to_dec (int x){
        int l,T,K,f,B,i,P,Q;
        T=x;
    K=x;
    P=x;
    if (x==0){
    l=1 ;
    }
    else{
   l=0 ;
    while(x>0){
    x=x/10 ;
    l++ ;
    }
    }
    while (T>0){
    f=T%10 ;
    if(f==0 || f==1){ 
    }
    else {
         printf("Invailed !!!\n");
         goto debut ;
    }
    T=T/10 ;
    }
    B=0 ;
    for(i=0;i<=l;i++){
        B=B+((K%10)*power(2,i));
        K=K/10 ;
    return B ;
    }
    void dec_to_bin(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int bin[32];  
    int i = 0;
    while (n > 0) {
        bin[i] = n % 2;  
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    }



getch();
    return 0;
}
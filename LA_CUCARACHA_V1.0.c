//-----------------------------------------------------------
/*
 Program    :- La_Cucaracha_melody_for_PIC16F887_v1.0
 Author     :- L.K Perera
 Controller :- PIC16F887
 Date       :- 2019.05.04
 Program.No :- ----
*/
//-----------------------------------------------------------
//A_Notell the Source code contains are own by the authur.All rights reserved.
//-----------------------------------------------------------
#define Switch_in PORTB.F0//define PORTB.F0 pin as Switch_in.
//Function for La_Cucarracha melody.
void La_Cucarracha(){
 Sound_Play(392,100);//G_Note
 delay_ms(50);
 Sound_Play(392,100);//G_Note
 delay_ms(50);
 Sound_Play(392,100);//G_Note
 delay_ms(50);
 Sound_Play(261,500);//C_Note
 delay_ms(50);
 Sound_Play(329,100);//E_Note
 delay_ms(250);
 Sound_Play(392,100);//G_Note
 delay_ms(50);
 Sound_Play(392,100);//G_Note
 delay_ms(50);
 Sound_Play(392,100);//G_Note
 delay_ms(50);
 Sound_Play(261,500);//C_Note
 delay_ms(50);
 Sound_Play(329,100);//E_Note
 delay_ms(500);
 Sound_Play(261,250);//C_Note
 delay_ms(50);
 Sound_Play(261,150);//C_Note
 delay_ms(50);
 Sound_Play(246,100);//B_Note
 delay_ms(50);
 Sound_Play(246,100);//B_Note
 delay_ms(50);
 Sound_Play(220,100);//A_Note
 delay_ms(50);
 Sound_Play(220,100);//A_Note
 delay_ms(50);
 Sound_Play(392,50);//G_Note
 delay_ms(1000);
}
int Switch = 0;//Integer value assign for Switch.
void main(){
  ANSEL = 0;//Make all GPIO Digital.
  ANSELH = 0;//Make all GPIO Digital.
  C1ON_bit = 0;//Make Comparator 1 off.
  C2ON_bit = 0;//Make Comparator 2 off.
  TRISB.F0 = 0xFF;//Make TRISB.F0 as input.
  PORTB = 0x00;//Make PORTB equals to zero.
  Sound_Init(&PORTC, 3);//Initializing the sound function.
 //Program loop
 while(1){
  if(Switch_in==1){//If Switch_in gets 1.
    if(Switch==0){//If Switch value is 0. 
      Switch=1;//Set Switch value to 1.
    }
  }
  if(Switch_in==0){//If Switch_in gets 0.
    if(Switch==1){//If Switch value is 1. 
      La_Cucarracha();//Run the La_Cucarracha function.
      Switch=0;//Set Switch value to 0.
    }
  }
/*
--------------------END-OF-THE-SOURCE-CODE----------------------
*/
 }
}
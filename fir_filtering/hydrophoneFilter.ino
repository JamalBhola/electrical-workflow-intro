#include <TimerOne.h>

float sampleData40khz257_float[] = {0,0.481753673598394,0.844327924886493,0.998026728320077,0.904827053444234,0.587785254615836,0.125333236983331,-0.368124548946448,-0.770513239846867,-0.982287249760058,-0.951056518070045,-0.684547110534339,-0.248689893840720,0.248689879932667,0.684547100066952,0.951056513632816,0.982287252450699,0.770513248999749,0.368124562297269,-0.125333222737383,-0.587785242999020,-0.904827047330395,-0.998026729221697,-0.844327932580522,-0.481753686181432,-1.43591738957233e-08,0.481753661015354,0.844327917192463,0.998026727418457,0.904827059558072,0.587785266232652,0.125333251229277,-0.368124535595625,-0.770513230693985,-0.982287247069417,-0.951056522507274,-0.684547121001725,-0.248689907748773,0.248689866024611,0.684547089599566,0.951056509195587,0.982287255141339,0.770513258152631,0.368124575648092,-0.125333208491438,-0.587785231382206,-0.904827041216556,-0.998026730123317,-0.844327940274551,-0.481753698764471,-2.87183477914466e-08,0.481753648432317,0.844327909498433,0.998026726516837,0.904827065671910,0.587785277849466,0.125333265475224,-0.368124522244806,-0.770513221541105,-0.982287244378776,-0.951056526944502,-0.684547131469110,-0.248689921656824,0.248689852116560,0.684547079132176,0.951056504758359,0.982287257831980,0.770513267305510,0.368124588998914,-0.125333194245494,-0.587785219765390,-0.904827035102716,-0.998026731024936,-0.844327947968579,-0.481753711347511,-4.30775216871698e-08,0.481753635849270,0.844327901804406,0.998026725615217,0.904827071785749,0.587785289466284,0.125333279721172,-0.368124508893987,-0.770513212388223,-0.982287241688134,-0.951056531381729,-0.684547141936499,-0.248689935564878,0.248689838208506,0.684547068664793,0.951056500321130,0.982287260522620,0.770513276458391,0.368124602349729,-0.125333179999546,-0.587785208148574,-0.904827028988879,-0.998026731926555,-0.844327955662608,-0.481753723930550,-5.74366955828931e-08,0.481753623266236,0.844327894110375,0.998026724713596,0.904827077899587,0.587785301083099,0.125333293967112,-0.368124495543164,-0.770513203235340,-0.982287238997493,-0.951056535818957,-0.684547152403881,-0.248689949472931,0.248689824300452,0.684547058197406,0.951056495883900,0.982287263213259,0.770513285611273,0.368124615700551,-0.125333165753598,-0.587785196531758,-0.904827022875040,-0.998026732828174,-0.844327963356642,-0.481753736513584,-7.17958623731890e-08,0.481753610683196,0.844327886416344,0.998026723811974,0.904827084013425,0.587785312699909,0.125333308213073,-0.368124482192335,-0.770513194082466,-0.982287236306852,-0.951056540256187,-0.684547162871273,-0.248689963380985,0.248689810392405,0.684547047730012,0.951056491446670,0.982287265903896,0.770513294764158,0.368124629051366,-0.125333151507637,-0.587785184914947,-0.904827016761203,-0.998026733729793,-0.844327971050667,-0.481753749096623,-8.61550433743396e-08,0.481753598100155,0.844327878722313,0.998026722910353,0.904827090127257,0.587785324316735,0.125333322459007,-0.368124468841525,-0.770513184929575,-0.982287233616210,-0.951056544693415,-0.684547173338649,-0.248689977289039,0.248689796484350,0.684547037262624,0.951056487009440,0.982287268594538,0.770513303917030,0.368124642402201,-0.125333137261703,-0.587785173298142,-0.904827010647357,-0.998026734631411,-0.844327978744704,-0.481753761679662,-1.00514203059208e-07,0.481753585517115,0.844327871028282,0.998026722008733,0.904827096241101,0.587785335933538,0.125333336704954,-0.368124455490689,-0.770513175776701,-0.982287230925565,-0.951056549130638,-0.684547183806035,-0.248689991197093,0.248689782576296,0.684547026795236,0.951056482572215,0.982287271285178,0.770513313069911,0.368124655753023,-0.125333123015755,-0.587785161681314,-0.904827004533522,-0.998026735533031,-0.844327986438725,-0.481753774262702,-1.14873391165786e-07,0.481753572934086,0.844327863334243,0.998026721107111,0.904827102354932,0.587785347550353,0.125333350950901,-0.368124442139880,-0.770513166623808,-0.982287228234925,-0.951056553567869,-0.684547194273432,-0.248690005105133,0.248689768668241,0.684547016327858,0.951056478134984,0.982287273975817,0.770513322222791,0.368124669103845,-0.125333108769808,-0.587785150064497,-0.904826998419682,-0.998026736434649,-0.844327994132754,-0.481753786845741,-1.29232550850655e-07,0.481753560351033,0.844327855640219,0.998026720205489,0.904827108468775,0.587785359167168,0.125333365196863,-0.368124428789057,-0.770513157470934,-0.982287225544283,-0.951056558005092,-0.684547204740807,-0.248690019013200,0.248689754760187,0.684547005860459,0.951056473697749,0.982287276666453,0.770513331375672,0.368124682454653,-0.125333094523874,-0.587785138447680,-0.904826992305847,-0.998026737336267,-0.844328001826774,-0.481753799428780,-1.43591724746378e-07,0.481753547767992,0.844327847946187,0.998026719303867,0.904827114582606,0.587785370783982,0.125333379442810};


float firCoeff_float[] = {-0.000699098629411310,-0.000501460453961045,-0.000546094146557152,-0.000479126087157056,-0.000285442394670099,2.06028726097429e-05,0.000394317263271660,0.000767004676163197,0.00106110644992441,0.00120846147183329,0.00116997223813087,0.000948396918829531,0.000592541473452002,0.000186921824933961,-0.000168374317581765,-0.000386119674658403,-0.000417647330323234,-0.000272901903372258,-2.39058881561505e-05,0.000208140598260798,0.000286223716102541,9.64564460446127e-05,-0.000411679502576590,-0.00119844870641828,-0.00212276703678072,-0.00297040445730090,-0.00349228945560753,-0.00346832792274654,-0.00277007301338017,-0.00140507053583860,0.000462372699985281,0.00253359228372574,0.00442924583330751,0.00577203137800098,0.00627317698672414,0.00580679485574365,0.00444735912606120,0.00246202037669718,0.000253400823567063,-0.00173191050998867,-0.00311100319959223,-0.00365897431038320,-0.00336693623103201,-0.00244405260309577,-0.00126380461733788,-0.000263778667431325,0.000175334804225713,-0.000159113085828722,-0.00124371354468167,-0.00281064095906913,-0.00440832693129778,-0.00551692768931389,-0.00568824773654342,-0.00467777764424682,-0.00252675078809261,0.000426070444518700,0.00361396349035203,0.00637599825859070,0.00812438316643238,0.00850026309490204,0.00747571839019656,0.00537064112722874,0.00277613964863122,0.000399856304284185,-0.00112810346763581,-0.00143712770659477,-0.000534289516508579,0.00117750721983612,0.00299313222058117,0.00409234594553709,0.00377386156469584,0.00167507841251791,-0.00208479934372008,-0.00688371295109391,-0.0117135969921947,-0.0154120260849595,-0.0169572401791811,-0.0157482102513313,-0.0117956222966313,-0.00576398242264986,0.00115616689436138,0.00752446986734867,0.0120118828490376,0.0137553419917822,0.0126107614487410,0.00922804791480303,0.00491472799330950,0.00130736269056797,-7.60238108341582e-05,0.00170675653498620,0.00667722942307591,0.0138056203722954,0.0211509335786104,0.0262609701603651,0.0267570819705725,0.0209724009037018,0.00849034264683723,-0.00956033729016781,-0.0305473599582911,-0.0507363565266132,-0.0659875497221947,-0.0726121440529823,-0.0682054162025452,-0.0522682219743729,-0.0264663901180029,0.00554934144020081,0.0387448109686375,0.0676152855157852,0.0872263610363007,0.0941688343882561,0.0872263610363007,0.0676152855157852,0.0387448109686375,0.00554934144020081,-0.0264663901180029,-0.0522682219743729,-0.0682054162025452,-0.0726121440529823,-0.0659875497221947,-0.0507363565266132,-0.0305473599582911,-0.00956033729016781,0.00849034264683723,0.0209724009037018,0.0267570819705725,0.0262609701603651,0.0211509335786104,0.0138056203722954,0.00667722942307591,0.00170675653498620,-7.60238108341582e-05,0.00130736269056797,0.00491472799330950,0.00922804791480303,0.0126107614487410,0.0137553419917822,0.0120118828490376,0.00752446986734867,0.00115616689436138,-0.00576398242264986,-0.0117956222966313,-0.0157482102513313,-0.0169572401791811,-0.0154120260849595,-0.0117135969921947,-0.00688371295109391,-0.00208479934372008,0.00167507841251791,0.00377386156469584,0.00409234594553709,0.00299313222058117,0.00117750721983612,-0.000534289516508579,-0.00143712770659477,-0.00112810346763581,0.000399856304284185,0.00277613964863122,0.00537064112722874,0.00747571839019656,0.00850026309490204,0.00812438316643238,0.00637599825859070,0.00361396349035203,0.000426070444518700,-0.00252675078809261,-0.00467777764424682,-0.00568824773654342,-0.00551692768931389,-0.00440832693129778,-0.00281064095906913,-0.00124371354468167,-0.000159113085828722,0.000175334804225713,-0.000263778667431325,-0.00126380461733788,-0.00244405260309577,-0.00336693623103201,-0.00365897431038320,-0.00311100319959223,-0.00173191050998867,0.000253400823567063,0.00246202037669718,0.00444735912606120,0.00580679485574365,0.00627317698672414,0.00577203137800098,0.00442924583330751,0.00253359228372574,0.000462372699985281,-0.00140507053583860,-0.00277007301338017,-0.00346832792274654,-0.00349228945560753,-0.00297040445730090,-0.00212276703678072,-0.00119844870641828,-0.000411679502576590,9.64564460446127e-05,0.000286223716102541,0.000208140598260798,-2.39058881561505e-05,-0.000272901903372258,-0.000417647330323234,-0.000386119674658403,-0.000168374317581765,0.000186921824933961,0.000592541473452002,0.000948396918829531,0.00116997223813087,0.00120846147183329,0.00106110644992441,0.000767004676163197,0.000394317263271660,2.06028726097429e-05,-0.000285442394670099,-0.000479126087157056,-0.000546094146557152,-0.000501460453961045,-0.000699098629411310};
int firNum = 219;

float computationalDataStream[512];
float bufferDataStream[256];
int computationalDataSize = 512;
int bufferDataSize = 256;

float outputData_float[256];

int dataCounter = 0;

void setup() {
  Serial.begin(1000000);
  Timer1.initialize(500000); //needs to be changed to 2us
  Timer1.attachInterrupt(sample_adc);
}

void loop() {
  
  if(dataCounter == bufferDataSize) { //check if buffer is full
    shiftDataStream(computationalDataStream,bufferDataStream,computationalDataSize); //move buffer
    convolve(firCoeff_float,firNum,computationalDataStream,outputData_float,computationalDataSize); //freq filter
  }
}

void shiftDataStream(float *dS, float *bS, int n) { //computational data stream is in two parts, old and new, to prevent transient error. This fn shifts the new section into the old section and moves the buffer into the new section

  for(int i = n/2; i < n/2-1;i++) {
    dS[i-n/2] = dS[i]; //shift data
    dS[i] = bS[i-n/2]; //move buffer to computational
    bS[i-n/2] = 0; //clear buffer
  }
}

void convolve (float *p_coeffs, int p_coeffs_n,
               float *p_in, float *p_out, int n)
{
  int i, j, k;
  float tmp;

  for (k = 0; k < n; k++)  //  position in output
  {
    tmp = 0;

    for (i = 0; i < p_coeffs_n; i++)  //  position in coefficients array
    {
      j = k - i;  //  position in input

      if (j >= 0)  //  bounds check for input buffer
      {
        tmp += p_coeffs [i] * p_in [j];
      }
    }

    p_out [k] = tmp;
  }
}

void sample_adc() {
  int adc = analogRead(0); //temporary access, need to use library for quicker reads
  bufferDataStream[dataCounter] = adc;
 

  dataCounter++;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct element 
{
	
char name[20];

char group[4];

char symbol[2];
	
int atomicnum,period;
	
float atomicwt;

}
atom[118];


void table() 
{
strcpy(atom[0].name,"HYDROGEN");
strcpy(atom[0].symbol,"H");
atom[0].atomicnum=1;
atom[0].atomicwt=1.008;
strcpy(atom[0].group,"1A");
atom[0].period=1;

strcpy(atom[1].name,"HELIUM");
strcpy(atom[1].symbol,"He");
atom[1].atomicnum=2;
atom[1].atomicwt=4.00;
strcpy(atom[1].group,"8A");
atom[1].period=1;

strcpy(atom[2].name,"LITHIUM");
strcpy(atom[2].symbol,"Li");
atom[2].atomicnum=3;
atom[2].atomicwt=6.94;
strcpy(atom[2].group,"1A");
atom[2].period=2;

strcpy(atom[3].name,"BERYLLIUM");
strcpy(atom[3].symbol,"Be");
atom[3].atomicnum=4;
atom[3].atomicwt=9.01;
strcpy(atom[3].group,"2A");
atom[3].period=2;

strcpy(atom[4].name,"BORON");
strcpy(atom[4].symbol,"B");
atom[4].atomicnum=5;
atom[4].atomicwt=10.81;
strcpy(atom[4].group,"3A");
atom[4].period=2;

strcpy(atom[5].name,"CARBON");
strcpy(atom[5].symbol,"C");
atom[5].atomicnum=6;
atom[5].atomicwt=12.01;
strcpy(atom[0].group,"4A");
atom[5].period=2;

strcpy(atom[6].name,"NITROGEN");
strcpy(atom[6].symbol,"N");
atom[6].atomicnum=7;
atom[6].atomicwt=14.00;
strcpy(atom[6].group,"5A");
atom[6].period=2;

strcpy(atom[7].name,"OXYGEN");
strcpy(atom[7].symbol,"O");
atom[7].atomicnum=8;
atom[7].atomicwt=15.59;
strcpy(atom[7].group,"6A");
atom[7].period=2;

strcpy(atom[8].name,"FLUORINE");
strcpy(atom[8].symbol,"F");
atom[8].atomicnum=9;
atom[8].atomicwt=18.99;
strcpy(atom[8].group,"7A");
atom[8].period=2;

strcpy(atom[9].name,"NEON");
strcpy(atom[9].symbol,"Ne");
atom[9].atomicnum=10;
atom[9].atomicwt=20.18;
strcpy(atom[9].group,"8A");
atom[9].period=2;

strcpy(atom[10].name,"SODIUM");
strcpy(atom[10].symbol,"Na");
atom[10].atomicnum=11;
atom[10].atomicwt=22.99;
strcpy(atom[10].group,"1A");
atom[10].period=3;

strcpy(atom[11].name,"MAGNESIUM");
strcpy(atom[11].symbol,"Mg");
atom[11].atomicnum=12;
atom[11].atomicwt=24.30;
strcpy(atom[11].group,"2A");
atom[11].period=3;

strcpy(atom[12].name,"ALUMINIUM");
strcpy(atom[12].symbol,"Al");
atom[12].atomicnum=13;
atom[12].atomicwt=1.008;
strcpy(atom[12].group,"3A");
atom[12].period=3;

strcpy(atom[13].name,"SILICON");
strcpy(atom[13].symbol,"Si");
atom[13].atomicnum=14;
atom[13].atomicwt=28.08;
strcpy(atom[13].group,"4A");
atom[13].period=3;

strcpy(atom[14].name,"PHOSPHOROUS");
strcpy(atom[14].symbol,"P");
atom[14].atomicnum=15;
atom[14].atomicwt=30.97;
atom[14].period=3;
strcpy(atom[14].group,"5A");

strcpy(atom[15].name,"SULPHUR");
strcpy(atom[15].symbol,"S");
atom[15].atomicnum=16;
atom[15].atomicwt=32.06;
atom[15].period=3;
strcpy(atom[15].group,"6A");

strcpy(atom[16].name,"CHLORINE");
strcpy(atom[16].symbol,"Cl");
atom[16].atomicnum=17;
atom[16].atomicwt=35.45;
atom[16].period=3;
strcpy(atom[16].group,"7A");

strcpy(atom[17].name,"ARGON");
strcpy(atom[17].symbol,"Ar");
atom[17].atomicnum=18;
atom[17].atomicwt=39.94;
atom[17].period=3;
strcpy(atom[17].group,"8A");

strcpy(atom[18].name,"POTASSIUM");
strcpy(atom[18].symbol,"K");
atom[18].atomicnum=19;
atom[18].atomicwt=39.09;
atom[18].period=4;
strcpy(atom[18].group,"1A");

strcpy(atom[19].name,"CALICUM");
strcpy(atom[19].symbol,"Ca");
atom[19].atomicnum=20;
atom[19].atomicwt=40.07;
atom[19].period=4;
strcpy(atom[19].group,"2A");

strcpy(atom[20].name,"SCANDIUM");
strcpy(atom[20].symbol,"Sc");
atom[20].atomicnum=21;
atom[20].atomicwt=44.95;
atom[20].period=4;
strcpy(atom[20].group,"3B");

strcpy(atom[21].name,"TITANIUM");
strcpy(atom[21].symbol,"Ti");
atom[21].atomicnum=22;
atom[21].atomicwt=47.86;
atom[21].period=4;
strcpy(atom[21].group,"4B");

strcpy(atom[22].name,"VANADIUM");
strcpy(atom[22].symbol,"V");
atom[22].atomicnum=23;
atom[22].atomicwt=50.94;
atom[22].period=4;
strcpy(atom[22].group,"5B");

strcpy(atom[23].name,"CHROMIUM");
strcpy(atom[23].symbol,"Cr");
atom[23].atomicnum=24;
atom[23].atomicwt=51.99;
atom[23].period=4;
strcpy(atom[23].group,"6B");

strcpy(atom[24].name,"MANGANESE");
strcpy(atom[24].symbol,"Mn");
atom[24].atomicnum=25;
atom[24].atomicwt=54.84;
atom[24].period=4;
strcpy(atom[24].group,"7B");

strcpy(atom[25].name,"IRON");
strcpy(atom[25].symbol,"Fe");
atom[25].atomicnum=26;
atom[25].atomicwt=55.84;
atom[25].period=4;
strcpy(atom[25].group,"8B");

strcpy(atom[26].name,"COBALT");
strcpy(atom[26].symbol,"Co");
atom[26].atomicnum=27;
atom[26].atomicwt=58.93;
atom[26].period=4;
strcpy(atom[26].group,"8B");

strcpy(atom[27].name,"NICKEL");
strcpy(atom[27].symbol,"Ni");
atom[27].atomicnum=28;
atom[27].atomicwt=58.69;
atom[27].period=4;
strcpy(atom[27].group,"8B");

strcpy(atom[28].name,"COPPER");
strcpy(atom[28].symbol,"Cu");
atom[28].atomicnum=29;
atom[28].atomicwt=63.54;
atom[28].period=4;
strcpy(atom[28].group,"1B");

strcpy(atom[29].name,"ZINC");
strcpy(atom[29].symbol,"Zn");
atom[29].atomicnum=30;
atom[29].atomicwt=65.39;
atom[29].period=4;
strcpy(atom[29].group,"2B");

strcpy(atom[30].name,"GALLIUM");
strcpy(atom[30].symbol,"Ga");
atom[30].atomicnum=31;
atom[30].atomicwt=69.72;
atom[30].period=4;
strcpy(atom[30].group,"3A");

strcpy(atom[31].name,"GERMANIUM");
strcpy(atom[31].symbol,"Ge");
atom[31].atomicnum=32;
atom[31].atomicwt=72.64;
atom[31].period=4;
strcpy(atom[31].group,"4A");

strcpy(atom[32].name,"ARSENIC");
strcpy(atom[32].symbol,"As");
atom[32].atomicnum=33;
atom[32].atomicwt=74.92;
atom[32].period=4;
strcpy(atom[32].group,"5A");

strcpy(atom[33].name,"SELENIUM");
strcpy(atom[33].symbol,"Se");
atom[33].atomicnum=34;
atom[33].atomicwt=78.96;
atom[33].period=4;
strcpy(atom[33].group,"6A");

strcpy(atom[34].name,"BROMINE");
strcpy(atom[34].symbol,"Br");
atom[34].atomicnum=35;
atom[34].atomicwt=79.90;
atom[34].period=4;
strcpy(atom[34].group,"7A");

strcpy(atom[35].name,"KRYPTON");
strcpy(atom[35].symbol,"Kr");
atom[35].atomicnum=36;
atom[35].atomicwt=83.80;
atom[35].period=5;
strcpy(atom[35].group,"8A");

strcpy(atom[36].name,"RUBIDIUM");
strcpy(atom[36].symbol,"Rb");
atom[36].atomicnum=37;
atom[36].atomicwt=85.46;
atom[36].period=5;
strcpy(atom[36].group,"1A");

strcpy(atom[37].name,"STRONTIUM");
strcpy(atom[37].symbol,"Sr");
atom[37].atomicnum=38;
atom[37].atomicwt=87.62;
atom[37].period=5;
strcpy(atom[37].group,"2A");

strcpy(atom[38].name,"YTTRIUM");
strcpy(atom[38].symbol,"Y");
atom[38].atomicnum=39;
atom[38].atomicwt=88.90;
atom[38].period=5;
strcpy(atom[38].group,"3B");

strcpy(atom[39].name,"ZIRCONIUM");
strcpy(atom[39].symbol,"Zr");
atom[39].atomicnum=40;
atom[39].atomicwt=91.22;
atom[39].period=5;
strcpy(atom[39].group,"4B");

strcpy(atom[40].name,"NIOBIUM");
strcpy(atom[40].symbol,"Nb");
atom[40].atomicnum=41;
atom[40].atomicwt=92.90;
atom[40].period=5;
strcpy(atom[40].group,"5B");

strcpy(atom[41].name,"MOLYBDENUM");
strcpy(atom[41].symbol,"Mo");
atom[41].atomicnum=42;
atom[41].atomicwt=95.94;
atom[41].period=5;
strcpy(atom[41].group,"6B");

strcpy(atom[42].name,"TECHNETIUM");
strcpy(atom[42].symbol,"Tc");
atom[42].atomicnum=43;
atom[42].atomicwt=98.00;
atom[42].period=5;
strcpy(atom[42].group,"7B");

strcpy(atom[43].name,"RUTHENIUM");
strcpy(atom[43].symbol,"Ru");
atom[43].atomicnum=44;
atom[43].atomicwt=101.07;
atom[43].period=5;
strcpy(atom[43].group,"8B");

strcpy(atom[44].name,"RHODIUM");
strcpy(atom[44].symbol,"Rh");
atom[44].atomicnum=45;
atom[44].atomicwt=102.90;
atom[44].period=5;
strcpy(atom[44].group,"8B");

strcpy(atom[45].name,"PALLADIUM");
strcpy(atom[45].symbol,"Pd");
atom[45].atomicnum=46;
atom[45].atomicwt=106.42;
atom[45].period=5;
strcpy(atom[45].group,"8B");

strcpy(atom[46].name,"SILVER");
strcpy(atom[46].symbol,"Ag");
atom[46].atomicnum=47;
atom[46].atomicwt=107.86;
atom[46].period=5;
strcpy(atom[46].group,"1B");

strcpy(atom[47].name,"CADMIUM");
strcpy(atom[47].symbol,"Cd");
atom[47].atomicnum=48;
atom[47].atomicwt=112.41;
atom[47].period=5;
strcpy(atom[47].group,"2B");

strcpy(atom[48].name,"INDIUM");
strcpy(atom[48].symbol,"In");
atom[48].atomicnum=49;
atom[48].atomicwt=114.81;
atom[48].period=5;
strcpy(atom[48].group,"3A");

strcpy(atom[49].name,"TIN");
strcpy(atom[49].symbol,"Sn");
atom[49].atomicnum=50;
atom[49].atomicwt=118.71;
atom[49].period=5;
strcpy(atom[49].group,"4A");

strcpy(atom[50].name,"ANTIMONY");
strcpy(atom[50].symbol,"Sb");
atom[50].atomicnum=51;
atom[50].atomicwt=121.76;
atom[50].period=5;
strcpy(atom[50].group,"5A");

strcpy(atom[51].name,"TELLURIUM");
strcpy(atom[51].symbol,"Te");
atom[51].atomicnum=52;
atom[51].atomicwt=127.60;
atom[51].period=5;
strcpy(atom[51].group,"6A");

strcpy(atom[52].name,"IODINE");
strcpy(atom[52].symbol,"I");	
atom[52].atomicnum=53;
atom[52].atomicwt=126.90;
atom[52].period=5;
strcpy(atom[52].group,"7A");

strcpy(atom[53].name,"XENON");
strcpy(atom[53].symbol,"Xe");
atom[53].atomicnum=54;
atom[53].atomicwt=131.29;
atom[53].period=5;
strcpy(atom[53].group,"8A");

strcpy(atom[54].name,"CESIUM");
strcpy(atom[54].symbol,"Cs");
atom[54].atomicnum=55;
atom[54].atomicwt=132.906;
atom[54].period=6;
strcpy(atom[54].group,"1A");

strcpy(atom[55].name,"BARIUM");
strcpy(atom[55].symbol,"Ba");
atom[55].atomicnum=56;
atom[55].atomicwt=137.372;
atom[55].period=6;
strcpy(atom[55].group,"2A");

strcpy(atom[56].name,"LANTHANUM");
strcpy(atom[56].symbol,"La");
atom[56].atomicnum=57;
atom[56].atomicwt=138.906;
atom[56].period=6;
strcpy(atom[56].group,"3B");

strcpy(atom[57].name,"CERIUM");
strcpy(atom[57].symbol,"Ce");
atom[57].atomicnum=58;
atom[57].atomicwt=140.116;
atom[57].period=6;
strcpy(atom[57].group,"3B");

strcpy(atom[58].name,"PRASEODYMIUM");
strcpy(atom[58].symbol,"Pr");
atom[58].atomicnum=59;
atom[58].atomicwt=140.906;
atom[58].period=6;
strcpy(atom[58].group,"3B");

strcpy(atom[59].name,"NEODYMIUM");
strcpy(atom[59].symbol,"Nd");
atom[59].atomicnum=60;
atom[59].atomicwt=144.240;
atom[59].period=6;
strcpy(atom[59].group,"3B");

strcpy(atom[60].name,"PROMETHIUM");
strcpy(atom[60].symbol,"Pm");
atom[60].atomicnum=61;
atom[60].atomicwt=145.000;
atom[60].period=6;	
strcpy(atom[60].group,"3B");

strcpy(atom[61].name,"SAMARIUM");
strcpy(atom[61].symbol,"Sm");
atom[61].atomicnum=62;
atom[61].atomicwt=150.36;
atom[61].period=6;
strcpy(atom[61].group,"3B");

strcpy(atom[62].name,"EUROPIUM");
strcpy(atom[62].symbol,"Eu");
atom[62].atomicnum=63;
atom[62].atomicwt=151.96;
atom[62].period=6;
strcpy(atom[62].group,"3B");

strcpy(atom[63].name,"GADOLINIUM");
strcpy(atom[63].symbol,"Gd");
atom[63].atomicnum=64;
atom[63].atomicwt=157.25;
atom[63].period=6;
strcpy(atom[63].group,"3B");

strcpy(atom[64].name,"SAMARIUM");
strcpy(atom[64].symbol,"Sm");
atom[64].atomicnum=65;
atom[64].atomicwt=150.36;
atom[64].period=6;
strcpy(atom[64].group,"3B");

strcpy(atom[65].name,"DYSPROSIUM");
strcpy(atom[65].symbol,"Dy");
atom[65].atomicnum=66;
atom[65].atomicwt=162.50;
atom[65].period=6;
strcpy(atom[65].group,"3B");

strcpy(atom[66].name,"HOLMINM");
strcpy(atom[66].symbol,"Ho");
atom[66].atomicnum=67;
atom[66].atomicwt=164.93;
atom[66].period=6;
strcpy(atom[66].group,"3B");

strcpy(atom[67].name,"ERBIUM");
strcpy(atom[67].symbol,"Er");
atom[67].atomicnum=68;
atom[67].atomicwt=167.25;
atom[67].period=6;
strcpy(atom[67].group,"3B");

strcpy(atom[68].name,"THULIUM");
strcpy(atom[68].symbol,"Tm");
atom[68].atomicnum=69;
atom[68].atomicwt=168.93;
atom[68].period=6;	
strcpy(atom[68].group,"3B");

strcpy(atom[69].name,"YTTERBIUM");
strcpy(atom[69].symbol,"Yb");
atom[69].atomicnum=70;
atom[69].atomicwt=173.04;
atom[69].period=6;
strcpy(atom[69].group,"3B");

strcpy(atom[70].name,"LUTETIUM");
strcpy(atom[70].symbol,"Lu");
atom[70].atomicnum=71;
atom[70].atomicwt=174.96;
atom[70].period=6;
strcpy(atom[70].group,"3B");

strcpy(atom[71].name,"HAFNIUM");
strcpy(atom[71].symbol,"Hf");
atom[71].atomicnum=72;
atom[71].atomicwt=178.49;
atom[71].period=6;
strcpy(atom[71].group,"4B");

strcpy(atom[72].name,"TANTALUM");
strcpy(atom[72].symbol,"Ta");
atom[72].atomicnum=73;
atom[72].atomicwt=180.94;
atom[72].period=6;
strcpy(atom[72].group,"5B");

strcpy(atom[73].name,"TUNGSTEN");
strcpy(atom[73].symbol,"Lu");
atom[73].atomicnum=74;
atom[73].atomicwt=174.96;
atom[73].period=6;	
strcpy(atom[73].group,"6B");

strcpy(atom[74].name,"RHENIUM");
strcpy(atom[74].symbol,"Re");
atom[74].atomicnum=75;
atom[74].atomicwt=186.84;
atom[74].period=6;
strcpy(atom[74].group,"7B");

strcpy(atom[75].name,"OSMIUM");
strcpy(atom[75].symbol,"Os");
atom[75].atomicnum=76;
atom[75].atomicwt=190.23;
atom[75].period=6;	
strcpy(atom[75].group,"8B");

strcpy(atom[76].name,"IRIDIUM");
strcpy(atom[76].symbol,"Ir");
atom[76].atomicnum=77;
atom[76].atomicwt=192.21;
atom[76].period=6;	
strcpy(atom[76].group,"8B");

strcpy(atom[77].name,"PLATINUM");
strcpy(atom[77].symbol,"Pt");
atom[77].atomicnum=78;
atom[77].atomicwt=195.07;
atom[77].period=6;
strcpy(atom[77].group,"8B");

strcpy(atom[78].name,"GOLD");
strcpy(atom[78].symbol,"Au");
atom[78].atomicnum=79;
atom[78].atomicwt=196.96;
atom[78].period=6;
strcpy(atom[78].group,"1B");

strcpy(atom[79].name,"MERCURY");
strcpy(atom[79].symbol,"Hg");
atom[79].atomicnum=80;
atom[79].atomicwt=200.59;
atom[79].period=6;
strcpy(atom[79].group,"2B");

strcpy(atom[80].name,"THALLIUM");
strcpy(atom[80].symbol,"Tl");
atom[80].atomicnum=81;
atom[80].atomicwt=201.38;
atom[80].period=6;
strcpy(atom[80].group,"3A");

		
strcpy(atom[81].name,"LEAD");
strcpy(atom[81].symbol,"Pb");
atom[81].atomicnum=82;
atom[81].atomicwt=201.20;
atom[81].period=6;
strcpy(atom[81].group,"4A");

		
strcpy(atom[82].name,"BISMITH");
strcpy(atom[82].symbol,"Bi");
atom[82].atomicnum=83;
atom[82].atomicwt=208.98;
atom[82].period=6;		
strcpy(atom[82].group,"5A");


	
strcpy(atom[83].name,"POLONIUM");
strcpy(atom[83].symbol,"Po");
atom[83].atomicnum=84;
atom[83].atomicwt=209.00;
atom[83].period=6;		
strcpy(atom[83].group,"6A");



strcpy(atom[84].name,"Astatine");
strcpy(atom[84].symbol,"At");
atom[84].atomicnum=85;
atom[84].atomicwt=210.00;
atom[84].period=6;		
strcpy(atom[84].group,"7A");



	
strcpy(atom[85].name,"RADON");
strcpy(atom[85].symbol,"Rn");
atom[85].atomicnum=86;
atom[85].atomicwt=222.00;
atom[85].period=6;	
strcpy(atom[85].group,"8A");


	
strcpy(atom[86].name,"FRANCIUM");
strcpy(atom[86].symbol,"Fr");
atom[86].atomicnum=87;
atom[86].atomicwt=223.00;
atom[86].period=7;
strcpy(atom[86].group,"1A");

		
strcpy(atom[87].name,"RADIUM");
strcpy(atom[87].symbol,"Ra");
atom[87].atomicnum=88;
atom[87].atomicwt=226.00;
atom[87].period=7;
strcpy(atom[87].group,"2A");


	
strcpy(atom[88].name,"ACTINIUM");
strcpy(atom[88].symbol,"Ac");
atom[88].atomicnum=89;
atom[88].atomicwt=227.00;
atom[88].period=7;
strcpy(atom[88].group,"3B");


		
strcpy(atom[89].name,"THORIUM");
strcpy(atom[89].symbol,"Th");
atom[89].atomicnum=90;
atom[89].atomicwt=232.03;
atom[89].period=7;
strcpy(atom[89].group,"3B");



		
strcpy(atom[90].name,"PROTACTINIUM");
strcpy(atom[90].symbol,"Pa");
atom[90].atomicnum=91;
atom[90].atomicwt=231.03;
atom[90].period=7;
strcpy(atom[90].group,"3B");


		
strcpy(atom[91].name,"URANIUM");
strcpy(atom[91].symbol,"U");
atom[91].atomicnum=92;
atom[91].atomicwt=238.02;
atom[91].period=7;
strcpy(atom[91].group,"3B");


		
strcpy(atom[92].name,"NEPTUNIUM");
strcpy(atom[92].symbol,"Np");
atom[92].atomicnum=93;
atom[92].atomicwt=237.00;
atom[92].period=7;	
strcpy(atom[92].group,"3B");


	
strcpy(atom[93].name,"PLUTONIUM");
strcpy(atom[93].symbol,"Pu");
atom[93].atomicnum=94;
atom[93].atomicwt=244.00;
atom[93].period=7;
strcpy(atom[93].group,"3B");



		
strcpy(atom[94].name,"AMERICIUM");
strcpy(atom[94].symbol,"Am");
atom[94].atomicnum=95;
atom[94].atomicwt=243.00;
atom[94].period=7;
strcpy(atom[94].group,"3B");


		
strcpy(atom[95].name,"CURIUM");
strcpy(atom[95].symbol,"Cm");
atom[95].atomicnum=96;
atom[95].atomicwt=247.00;
atom[95].period=7;
strcpy(atom[95].group,"3B");


		
strcpy(atom[96].name,"BERKELIUM");
strcpy(atom[96].symbol,"Bk");
atom[96].atomicnum=97;
atom[96].atomicwt=247.00;
atom[96].period=7;
strcpy(atom[96].group,"3B");



		
strcpy(atom[97].name,"CALIFONIUM");
strcpy(atom[97].symbol,"Cf");
atom[97].atomicnum=98;
atom[97].atomicwt=251.00;
atom[97].period=7;	
strcpy(atom[97].group,"3B");



	
strcpy(atom[98].name,"EINSTEINIUM");
strcpy(atom[98].symbol,"Es");
atom[98].atomicnum=99;
atom[98].atomicwt=252.00;
atom[98].period=7;
strcpy(atom[98].group,"3B");



		
strcpy(atom[99].name,"FERMIUM");
strcpy(atom[99].symbol,"Fm");
atom[99].atomicnum=257.00;
atom[99].atomicwt=231.03;
atom[99].period=7;
strcpy(atom[99].group,"3B");


		
strcpy(atom[100].name,"MENDELEVIUM");
strcpy(atom[100].symbol,"Md");
atom[100].atomicnum=101;
atom[100].atomicwt=258.00;
atom[100].period=7;	
strcpy(atom[100].group,"3B");


	
strcpy(atom[101].name,"NOBELIUM");
strcpy(atom[101].symbol,"No");
atom[101].atomicnum=102;
atom[101].atomicwt=259.00;
atom[101].period=7;
strcpy(atom[101].group,"3B");


		
strcpy(atom[102].name,"LAWRENCIUM");
strcpy(atom[102].symbol,"Lr");
atom[102].atomicnum=103;
atom[102].atomicwt=262.00;
atom[102].period=7;	
strcpy(atom[102].group,"3B");

	
strcpy(atom[103].name,"RUTHERFORDIUM");
strcpy(atom[103].symbol,"Rf");
atom[103].atomicnum=104;
atom[103].atomicwt=261.00;
atom[103].period=7;	
strcpy(atom[103].group,"4B");


	
strcpy(atom[104].name,"DUBNIUM");
strcpy(atom[104].symbol,"Db");
atom[104].atomicnum=105;
atom[104].atomicwt=262.00;
atom[104].period=7;
strcpy(atom[104].group,"5B");


		
strcpy(atom[105].name,"SEABORGIUM");
strcpy(atom[105].symbol,"Sg");
atom[105].atomicnum=106;
atom[105].atomicwt=266.00;
atom[105].period=7;
strcpy(atom[105].group,"6B");

		
strcpy(atom[106].name,"BOHRIUM");
strcpy(atom[106].symbol,"Bh");
atom[106].atomicnum=107;
atom[106].atomicwt=264.00;
atom[106].period=7;
strcpy(atom[106].group,"7B");

	
strcpy(atom[107].name,"HASSSIUM");
strcpy(atom[107].symbol,"Hs");
atom[107].atomicnum=108;
atom[107].atomicwt=277.00;
atom[107].period=7;
strcpy(atom[107].group,"8B");
		
strcpy(atom[108].name,"Meinerium");
strcpy(atom[108].symbol,"Mt");
atom[108].atomicnum=109;
atom[108].atomicwt=268.00;
atom[108].period=7;	
strcpy(atom[108].group,"8B");


strcpy(atom[109].name,"Darmstadium");
strcpy(atom[108].symbol,"Ds");
atom[109].atomicnum=110;
atom[109].atomicwt=281.00;
atom[109].period=7;	
strcpy(atom[109].group,"8B");



strcpy(atom[110].name,"Roentgenium");
strcpy(atom[110].symbol,"Rg");
atom[110].atomicnum=111;
atom[110].atomicwt=281.00;
atom[110].period=7;	
strcpy(atom[110].group,"1B");


strcpy(atom[111].name,"Copernicium");
strcpy(atom[111].symbol,"Cn");
atom[111].atomicnum=112;
atom[111].atomicwt=285.00;
atom[111].period=7;	
strcpy(atom[111].group,"2B");

strcpy(atom[112].name,"Nihonium");
strcpy(atom[112].symbol,"Nh");
atom[112].atomicnum=113;
atom[112].atomicwt=286.00;
atom[112].period=7;	
strcpy(atom[112].group,"3A");

strcpy(atom[113].name,"Flerovium");
strcpy(atom[113].symbol,"FI");
atom[113].atomicnum=114;
atom[113].atomicwt=289.00;
atom[113].period=7;	
strcpy(atom[113].group,"4A");

strcpy(atom[114].name,"Moscovium");
strcpy(atom[114].symbol,"Mc");
atom[114].atomicnum=115;
atom[114].atomicwt=289.00;
atom[114].period=7;	
strcpy(atom[114].group,"5A");

strcpy(atom[115].name,"Livermorium");
strcpy(atom[115].symbol,"Lv");
atom[115].atomicnum=116;
atom[115].atomicwt=293.00;
atom[115].period=7;	
strcpy(atom[115].group,"6A");

strcpy(atom[116].name,"Tennessine");
strcpy(atom[116].symbol,"Ts");
atom[116].atomicnum=117;
atom[116].atomicwt=294.00;
atom[116].period=7;	
strcpy(atom[116].group,"7A");

strcpy(atom[117].name,"Oganesson");
strcpy(atom[117].symbol,"Og");
atom[117].atomicnum=118;
atom[117].atomicwt=294.00;
atom[117].period=7;	
strcpy(atom[117].group,"8A");
}
int i;

void search();

void newScreen() {
	printf("\t\t\t\t\t**************[PERIODIC TABLE]*************\n");
	printf("\t\t================ELiF NUR ASLiHAN CELEPOGLU TERM PROJECT OF PROGRAMMiNG LESSON================\n\n\n");
}

void exit() {
    printf("\t\t\t\t\t\t\tTHANK YOU:)))))))))))\n\n");
	
}


void info1() {

	char ele[20];
	printf("ENTER THE ELEMENT'S NAME =");
	scanf("%s",ele);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].name,ele)==0){
			printf("ELEMENT=%s\n",atom[i].name);
			printf("SYMBOL=%s\n",atom[i].symbol);
			printf("ATOMIC NUMBER=%d\n",atom[i].atomicnum);
			printf("ATOMIC WEIGHT=%f\n",atom[i].atomicwt);
			printf("ATOMIC PRIOD= %d\n",atom[i].period);
		    printf("ATOMIC GROUP= %s\n",atom[i].group);
		
			break;
		}
	}
	search();
}
void info2() {

	char sym[2];
	printf("ENTER THE ELEMENT'S SYMBOL=");
	scanf("%s",sym);
	for (i=0; i<118; i++) {
		if (strcmp(atom[i].symbol,sym)==0){
			printf("ELEMENT=%s\n",atom[i].name);
			printf("SYMBOL=%s\n",atom[i].symbol);
			printf("ATOMIC NUMBER=%d\n",atom[i].atomicnum);
			printf("ATOMIC WEIGHT=%f\n",atom[i].atomicwt);
			printf("ATOMIC PRIOD= %d\n",atom[i].period);
		    printf("ATOMIC GROUP= %s\n",atom[i].group);
		
			break;
		}
	}
	search();
}
void info3() {
	
	int atn;
	printf("ENTER THE ELEMENT'S ATOMIC NUMBER= ");
	scanf("%d",&atn);
	for (i=0; i<118; i++) {
		if (atom[i].atomicnum==atn){
			printf("ELEMENT=%s\n",atom[i].name);
			printf("SYMBOL= %s\n",atom[i].symbol);
			printf("ATOMIC NUMBER= %d\n",atom[i].atomicnum);
			printf("ATOMIC WEIGHT=%f\n",atom[i].atomicwt);
			printf("ATOMIC PRIOD= %d\n",atom[i].period);
		    printf("ATOMIC GROUP= %s\n",atom[i].group);
		
			break;
		}
	}
	search();
}
void info4() {
	
	float atwt;
	printf("ENTER THE ELEMENT'S ATOMIC WEIGHT=");
	scanf("%f",&atwt);
	for (i=0; i<118; i++) {
		if (atom[i].atomicwt==atwt){
			printf("ELEMENT= %s\n",atom[i].name);
			printf("SYMBOL= %s\n",atom[i].symbol);
			printf("ATOMIC NUMBER= %d\n",atom[i].atomicnum);
			printf("ATOMIC WEIGHT= %f\n",atom[i].atomicwt);
		    printf("ATOMIC PRIOD= %d\n",atom[i].period);
		    printf("ATOMIC GROUP= %s\n",atom[i].group);
			break;
		}
	}
	search();
}


void search() {
	
	printf("\t\t\t<SREACH BY>\n");
	printf("|1->ELEMENT      |\n");
	printf("--------------------\n");
	printf("|2->SYMBOL       |\n");
	printf("--------------------\n");
	printf("|3->ATOMIC NUMBER|\n");
	printf("--------------------\n");
	printf("|4->ATOMIC WEIGHT|\n");
	printf("--------------------\n");
	
	
	int choice2;
	printf("<YOUR CHOICE>");
	scanf("%d",&choice2);
	if (choice2==1){
		info1();
	} else if (choice2==2){
		info2();
	} else if (choice2==3){
		info3();
	} else if (choice2==4){
		info4();
	} 
	 else {
	   search();
	}
		
}
int main() {
	newScreen();
	printf("1-> ENTER\n");
	printf("--------------------\n");
	printf("2-> EXIT\n\n\n\n");
	printf("--------------------\n");
	int choice1;
	printf("<YOUR CHOICE> ");
	scanf("%d",&choice1);
	table();
	if (choice1==1){
		search();
	} else if (choice1==2){
		exit();
	} 
		
}



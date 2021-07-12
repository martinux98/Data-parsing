#include <stdio.h>
#include <stdint.h> 
#include <string.h>
int ch;



int main ()
{
	char string[300];
	char string1[300];
	char protocol[100];
	printf("Enter your protocol TCP/UDP: ");
    scanf("%s", protocol);
	printf("Enter your string: \n");
    scanf("%s", string1);
	printf("String is: %s\n",string1);
	memcpy(string, string1, 250);
    string[250] = '\0'; 
	
    int i;
	unsigned int bytearray[300];
    unsigned int array[300];
	for (i = 0; i < 80; i++) {
        sscanf(string + i*2, "%02x", &bytearray[i]);
	}
  
if(bytearray[8]==0x08 & (!strcmp(protocol,"TCP")) ){
	
    for (i = 0; i <8;i+=4) { 
        sscanf(string + 2*i, "%08X", &array[i]);} ;//Reading Preamble and AVL Data length
	for(i=8;i<9;i++){
		sscanf(string + 2*i, "%02X", &array[i]);}//Reading Codec ID
	for(i=9;i<10;i++){
		sscanf(string + 2*i, "%02X", &array[i]);}//Reading AVL Data count
	for(i=10; i<18;i+=4){
		sscanf(string + 2*i, "%08X", &array[i]);}// Reading Timestamp
	for(i=18;i<19;i++){
		sscanf(string + 2*i, "%02X", &array[i]);}//Reading Priority
	for(i=19; i<27; i+=4){
		sscanf(string + 2*i, "%08X", &array[i]);}//Reading Longitutude and Latidude
	for(i=27; i<31; i+=2){
		sscanf(string + 2*i, "%04X", &array[i]);}//Reading Longitutude and Angle
	for(i=31; i<32; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Satellites	
	for(i=32; i<34; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Speed
	for(i=34; i<35; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Event ID
	for(i=35; i<36; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Element count
	for(i=36; i<37; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading 1b Element count
	for(i=37; i<38; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=38; i<39; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Value
	for(i=39; i<40; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=40; i<41; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Value
	for(i=41; i<42; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=42; i<43; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Value
	for(i=43; i<44; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=44; i<45; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Value
	for(i=45; i<46; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=46; i<47; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Value
	for(i=47; i<48; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading 2b Element count
	for(i=48; i<49; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=49; i<51; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value
	for(i=51; i<52; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=52; i<54; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value	
	for(i=54; i<55; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=55; i<57; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value	
	for(i=57; i<58; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=58; i<60; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value
	for(i=60; i<61; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=61; i<63; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value	
	for(i=63; i<64; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading 4b Element count
	for(i=64; i<65; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=65; i<69; i+=4){
		sscanf(string + 2*i, "%08x", &array[i]);}//Reading Value
	for(i=69; i<70; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=70; i<74; i+=4){
		sscanf(string + 2*i, "%08x", &array[i]);}//Reading Value
	for(i=74; i<75; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading 8b Element count
	for(i=75; i<76; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading AVL Data count Element count
	for(i=76; i<80; i+=4){
		sscanf(string + 2*i, "%08x", &array[i]);}//Reading CRC	
		
		printf("This is TCP protocol\n");
		printf("\n");
		printf("    			Size		Value						Hex Value\n");
		printf("TCP AVL Data Packet     var\n");
		printf("Preamble                4   		%d     						%08X\n",array[0],array[0]);
		printf("AVL Data Length  	4		%d			    			%08X\n", array[4],array[4]);
		printf("Data                    var\n");
		printf("Codec ID            	1    		%d  	   					%02X\n", array[8],array[8]);
		printf("AVL Data Count 		1		%d			    			%02X\n", array[9],array[9]);
		printf("AVL Data                var\n");
		printf("Timestamp 		8			    					%08X%08X\n", array[10],array[14]);
		printf("Priority 		1		%d	    					%02X\n",array[18],array[18]);
		printf("GPS element		15\n");
		printf("Longitude 		4		%d	    					%08X\n",array[19],array[19]);
		printf("Latitude 		4		%d	    					%08X\n",array[23],array[23]);
		printf("Altitude 		2		%d	    					%04X\n",array[27],array[27]);
		printf("Angle 			2		%d	    					%04X\n",array[29],array[29]);
		printf("Satellites 		1		%d	    					%02X\n",array[31],array[31]);
		printf("Speed 			2		%d	    					%04X\n",array[32],array[32]);
		printf("I/O element        	var\n");
		printf("Event ID 		1		%d	    					%02X\n",array[34],array[34]);
		printf("Element count 		1		%d	    					%02X\n",array[35],array[35]);
		printf("1b Element count 	1		%d	    					%02X\n",array[36],array[36]);
		printf("ID 			1		%d	    					%02X\n",array[37],array[37]);
		printf("Value 			1		%d		    				%02X\n",array[38],array[38]);
		printf("ID 			1		%d	    					%02X\n",array[39],array[39]);
		printf("Value 			1		%d			    			%02X\n",array[40],array[40]);
		printf("ID 			1		%d	    					%02X\n",array[41],array[41]);
		printf("Value 			1		%d			    			%02X\n",array[42],array[42]);
		printf("ID 			1		%d	    					%02X\n",array[43],array[43]);
		printf("Value 			1		%d	    					%02X\n",array[44],array[44]);
		printf("ID 			1		%d	    					%02X\n",array[45],array[45]);
		printf("Value 			1		%d	    					%02X\n",array[46],array[46]);
		printf("2b Element count 	1		%d	    					%02X\n",array[47],array[47]);
		printf("ID 			1		%d	    					%02X\n",array[48],array[48]);
		printf("Value 			2		%d	    					%04X\n",array[49],array[49]);
		printf("ID 			1		%d	    					%02X\n",array[51],array[51]);
		printf("Value 			2		%d	    					%04X\n",array[52],array[52]);
		printf("ID 			1		%d	    					%02X\n",array[54],array[54]);
		printf("Value 			2		%d	    					%04X\n",array[55],array[55]);
		printf("ID 			1		%d	    					%02X\n",array[57],array[57]);
		printf("Value 			2		%d	    					%04X\n",array[58],array[58]);
		printf("ID 			1		%d	    					%02X\n",array[60],array[60]);
		printf("Value 			2		%d	    					%04X\n",array[61],array[61]);
		printf("4b Element count 	1		%d	    					%02X\n",array[63],array[63]);
		printf("ID 			1		%d	    					%02X\n",array[64],array[64]);
		printf("Value 			4		%d	    					%08X\n",array[65],array[65]);
		printf("ID 			1		%d	    					%02X\n",array[69],array[69]);
		printf("Value 			4		%d	    					%08X\n",array[70],array[70]);
		printf("8b Element count 	1		%d	    					%02X\n",array[74],array[74]);
		printf("AVL Data count 		1		%d	    					%02X\n",array[75],array[75]);
		printf("Crc 			4		%d	    					%08X\n",array[76],array[76]);
		
}
else if (bytearray[23]==0x08 & (!strcmp(protocol,"UDP"))) //codec8 ID is in 23 byte
{
	
	for (i = 0; i<4;i+=2) { 
        sscanf(string + 2*i, "%04x", &array[i]);} ;//Length and PAcket ID
	for(i=4;i<5;i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Type
	for(i=5;i<6;i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading AVL packet ID
	for(i=6; i<8;i+=2){
		sscanf(string + 2*i, "%04X", &array[i]);}// Reading IMEI length
	for(i=8;i<23;i+=4){
		sscanf(string + 2*i, "%08x", &array[i]);}//Reading Imei
	for(i=23;i<24;i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Codec ID
	for(i=24;i<25;i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading AVL Data Count
	for(i=25; i<33;i+=4){
		sscanf(string + 2*i, "%08X", &array[i]);}// Reading Timestamp
	for(i=33;i<34;i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Priority
	for(i=34; i<42; i+=4){
		sscanf(string + 2*i, "%08x", &array[i]);}//Reading Longitutude and Latidude
	for(i=42; i<46; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Altitude and Angle
	for(i=46; i<47; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Satellites	
	for(i=47; i<49; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Speed
	for(i=49; i<72; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading Event ID
	
	
	for(i=72; i<74; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value
	for(i=74; i<75; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=75; i<77; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value	
	for(i=77; i<78; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=78; i<80; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value	
	for(i=80; i<81; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=81; i<83; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value
	for(i=83; i<84; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=84; i<86; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value	
	for(i=86; i<87; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=87; i<89; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value
	for(i=89; i<90; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=90; i<92; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value
	for(i=92; i<93; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=93; i<95; i+=2){
		sscanf(string + 2*i, "%04x", &array[i]);}//Reading Value
	for(i=95; i<96; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading 4b Element count
	for(i=96; i<97; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=97; i<101; i+=4){
		sscanf(string + 2*i, "%08x", &array[i]);}//Reading Value
	for(i=101; i<102; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=102; i<106; i+=4){
		sscanf(string + 2*i, "%08x", &array[i]);}//Reading Value
	for(i=106; i<107; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading ID
	for(i=107; i<111; i+=4){
		sscanf(string + 2*i, "%08x", &array[i]);}//Reading Value
	for(i=111; i<112; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading 8b Element count
	for(i=112; i<113; i++){
		sscanf(string + 2*i, "%02x", &array[i]);}//Reading AVL Data count Element count
		
		printf("This is UDP protocol\n");
		printf("\n");
		printf("    			Size		Value						Hex Value\n");
		printf("UDP AVL Data Packet     var\n");
		printf("Length                	2   		%d     					%04X\n",array[0],array[0]);
		printf("Packet ID  		2		%d			    			%04X\n", array[2],array[2]);
		printf("Packet Type            	1    		%d  	   					%02X\n", array[4],array[4]);
		printf("AVL packet ID 		1		%d			    			%02X\n", array[5],array[5]);
		printf("Imei length           	2    		%d  	   					%04X\n", array[6],array[6]);
		printf("Imei 			15					    	%08X%08X%08X%08X\n", array[8],array[12],array[16],array[20]);
		printf("Data     		var\n");
		printf("Codec ID           	1    		%d  	   					%02X\n", array[23],array[23]);
		printf("AVL Data count 		1		%d			    			%02X\n", array[24],array[24]);
		printf("AVL Data     		var\n");
		printf("Timestamp 		8			    					%08X%08X\n", array[25],array[29]);
		printf("Priority 		1		%d	    					%02X\n",array[33],array[33]);
		printf("GPS element		15\n");
		printf("Longitude 		4		%d	    					%08X\n",array[34],array[34]);
		printf("Latitude 		4		%d	    					%08X\n",array[38],array[38]);
		printf("Altitude 		2		%d	    					%04X\n",array[42],array[42]);
		printf("Angle 			2		%d	    					%04X\n",array[44],array[44]);
		printf("Satellites 		1		%d	    					%02X\n",array[46],array[46]);
		printf("Speed 			2		%d	    					%04X\n",array[47],array[47]);
		printf("I/O element        	var\n");
		printf("Event ID 		1		%d	    					%02X\n",array[49],array[49]);
		printf("Element count 		1		%d	    					%02X\n",array[50],array[50]);
		printf("1b Element count 	1		%d	    					%02X\n",array[51],array[51]);
		printf("ID 			1		%d	    					%02X\n",array[52],array[52]);
		printf("Value 			1		%d		    				%02X\n",array[53],array[53]);
		printf("ID 			1		%d	    					%02X\n",array[54],array[54]);
		printf("Value 			1		%d			    			%02X\n",array[55],array[55]);
		printf("ID 			1		%d	    					%02X\n",array[56],array[56]);
		printf("Value 			1		%d			    			%02X\n",array[57],array[57]);
		printf("ID 			1		%d	    					%02X\n",array[58],array[58]);
		printf("Value 			1		%d	    					%02X\n",array[59],array[59]);
		printf("ID 			1		%d	    					%02X\n",array[60],array[60]);
		printf("Value 			1		%d	    					%02X\n",array[61],array[61]);
		printf("ID 			1		%d	    					%02X\n",array[62],array[62]);
		printf("Value 			1		%d	    					%02X\n",array[63],array[63]);
		printf("ID 			1		%d	    					%02X\n",array[64],array[64]);
		printf("Value 			1		%d	    					%02X\n",array[65],array[65]);
		printf("ID 			1		%d	    					%02X\n",array[66],array[66]);
		printf("Value 			1		%d	    					%02X\n",array[67],array[67]);
		printf("ID 			1		%d	    					%02X\n",array[68],array[68]);
		printf("Value 			1		%d	    					%02X\n",array[69],array[69]);
		printf("2b Element count 	1		%d	    					%02X\n",array[70],array[70]);
		printf("ID 			1		%d	    					%02X\n",array[71],array[71]);
		printf("Value 			2		%d	    					%04X\n",array[72],array[72]);
		printf("ID 			1		%d	    					%02X\n",array[74],array[74]);
		printf("Value 			2		%d	    					%04X\n",array[75],array[75]);
		printf("ID 			1		%d	    					%02X\n",array[77],array[77]);
		printf("Value 			2		%d	    					%04X\n",array[78],array[78]);
		printf("ID 			1		%d	    					%02X\n",array[80],array[80]);
		printf("Value 			2		%d	    					%04X\n",array[81],array[81]);
		printf("ID 			1		%d	    					%02X\n",array[83],array[83]);
		printf("Value 			2		%d	    					%04X\n",array[84],array[84]);
		printf("ID 			1		%d	    					%02X\n",array[86],array[86]);
		printf("Value 			2		%d	    					%04X\n",array[87],array[87]);
		printf("ID 			1		%d	    					%02X\n",array[89],array[89]);
		printf("Value 			2		%d	    					%04X\n",array[90],array[90]);
		printf("ID 			1		%d	    					%02X\n",array[92],array[92]);
		printf("Value 			2		%d	    					%04X\n",array[93],array[93]);
		printf("4b Element count 	1		%d	    					%02X\n",array[95],array[95]);
		printf("ID 			1		%d	    					%02X\n",array[96],array[96]);
		printf("Value 			4		%d	    					%08X\n",array[97],array[97]);
		printf("ID 			1		%d	    					%02X\n",array[101],array[101]);
		printf("Value 			4		%d	    					%08X\n",array[102],array[102]);
		printf("ID 			1		%d	    					%02X\n",array[106],array[106]);
		printf("Value 			4		%d	    					%08X\n",array[107],array[107]);
		printf("8b Element count 	1		%d	    					%02X\n",array[111],array[111]);
		printf("AVL Data count 		1		%d	    					%02X\n",array[112],array[112]);
	}
else {
	printf("Corrupted data inserted");
}
//struct TCP_AVL_Data_Packet Preamble;
//Preamble.HEX=bytearray[13];
//printf( "Preamble : %02X\n", value);
while ((ch=getchar()) != 'ENTER') /* skirta isejimui is programo */
putchar (ch);
    return 0;
	}
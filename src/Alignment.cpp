//============================================================================
// Name        : Alignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Configuration.h"
#include "Blast.h"
#include "HHSearch64.h"
#include <stdio.h>
#include <assert.h>
#define MAXPATHLEN 500
using namespace std;
//void AAG_genSeqAlignPSA_PSIB();
void testBlast();
void testHHSearch64();

int CheckFileExist(const char *);
int main() {
	//before the next step, this command is a must, you need to go to linux shell to
	//run the following command:
			//export HHLIB=<install_dir>/lib/hh
			//export HHLIB=~lihongb/Tools/hhsearch64/lib/hh

	testBlast();
	testHHSearch64();
	return 0;
}

int CheckFileExist(const char *file) {
	FILE *fp = fopen(file, "r");
	if (fp) {
		fclose(fp);
		return 1;
	} else
		return -1;
}
void testBlast() {
	Configuration configuration("T0837",
			"SDTRKAIDTISNLLKIKPIYIESMLQEMGPRQTQMFIRSTSNGSAEEVRKAAYL",
			"T0837.seq", "~cf797/test/", "~lihongb/Tools/BLAST2_2_21/bin/",
			"~lihongb/DATABASE/nr/", "nr.01", "~cf797/test/experimentPath/");
	fprintf(stderr, "Running blastpgp against NR ...\n\n");

	Blast blast(configuration, 5000, 5000, 3, 0.001, 10);
	blast.executeBlastCommand(5000, 5000, 3, 0.001);

	Configuration configuration2("T0837",
			"SDTRKAIDTISNLLKIKPIYIESMLQEMGPRQTQMFIRSTSNGSAEEVRKAAYL",
			"T0837.seq", "~cf797/test/", "~lihongb/Tools/BLAST2_2_21/bin/",
			"~lihongb/DATABASE/LocalDB/", "MUFOLD_07222012_AA",
			"~cf797/test/experimentPath/");
	Blast blast3(configuration2, 500, 250, 1, 0.002, 11000);
	blast3.executeBlastCommand(11000);

}

void testHHSearch64() {

	Configuration configuration("T0837",
			"SDTRKAIDTISNLLKIKPIYIESMLQEMGPRQTQMFIRSTSNGSAEEVRKAAYL",
			"T0837.seq", "~cf797/test/", "~lihongb/Tools/hhsearch64/bin/",
			"~lihongb/DATABASE/HMMDB/", "MUFOLD_10252012_",
			"~cf797/test/experimentPath/");
	fprintf(stderr, "Running HHSearch64 ...\n\n");


	HHSearch64 hhsearch64(configuration,50);


	hhsearch64.executeAlignhits(configuration);
	hhsearch64.executeHHMake(configuration);
	hhsearch64.executeHHSearch(configuration);
	hhsearch64.executeHHSearch(configuration,50);

}

/*
 * HHSearch64.cpp
 *
 *  Created on: Mar 1, 2015
 *      Author: Chao
 */

#include "HHSearch64.h"

HHSearch64::HHSearch64(Configuration _configuration, int _b) {
	configuration = _configuration;
	b = _b;

}

void HHSearch64::executeAlignhits(Configuration configuration) {
	printf("execute alignhits command:\n");
	char cmd[MAXSTRLEN];
	sprintf(cmd, "perl %salignhits.pl %squery.blaNR -a3m %squery.a3m",
			configuration.getAlignmentToolLocation(),
			configuration.getExperimentLocation(),
			configuration.getExperimentLocation());
	//printf("%s\n",cmd);
	system(cmd);

}

void HHSearch64::executeHHMake(Configuration configuration) {
	printf("execute HHMake command:\n");
	char cmd[MAXSTRLEN];
	sprintf(cmd, "%shhmake -i %squery.a3m -name query -o %squery.hhm",
			configuration.getAlignmentToolLocation(),
			configuration.getExperimentLocation(),
			configuration.getExperimentLocation());
	//("%s\n",cmd);
	system(cmd);
}

void HHSearch64::executeHHSearch(Configuration configuration) {
	printf("execute HHSearch command:\n");
	char cmd[MAXSTRLEN];
	sprintf(cmd, "%shhsearch -i %squery.hhm -d %scal.hhm -cal -o %squery.hhrNR",
			configuration.getAlignmentToolLocation(),
			configuration.getExperimentLocation(),
			configuration.getDatabaseLocation(),
			configuration.getExperimentLocation());
	//printf("%s\n",cmd);
	system(cmd);
}


void HHSearch64::executeHHSearch(Configuration configuration, int b) {
	printf("execute HHSearch command:\n");
	char cmd[MAXSTRLEN];
	sprintf(cmd,
			"%shhsearch -i %squery.hhm -o %squery.hhr -d %s%sHHM.hhm -b %d -glob",
			configuration.getAlignmentToolLocation(),
			configuration.getExperimentLocation(),
			configuration.getExperimentLocation(),
			configuration.getDatabaseLocation(),
			configuration.getDatabaseName(), b);
	//printf("%s\n",cmd);
	system(cmd);
}

HHSearch64::~HHSearch64() {
	// TODO Auto-generated destructor stub
}


/*
 * Configuration.cpp
 *
 *  Created on: Feb 28, 2015
 *      Author: Chao
 */

#include "Configuration.h"
Configuration::Configuration() {

}
Configuration::Configuration(char* _proteinName, char* _aminoSeq,
		char* _queryFileName, char* _queryFileLocation,
		char* _alignmentToolLocation, char* _databaseLocation,
		char* _databaseName, char* _experimentLocation) {
	proteinName = _proteinName;
	aminoSeq = _aminoSeq;
	queryFileName = _queryFileName;
	queryFileLocation = _queryFileLocation;
	alignmentToolLocation = _alignmentToolLocation;
	databaseLocation = _databaseLocation;
	databaseName = _databaseName;
	experimentLocation = _experimentLocation;

}

char * Configuration::getDatabaseName() {
	return databaseName;
}

void Configuration::setDatabaseName(char * databaseName) {
	this->databaseName = databaseName;
}
char * Configuration::getAlignmentToolLocation() {
	return alignmentToolLocation;
}

void Configuration::setAlignmentToolLocation(char * alignmentToolLocation) {
	this->alignmentToolLocation = alignmentToolLocation;
}

char * Configuration::getAminoSeq() {
	return aminoSeq;
}

void Configuration::setAminoSeq(char * aminoSeq) {
	this->aminoSeq = aminoSeq;
}

char * Configuration::getDatabaseLocation() {
	return databaseLocation;
}

void Configuration::setDatabaseLocation(char * databaseLocation) {
	this->databaseLocation = databaseLocation;
}

char * Configuration::getExperimentLocation() {
	return experimentLocation;
}

void Configuration::setExperimentLocation(char * experimentLocation) {
	this->experimentLocation = experimentLocation;
}

char * Configuration::getProteinName() {
	return proteinName;
}

void Configuration::setProteinName(char * proteinName) {
	this->proteinName = proteinName;
}

char * Configuration::getQueryFileLocation() {
	return queryFileLocation;
}

void Configuration::setQueryFileLocation(char * queryFileLocation) {
	this->queryFileLocation = queryFileLocation;
}

char * Configuration::getQueryFileName() {
	return queryFileName;
}

void Configuration::setQueryFileName(char * queryFileName) {
	this->queryFileName = queryFileName;
}
void Configuration::toString() {
	cout << proteinName << " " << aminoSeq << " " << queryFileName << " "
			<< queryFileLocation << " " << alignmentToolLocation << " "
			<< databaseLocation << " " << databaseName <<
			" " << experimentLocation << endl;
}

Configuration::~Configuration() {
	// TODO Auto-generated destructor stub
}


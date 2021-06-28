#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

void storage(int a) {
	char words[1][1][30] = { "acrylonitrilebutadienestyrene" };
	char words[1][2][30] = { "antiestablishmentarianism" };
	char words[1][3][30] = { "alkylbenzenesulfonate" };
	char words[1][4][30] = { "arenariamelanocephala" };
	char words[1][5][30] = { "abetalipoproteinemia" };
	char words[1][6][30] = { "adrenocorticotrophic" };
	char words[1][7][30] = { "adrenocorticotrophin" };
	char words[1][8][30] = { "antiestablishmentism" };
	char words[1][9][30] = { "adrenocorticotropic" };
	char words[1][10][30] = { "adrenocorticotropin" };
	char words[1][11][30] = { "auriculoventricular" };
	char words[1][12][30] = { "adenocarcinomatous" };
	char words[1][13][30] = { "agammaglobulinemia" };
	char words[1][14][30] = { "anthropocentricity" };
	char words[1][15][30] = { "anticholinesterase" };
	char words[1][16][30] = { "antiferromagnetism" };
	char words[1][17][30] = { "arteriolosclerosis" };
	char words[1][18][30] = { "alphaadrenoceptor" };
	char words[1][19][30] = { "anachronistically" };
	char words[1][20][30] = { "antiauthoritarian" };
	char words[1][21][30] = { "antiferromagnetic" };
	char words[1][22][30] = { "australopithecine" };
	char words[2][1][30] = { "buckminsterfullerene" };
	char words[2][2][30] = { "ballistocardiograph" };
	char words[2][3][30] = { "bicyclebuiltfortwo" };
	char words[2][4][30] = { "ballistocardiogram" };
	char words[2][5][30] = { "bosniaherzegovina" };
	char words[2][6][30] = { "bacillariophyceae" };
	char words[2][7][30] = { "beggarmyneighbour" };
	char words[2][8][30] = { "brokenheartedness" };
	char words[2][9][30] = { "branchiobdellidae" };
	char words[2][10][30] = { "batrachomyomachia" };
	char words[2][11][30] = { "beggarmyneighbor" };
	char words[2][12][30] = { "blaxploitation" };
	char words[2][13][30] = { "breathlessness" };
	printf("%s", words[a][2]);

}

void dictory(char str) {
	switch (str) {
	case 'a':
		storage(1);
	}
}

int main() {
	char str1;
	dictory(str1);
	
}
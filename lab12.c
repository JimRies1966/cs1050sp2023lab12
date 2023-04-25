/*****************************************************************************
 * Starter Code for Lab 12
 * Spring 2023
 * by Jim Ries
 *****************************************************************************/

// Include files - do you need others?
#include <stdio.h>
#include "fight.h"

// Main
int main(int argc, char * argv[])
{
	// Uncomment the following line if you want random (different every time) fights
	//SetSeed(0);


	// *********************************************************************************
	// Remove or comment out the following 3 lines for your real program
	// These lines just show a sample fight without reading any data form the file
	// This is only for testing
	Combatant JimR={"JimR",21,900,10,"5d6+5","5d12+5"};
    Combatant Lar={"Dr. Lawrence D. Ries",5,100,5,"1d6","N/A"};
	Fight(JimR,Lar);
	// *********************************************************************************


	// If you use fscanf() to read data from the file, this formate string might be helpful:
	// " %[^,], %d, %d, %d, %[^,], %s"
}

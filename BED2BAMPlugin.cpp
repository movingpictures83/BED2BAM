#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "BED2BAMPlugin.h"

void BED2BAMPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void BED2BAMPlugin::run() {}

void BED2BAMPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "bedToBam -i";
myCommand += " ";
addRequiredParameterNoFlag("bedfile");
addRequiredParameterNoFlag("genome");
myCommand += " >& "+outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<BED2BAMPlugin> BED2BAMPluginProxy = PluginProxy<BED2BAMPlugin>("BED2BAM", PluginManager::getInstance());

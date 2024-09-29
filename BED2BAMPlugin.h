#ifndef BED2BAMPLUGIN_H
#define BED2BAMPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class BED2BAMPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BED2BAM";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif

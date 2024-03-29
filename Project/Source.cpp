#include "IOFile.h"
#include "Console.h"


int main(int argc, char const* argv[])
{
    if (argc == 1) {
        Console cS;
        cS.run();
    }
    else if (argc == 4){
        bool modeQInt = true;
        
        if (strcmp(argv[3], "1") > 0) {
            modeQInt = false;
        }

        IOFile f(argv[1], modeQInt);

        f.writeResults(argv[2]);
    }
    else {
        cout << "ERROR: main(): invalid input" << endl;
    }

	return 0;
}

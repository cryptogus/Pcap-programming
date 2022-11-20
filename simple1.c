// This is terribly simple. There are two techniques for setting the device that we wish to sniff on.
// The first is that we can simply have the user tell us. Consider the following program:


#include <stdio.h>
#include <pcap.h>

int main(int argc, char* argv[]){
    char *dev = argv[1];

    printf("Device: %s\n", dev);
    return 0;
}
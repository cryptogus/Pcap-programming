// The user specifies the device by passing the name of it as the first argument to the program.
//Now the string dev holds the name of the interface that we will sniff on in a format that pcap can understand (assuming, of course, the user gave us a real interface).
// The other technique is equally simple. Look at this program:

#include <stdio.h>
#include <pcap.h>

int main(int argc, char *argv[]){
    char* dev = argv[1];
    char errbuf[PCAP_ERRBUF_SIZE];
    
	pcap_t* pcap = pcap_open_live(dev, BUFSIZ, 1, 1000, errbuf);
	if (pcap == NULL) {
		fprintf(stderr, "pcap_open_live(%s) return null - %s\n", dev, errbuf);
		return -1;
	}

    if (dev == NULL){
        fprintf(stderr, "Couldn't find defalult device: %s\n",errbuf);
        return 2;
    }

    printf("Device: %s\n",dev);
    return 0;
}
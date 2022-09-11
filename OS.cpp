#include<bits/stdc++.h>
using namespace std;

void interviewQuestions() {
	//A process control block(PCB) is a data structure used by computer operating systems to store
	// all the informations about the process.
	//thread has 3 states- runnning, ready and blocked

	//mutex vs binary semaphore - mutex is different than a semaphore as it is a locking mechanism while
	// a semaphore is a signalling mechanism.
	//prcess - koi bada task perform krna  aur thread - koi chota kam
	//processes - are basically the programs that are dispatched from the ready state and are scheduled in
	// CPU for execution.
	//Thread is the segment of a process which means a process can have multiple threads and these multiple
	// threads are contained withina  process.
	//multitasking environment(dual/octa core) - process is divided into multiple threads to run parallely to increase efficiency

	//monolithic vs microkernal - microkernal runs user and kernal services in differnent address spaces
	//on he other hand, the monolithic kernal and user services in the same address plane.
	//in microkernal , only essential processes like IPC, memory management, and scheduling takes place in kernal space

	//a system call is a way for a user program to interface with the operating system.The program requests
	// seveeral services and the OS responds by invoking a series of systemcalls to satisfy the request
	// likre fork(), read(), write(), open(), sleep().
	//demand paging - sif wh pages ko laao from seconday memeory jidka use hai abhi yaki kam ho skte uska pehe

	//Virtua; Memory - storage allocation scheme in which secondary memory can be addressed as through
	//it were part of the main memory
	// chmod command - used to change the process permissions and the special mode of flag of file system objects

	// Paging  - program is divided into fixed/mound size pages
	// segmentation - program divided into variable size sections
	//preemptive - koi process ready se running me ja skta hai & vice veras , VS non -preemptive - koi process ready se running me ja skta hai lekin vice veras nhi hoga

	//Deadlock - situation where a set of processes are blocked because each process is holding a
	// resource and waiting for another resource ehich si acquired by some other process
	//multiprogramming = multiple programs execute at a same time on a simgle device VS
	// multitasking - a single resource is used to processs multiple tasking

	//Spatial locality - all those instructions that are stored nearby to reacently executed instruvtions
	// have high chance of execution.
	//Temporal locality - instructions qhich are recently executed have high chances of execution gain

	//malware - malicious software used as single tern to refer to virus,
	//spy ware, worn,etc. it is designed to damage stand-alone computer or
	//a netwrked PC. VIRUS is a program written  to enter to our computer & damage
	// our files/data. Virus might corrupt or delete data on computer
	// W32.sfc!mod
	// Spyware is type of program that is installed with or withour our permission
	// on our personal computers to collect info. about usersr, their computer
	// or browsing habit tracks
	// Trojan horse is not virus, it is destructive program that looks as a genuine app.
	// Unlike viruses, trojan horses do not replicate themselves bit they can be just as destructive

	// Worms are malicious programs that make copies of themselves again and again on the locall drives,
	// network shares, etc. The onnly purpose of worn is to reproduce itsl=elf again and agin. it soesn;rt harn any data/file on computer
}

void pagingAndSegmentation() {
// 	Paging and Segmentation are the non-contiguous memory allocation techniques.
// • In paging the process gets divided into equal size partitions called as pages.
// • Segmentation divides the process into unequal size partitions called as segments
// a program which is in execution is called processs, is divided into 4types - stack(contains temp data i.e., method/function parameter
	// return addresss and local variables), heap(dynamically allocated memory to process  in runtime),
	//  text(instructions in program code), data(section contains global and static variables).
}

void systemCall() {
	//in linux OS, file related - open(), read(), write(), close()
	// devide related - reaad, write
	// system information - for getting the metadata of files
	// fork() -
}

void types() {
	//
	//batch, multiprogramming, multiTasking, realTimeOS, distributed, clustered, embedded
	//batchOS - used by NASA at 1960, in punchCards
	//multiprogramming - ram ke ander zada se zada processs ko lekr aayenge, matlab agr processs p1 me 4 process horha hai aur p2 me 7 process krna hai toh RAM pehle woh p1 ke saare process ko krega then p2 pe jayega chahe time kitna v lag jae
	// multiTasking - RAM pehle se decide kar lega ki main sirf 3 process run karunga chale tasks/processes ke under kitna hi kyu na quantity me work ho, last processses/task tak itearate krega aur sirf 3 hi work/processs krega uske baad jab
	// saare processses khtm ho jayenge then 4th process agr ho kisi me from starting then usko krega // benefit hua ki time-response (responsiveness) kam lga aur bahut jaldi saara tasks/processes cover ho gya

	//realTimeOS - delay nhi hoga, time constraint rahega, LIVE chalega as sort of xD.
	// hard -
	// soft -

}

void intro() {
	//OS is a system software has basic functionality that it works as an interface between user and the hardware
	//windows acquires the market with 95% because of CONVENIENCE
	// USES - resource anagement, process management(CPU scheduling), storage manaagement (hard-drive), memory management happens in RAM
	//ek process ka kam dusre process ke data ko use na kar ske isliye OS ka major role hota hai
	// when we use an application, then the OS comes into the role and be like a mediator b/w application and hardware.
	// konssa application kitna system requirements lega ye btata hai OS, aur jaise GTA 5 ke liye graphic card aur 2 GB ram chahiye woh  bhi
	// OS hi define karta hai but we can play GTA 5 in normal laptop also by rooting the system/phone matlab system requirements ko change kar dena OS ke internal programs me
	//hardware - CPU, I/O, RAM. OS works through system call
}



int main() {
	intro();
	types();
	systemCall();
	pagingAndSegmentation();
	basicScheduling();
	processSynchronization();
	deadlocks_Threads(); //banker's algorithms
	memoryManagement(); //pageReplacementScheduling
	diskScheduling();
	unixCommands();
	fileManagement_Security();
	interviewQuestions();

	vector<int>v1 = {1, 2, 4};
	vector<int>v2 = {5, 2, 7};
	vector<int>v3 = ;
	for (auto i : v3) cout << i << " ";
	return 0;
} //end of the main function xD
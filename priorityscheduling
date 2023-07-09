#include&lt;stdio.h&gt;
// structure representing a structure
struct priority_scheduling {

// name of the process
char process_name;

// time required for execution
int burst_time;

// waiting time of a process
int waiting_time;

// total time of execution
int turn_around_time;

// priority of the process
int priority;
};

int main() {

// total number of processes
int number_of_process;

// total waiting and turnaround time
int total = 0;

// temporary structure for swapping
struct priority_scheduling temp_process;

// ASCII numbers are used to represent the name of the process
int ASCII_number = 65;

// swapping position
int position;

// average waiting time of the process
float average_waiting_time;

// average turnaround time of the process
float average_turnaround_time;

printf(&quot;Enter the total number of Processes: &quot;);
// get the total number of the process as input
scanf(&quot;%d&quot;, &amp; number_of_process);

// initializing the structure array
struct priority_scheduling process[number_of_process];

printf(&quot;\nPlease Enter the Burst Time and Priority of each process:\n&quot;);

// get burst time and priority of all process
for (int i = 0; i &lt; number_of_process; i++) {

// assign names consecutively using ASCII number
process[i].process_name = (char) ASCII_number;

printf(&quot;\nEnter the details of the process %c \n&quot;, process[i].process_name);
printf(&quot;Enter the burst time: &quot;);
scanf(&quot;%d&quot;, &amp; process[i].burst_time);

printf(&quot;Enter the priority: &quot;);
scanf(&quot;%d&quot;, &amp; process[i].priority);

// increment the ASCII number to get the next alphabet
ASCII_number++;

}

// swap process according to high priority
for (int i = 0; i &lt; number_of_process; i++) {

position = i;

for (int j = i + 1; j &lt; number_of_process; j++) {

// check if priority is higher for swapping

if (process[j].priority &gt; process[position].priority)
position = j;
}
// swapping of lower priority process with the higher priority process
temp_process = process[i];
process[i] = process[position];
process[position] = temp_process;
}
// First process will not have to wait and hence has a waiting time of 0
process[0].waiting_time = 0;

for (int i = 1; i &lt; number_of_process; i++) {
process[i].waiting_time = 0;
for (int j = 0; j &lt; i; j++) {
// calculate waiting time
process[i].waiting_time += process[j].burst_time;
}

// calculate total waiting time
total += process[i].waiting_time;
}

// calculate average waiting time
average_waiting_time = (float) total / (float) number_of_process;

// assigning total as 0 for next calculations
total = 0;

printf(&quot;\n\nProcess_name \t Burst Time \t Waiting Time \t Turnaround Time\n&quot;);
printf(&quot;------------------------------------------------------------\n&quot;);

for (int i = 0; i &lt; number_of_process; i++) {

// calculating the turnaround time of the processes
process[i].turn_around_time = process[i].burst_time + process[i].waiting_time;

// calculating the total turnaround time.
total += process[i].turn_around_time;

// printing all the values
printf(&quot;\t %c \t\t %d \t\t %d \t\t %d&quot;, process[i].process_name, process[i].burst_time,
process[i].waiting_time, process[i].turn_around_time);
printf(&quot;\n-----------------------------------------------------------\n&quot;);
}

// calculating the average turn_around time
average_turnaround_time = (float) total / (float) number_of_process;

// average waiting time
printf(&quot;\n\n Average Waiting Time : %f&quot;, average_waiting_time);

// average turnaround time
printf(&quot;\n Average Turnaround Time: %f\n&quot;, average_turnaround_time);

return 0;

}

Identify common chip to chip communication protocols.

What chips are you familiar with?

What framework, HALs or SDKs have you used?

Sorting questions

What is DMA, when should you use it?

What is a vector interrupt controller?

Have you used an RTOS? If so which one?

When should you use an RTOS

Questions about Mutex's and Semaphors.

Have you used embedded Linux?

Volatile data/variables and what they are used for?

You have a system micro controller generating data at say 10 KB/s and you want to send it to another system. How would you accomplish this? What if it were generating 1 MB/s?

How do you debug your systems most often? Printf style coming out a UART? Vendor specific debug ecosystem (like Segger's RTT/Sysview which I am very fond of)? Virtual COM port over USB? What are it's limitations?

How do you handle if you have a decent number of tasks to run on the MCU at specific intervals? Have you heard of an RTOS, why have or haven't you used it?

Here is some code. How many instructions should this take on a Cortex-M with a FPU (3 instructions? 100 instructions? 10,000 instructions?) assuming compiling with "-O3"?

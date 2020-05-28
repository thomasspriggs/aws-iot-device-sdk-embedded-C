MQTT example
============

MQTT Disconnect proof is an example of code that makes heavy
use of linked lists.  To run the example

* cd to cbmc/proofs and run the python script ./prepare.py
    * This will prepare the source tree for proof by
	* applying some patches in cbmc/patches and
	* generating some cbmc-batch.yaml files that drive the proofs in
      continuous integration.
* cd to cbmc/proofs/IotMqtt_Disconnect and run make cbmc
    * This will
	* run cmake on the top-level MQTT project,
	* build the goto binary
	* run cbmc on the binary with --verbosity 10 --flush
* The result will be that cbmc will get through symbolic execution
  after generating some large formula, and then sit at
  "Post-processing," consume 128G of memory, and print "SAT checker
  ran out of memory" but without printing any of the usual statistics
  "starting solver with X variables and Y clauses."

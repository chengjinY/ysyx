VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
VERILATOR_FLAGS = -cc --exe -Wall --trace --coverage
VERILATOR_INPUT = csrc/main.cpp vsrc/top.v


all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	
	@echo
	@echo "========== Verilator Tracing =========="

	@echo
	@echo "---------- VERILATE ----------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

	@echo
	@echo "---------- BUILD ----------"
	$(MAKE) -j -C obj_dir -f Vtop.mk

	@echo
	@echo "---------- RUN ----------"
	@rm -rf logs
	@mkdir -p logs
	obj_dir/Vtop +trace

	@echo
	@echo "---------- DONE ----------"

clean:
	rm -rf logs
	rm -rf obj_dir

include ../Makefile

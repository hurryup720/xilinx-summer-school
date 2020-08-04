onbreak {quit -f}
onerror {quit -f}

vsim -voptargs="+acc" -t 1ps -L xbip_utils_v3_0_8 -L axi_utils_v2_0_4 -L xbip_pipe_v3_0_4 -L xbip_bram18k_v3_0_4 -L mult_gen_v12_0_13 -L xbip_dsp48_wrapper_v3_0_4 -L xbip_dsp48_addsub_v3_0_4 -L xbip_dsp48_multadd_v3_0_4 -L dds_compiler_v6_0_15 -L xil_defaultlib -L secureip -lib xil_defaultlib xil_defaultlib.dds_compiler_1

do {wave.do}

view wave
view structure
view signals

do {dds_compiler_1.udo}

run -all

quit -force

// define LOBS signal
    `define LOBS_CLK `HIER_SOC_MAIN.u_lobs.ELACLK
    `define LOBS_RUN `HIER_SOC_MAIN.u_lobs.u_compare_signal.ela_run_term
    `define LOBS_RSTN `HIER_SOC_MAIN.u_lobs.ela_resetn
    `define TRIGGER_TB_CONNECT_LOBS_OPT0 TRIGGER_TB_CONNECT_DRAM_OPT3
    `define TRIGGER_TB_DISCONNECT_LOBS_OPT0 TRIGGER_TB_DISCONNECT_DRAM_OPT3
    
    reg  [127:0] DBUS0;
    // DBUS [0] = 0;
    reg  [127:0] DBUS1;
    // DBUS [1] = `NUM_SIGNAL_GRP{1'b1};
    reg lobs_parity ;

    always @(posedge `LOBS_CLK or negedge `LOBS_RSTN ) begin
            if (`LOBS_RSTN == 0 ) begin
                DBUS0 = 0;
				DBUS1 = ~0;//{127(1'b1)};
            end
            else if   (`LOBS_RUN == 1) begin
                DBUS0 <= DBUS0 + 1'b1;
                DBUS1 <= DBUS1 - 1'b1;
            end
                 
    end
logic active_lobs_opt0 ;
always begin
    `HIER_TB_CVC_SOC.cvc_trigger_get(`TRIGGER_TB_CONNECT_DRAM_OPT4);
    active_lobs_opt0 = 1'b1;
    `HIER_TB_CVC_SOC.cvc_trigger_get(`TRIGGER_TB_DISCONNECT_DRAM_OPT4);
    active_lobs_opt0 = 1'b0;
end
always @(active_lobs_opt0) begin
    if ( active_lobs_opt0 == 1'b1) begin
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP0 = DBUS0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP1 = DBUS1;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP2 = DBUS0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP3 = DBUS1;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP4 = DBUS0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP5 = DBUS1;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP6 = DBUS0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP7 = DBUS1;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP8 = DBUS0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP9 = DBUS1;
    end
	else begin
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP0[127:11] = 0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP1[127:11] = 0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP2[127:11] = 0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP3[127:11] = 0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP4[127:11] = 0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP5[127:11] = 0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP6[127:11] = 0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP7[127:11] = 0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP8[127:11] = 0;
    force `HIER_SOC_MAIN.u_lobs.SIGNALGRP9[127:11] = 0;
	end
end

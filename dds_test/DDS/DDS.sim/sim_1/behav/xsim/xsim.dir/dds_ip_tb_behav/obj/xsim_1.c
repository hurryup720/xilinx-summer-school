/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_1284(char*, char *);
extern void execute_1285(char*, char *);
extern void execute_1290(char*, char *);
extern void execute_151(char*, char *);
extern void execute_221(char*, char *);
extern void execute_1246(char*, char *);
extern void execute_1247(char*, char *);
extern void execute_1255(char*, char *);
extern void execute_1268(char*, char *);
extern void execute_1269(char*, char *);
extern void execute_223(char*, char *);
extern void execute_228(char*, char *);
extern void execute_237(char*, char *);
extern void execute_232(char*, char *);
extern void execute_1253(char*, char *);
extern void execute_1250(char*, char *);
extern void execute_1251(char*, char *);
extern void execute_1259(char*, char *);
extern void execute_1260(char*, char *);
extern void execute_1261(char*, char *);
extern void execute_1265(char*, char *);
extern void execute_1266(char*, char *);
extern void execute_1267(char*, char *);
extern void execute_169(char*, char *);
extern void execute_170(char*, char *);
extern void execute_186(char*, char *);
extern void execute_160(char*, char *);
extern void execute_166(char*, char *);
extern void execute_167(char*, char *);
extern void execute_164(char*, char *);
extern void execute_172(char*, char *);
extern void execute_174(char*, char *);
extern void execute_176(char*, char *);
extern void execute_178(char*, char *);
extern void execute_180(char*, char *);
extern void execute_182(char*, char *);
extern void execute_184(char*, char *);
extern void execute_246(char*, char *);
extern void execute_1239(char*, char *);
extern void execute_1240(char*, char *);
extern void execute_250(char*, char *);
extern void execute_252(char*, char *);
extern void execute_292(char*, char *);
extern void execute_294(char*, char *);
extern void execute_295(char*, char *);
extern void execute_369(char*, char *);
extern void execute_378(char*, char *);
extern void execute_385(char*, char *);
extern void execute_428(char*, char *);
extern void execute_575(char*, char *);
extern void execute_576(char*, char *);
extern void execute_1224(char*, char *);
extern void execute_574(char*, char *);
extern void execute_1226(char*, char *);
extern void execute_258(char*, char *);
extern void execute_259(char*, char *);
extern void execute_260(char*, char *);
extern void execute_266(char*, char *);
extern void execute_284(char*, char *);
extern void execute_285(char*, char *);
extern void execute_287(char*, char *);
extern void execute_275(char*, char *);
extern void execute_281(char*, char *);
extern void execute_282(char*, char *);
extern void execute_279(char*, char *);
extern void execute_316(char*, char *);
extern void execute_307(char*, char *);
extern void execute_308(char*, char *);
extern void execute_312(char*, char *);
extern void execute_319(char*, char *);
extern void execute_352(char*, char *);
extern void execute_354(char*, char *);
extern void execute_355(char*, char *);
extern void execute_323(char*, char *);
extern void execute_328(char*, char *);
extern void execute_346(char*, char *);
extern void execute_347(char*, char *);
extern void execute_349(char*, char *);
extern void execute_337(char*, char *);
extern void execute_343(char*, char *);
extern void execute_344(char*, char *);
extern void execute_341(char*, char *);
extern void execute_359(char*, char *);
extern void execute_360(char*, char *);
extern void execute_361(char*, char *);
extern void execute_374(char*, char *);
extern void execute_412(char*, char *);
extern void execute_413(char*, char *);
extern void execute_427(char*, char *);
extern void execute_403(char*, char *);
extern void execute_409(char*, char *);
extern void execute_410(char*, char *);
extern void execute_407(char*, char *);
extern void execute_415(char*, char *);
extern void execute_417(char*, char *);
extern void execute_419(char*, char *);
extern void execute_421(char*, char *);
extern void execute_423(char*, char *);
extern void execute_425(char*, char *);
extern void execute_563(char*, char *);
extern void execute_440(char*, char *);
extern void execute_443(char*, char *);
extern void execute_505(char*, char *);
extern void execute_506(char*, char *);
extern void execute_450(char*, char *);
extern void execute_452(char*, char *);
extern void execute_455(char*, char *);
extern void execute_478(char*, char *);
extern void execute_480(char*, char *);
extern void execute_483(char*, char *);
extern void execute_510(char*, char *);
extern void execute_511(char*, char *);
extern void execute_515(char*, char *);
extern void execute_557(char*, char *);
extern void execute_558(char*, char *);
extern void execute_532(char*, char *);
extern void execute_533(char*, char *);
extern void execute_535(char*, char *);
extern void execute_523(char*, char *);
extern void execute_529(char*, char *);
extern void execute_530(char*, char *);
extern void execute_527(char*, char *);
extern void execute_473(char*, char *);
extern void execute_474(char*, char *);
extern void execute_476(char*, char *);
extern void execute_464(char*, char *);
extern void execute_470(char*, char *);
extern void execute_471(char*, char *);
extern void execute_468(char*, char *);
extern void execute_581(char*, char *);
extern void execute_586(char*, char *);
extern void execute_587(char*, char *);
extern void execute_588(char*, char *);
extern void execute_589(char*, char *);
extern void execute_590(char*, char *);
extern void execute_591(char*, char *);
extern void execute_592(char*, char *);
extern void execute_593(char*, char *);
extern void execute_817(char*, char *);
extern void execute_818(char*, char *);
extern void execute_819(char*, char *);
extern void execute_820(char*, char *);
extern void execute_821(char*, char *);
extern void execute_822(char*, char *);
extern void execute_847(char*, char *);
extern void execute_1024(char*, char *);
extern void execute_583(char*, char *);
extern void execute_584(char*, char *);
extern void execute_824(char*, char *);
extern void execute_825(char*, char *);
extern void execute_602(char*, char *);
extern void execute_603(char*, char *);
extern void execute_773(char*, char *);
extern void execute_609(char*, char *);
extern void execute_610(char*, char *);
extern void execute_613(char*, char *);
extern void execute_614(char*, char *);
extern void execute_618(char*, char *);
extern void execute_619(char*, char *);
extern void execute_621(char*, char *);
extern void execute_622(char*, char *);
extern void execute_624(char*, char *);
extern void execute_625(char*, char *);
extern void execute_627(char*, char *);
extern void execute_629(char*, char *);
extern void execute_632(char*, char *);
extern void execute_633(char*, char *);
extern void execute_643(char*, char *);
extern void execute_644(char*, char *);
extern void execute_645(char*, char *);
extern void execute_646(char*, char *);
extern void execute_647(char*, char *);
extern void execute_648(char*, char *);
extern void execute_649(char*, char *);
extern void execute_650(char*, char *);
extern void execute_651(char*, char *);
extern void execute_652(char*, char *);
extern void execute_653(char*, char *);
extern void execute_654(char*, char *);
extern void execute_655(char*, char *);
extern void execute_656(char*, char *);
extern void execute_657(char*, char *);
extern void execute_658(char*, char *);
extern void execute_659(char*, char *);
extern void execute_660(char*, char *);
extern void execute_661(char*, char *);
extern void execute_662(char*, char *);
extern void execute_663(char*, char *);
extern void execute_664(char*, char *);
extern void execute_665(char*, char *);
extern void execute_666(char*, char *);
extern void execute_667(char*, char *);
extern void execute_668(char*, char *);
extern void execute_669(char*, char *);
extern void execute_670(char*, char *);
extern void execute_671(char*, char *);
extern void execute_672(char*, char *);
extern void execute_673(char*, char *);
extern void execute_674(char*, char *);
extern void execute_675(char*, char *);
extern void execute_676(char*, char *);
extern void execute_677(char*, char *);
extern void execute_678(char*, char *);
extern void execute_679(char*, char *);
extern void execute_680(char*, char *);
extern void execute_681(char*, char *);
extern void execute_682(char*, char *);
extern void execute_683(char*, char *);
extern void execute_684(char*, char *);
extern void execute_685(char*, char *);
extern void execute_686(char*, char *);
extern void execute_687(char*, char *);
extern void execute_688(char*, char *);
extern void execute_689(char*, char *);
extern void execute_690(char*, char *);
extern void execute_691(char*, char *);
extern void execute_692(char*, char *);
extern void execute_693(char*, char *);
extern void execute_694(char*, char *);
extern void execute_695(char*, char *);
extern void execute_696(char*, char *);
extern void execute_697(char*, char *);
extern void execute_698(char*, char *);
extern void execute_699(char*, char *);
extern void execute_700(char*, char *);
extern void execute_701(char*, char *);
extern void execute_702(char*, char *);
extern void execute_703(char*, char *);
extern void execute_704(char*, char *);
extern void execute_705(char*, char *);
extern void execute_706(char*, char *);
extern void execute_707(char*, char *);
extern void execute_708(char*, char *);
extern void execute_709(char*, char *);
extern void execute_710(char*, char *);
extern void execute_711(char*, char *);
extern void execute_712(char*, char *);
extern void execute_713(char*, char *);
extern void execute_714(char*, char *);
extern void execute_715(char*, char *);
extern void execute_716(char*, char *);
extern void execute_717(char*, char *);
extern void execute_718(char*, char *);
extern void execute_719(char*, char *);
extern void execute_720(char*, char *);
extern void execute_721(char*, char *);
extern void execute_722(char*, char *);
extern void execute_723(char*, char *);
extern void execute_724(char*, char *);
extern void execute_725(char*, char *);
extern void execute_726(char*, char *);
extern void execute_727(char*, char *);
extern void execute_728(char*, char *);
extern void execute_729(char*, char *);
extern void execute_730(char*, char *);
extern void execute_731(char*, char *);
extern void execute_732(char*, char *);
extern void execute_733(char*, char *);
extern void execute_734(char*, char *);
extern void execute_735(char*, char *);
extern void execute_736(char*, char *);
extern void execute_737(char*, char *);
extern void execute_738(char*, char *);
extern void execute_739(char*, char *);
extern void execute_740(char*, char *);
extern void execute_741(char*, char *);
extern void execute_742(char*, char *);
extern void execute_743(char*, char *);
extern void execute_744(char*, char *);
extern void execute_745(char*, char *);
extern void execute_746(char*, char *);
extern void execute_747(char*, char *);
extern void execute_748(char*, char *);
extern void execute_749(char*, char *);
extern void execute_750(char*, char *);
extern void execute_751(char*, char *);
extern void execute_752(char*, char *);
extern void execute_753(char*, char *);
extern void execute_754(char*, char *);
extern void execute_755(char*, char *);
extern void execute_756(char*, char *);
extern void execute_757(char*, char *);
extern void execute_758(char*, char *);
extern void execute_759(char*, char *);
extern void execute_760(char*, char *);
extern void execute_761(char*, char *);
extern void execute_762(char*, char *);
extern void execute_763(char*, char *);
extern void execute_764(char*, char *);
extern void execute_765(char*, char *);
extern void execute_766(char*, char *);
extern void execute_767(char*, char *);
extern void execute_768(char*, char *);
extern void execute_769(char*, char *);
extern void execute_770(char*, char *);
extern void execute_771(char*, char *);
extern void execute_772(char*, char *);
extern void execute_793(char*, char *);
extern void execute_794(char*, char *);
extern void execute_796(char*, char *);
extern void execute_784(char*, char *);
extern void execute_790(char*, char *);
extern void execute_791(char*, char *);
extern void execute_788(char*, char *);
extern void execute_843(char*, char *);
extern void execute_844(char*, char *);
extern void execute_846(char*, char *);
extern void execute_834(char*, char *);
extern void execute_840(char*, char *);
extern void execute_841(char*, char *);
extern void execute_838(char*, char *);
extern void execute_1231(char*, char *);
extern void execute_1287(char*, char *);
extern void execute_1288(char*, char *);
extern void execute_1289(char*, char *);
extern void execute_1291(char*, char *);
extern void execute_1292(char*, char *);
extern void execute_1293(char*, char *);
extern void execute_1294(char*, char *);
extern void execute_1295(char*, char *);
extern void transaction_1(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_6(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_52(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_53(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_59(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_60(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_63(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_64(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_65(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_86(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_90(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_97(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_106(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_220(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_237(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_238(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_567(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_858(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1131(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[345] = {(funcp)execute_1284, (funcp)execute_1285, (funcp)execute_1290, (funcp)execute_151, (funcp)execute_221, (funcp)execute_1246, (funcp)execute_1247, (funcp)execute_1255, (funcp)execute_1268, (funcp)execute_1269, (funcp)execute_223, (funcp)execute_228, (funcp)execute_237, (funcp)execute_232, (funcp)execute_1253, (funcp)execute_1250, (funcp)execute_1251, (funcp)execute_1259, (funcp)execute_1260, (funcp)execute_1261, (funcp)execute_1265, (funcp)execute_1266, (funcp)execute_1267, (funcp)execute_169, (funcp)execute_170, (funcp)execute_186, (funcp)execute_160, (funcp)execute_166, (funcp)execute_167, (funcp)execute_164, (funcp)execute_172, (funcp)execute_174, (funcp)execute_176, (funcp)execute_178, (funcp)execute_180, (funcp)execute_182, (funcp)execute_184, (funcp)execute_246, (funcp)execute_1239, (funcp)execute_1240, (funcp)execute_250, (funcp)execute_252, (funcp)execute_292, (funcp)execute_294, (funcp)execute_295, (funcp)execute_369, (funcp)execute_378, (funcp)execute_385, (funcp)execute_428, (funcp)execute_575, (funcp)execute_576, (funcp)execute_1224, (funcp)execute_574, (funcp)execute_1226, (funcp)execute_258, (funcp)execute_259, (funcp)execute_260, (funcp)execute_266, (funcp)execute_284, (funcp)execute_285, (funcp)execute_287, (funcp)execute_275, (funcp)execute_281, (funcp)execute_282, (funcp)execute_279, (funcp)execute_316, (funcp)execute_307, (funcp)execute_308, (funcp)execute_312, (funcp)execute_319, (funcp)execute_352, (funcp)execute_354, (funcp)execute_355, (funcp)execute_323, (funcp)execute_328, (funcp)execute_346, (funcp)execute_347, (funcp)execute_349, (funcp)execute_337, (funcp)execute_343, (funcp)execute_344, (funcp)execute_341, (funcp)execute_359, (funcp)execute_360, (funcp)execute_361, (funcp)execute_374, (funcp)execute_412, (funcp)execute_413, (funcp)execute_427, (funcp)execute_403, (funcp)execute_409, (funcp)execute_410, (funcp)execute_407, (funcp)execute_415, (funcp)execute_417, (funcp)execute_419, (funcp)execute_421, (funcp)execute_423, (funcp)execute_425, (funcp)execute_563, (funcp)execute_440, (funcp)execute_443, (funcp)execute_505, (funcp)execute_506, (funcp)execute_450, (funcp)execute_452, (funcp)execute_455, (funcp)execute_478, (funcp)execute_480, (funcp)execute_483, (funcp)execute_510, (funcp)execute_511, (funcp)execute_515, (funcp)execute_557, (funcp)execute_558, (funcp)execute_532, (funcp)execute_533, (funcp)execute_535, (funcp)execute_523, (funcp)execute_529, (funcp)execute_530, (funcp)execute_527, (funcp)execute_473, (funcp)execute_474, (funcp)execute_476, (funcp)execute_464, (funcp)execute_470, (funcp)execute_471, (funcp)execute_468, (funcp)execute_581, (funcp)execute_586, (funcp)execute_587, (funcp)execute_588, (funcp)execute_589, (funcp)execute_590, (funcp)execute_591, (funcp)execute_592, (funcp)execute_593, (funcp)execute_817, (funcp)execute_818, (funcp)execute_819, (funcp)execute_820, (funcp)execute_821, (funcp)execute_822, (funcp)execute_847, (funcp)execute_1024, (funcp)execute_583, (funcp)execute_584, (funcp)execute_824, (funcp)execute_825, (funcp)execute_602, (funcp)execute_603, (funcp)execute_773, (funcp)execute_609, (funcp)execute_610, (funcp)execute_613, (funcp)execute_614, (funcp)execute_618, (funcp)execute_619, (funcp)execute_621, (funcp)execute_622, (funcp)execute_624, (funcp)execute_625, (funcp)execute_627, (funcp)execute_629, (funcp)execute_632, (funcp)execute_633, (funcp)execute_643, (funcp)execute_644, (funcp)execute_645, (funcp)execute_646, (funcp)execute_647, (funcp)execute_648, (funcp)execute_649, (funcp)execute_650, (funcp)execute_651, (funcp)execute_652, (funcp)execute_653, (funcp)execute_654, (funcp)execute_655, (funcp)execute_656, (funcp)execute_657, (funcp)execute_658, (funcp)execute_659, (funcp)execute_660, (funcp)execute_661, (funcp)execute_662, (funcp)execute_663, (funcp)execute_664, (funcp)execute_665, (funcp)execute_666, (funcp)execute_667, (funcp)execute_668, (funcp)execute_669, (funcp)execute_670, (funcp)execute_671, (funcp)execute_672, (funcp)execute_673, (funcp)execute_674, (funcp)execute_675, (funcp)execute_676, (funcp)execute_677, (funcp)execute_678, (funcp)execute_679, (funcp)execute_680, (funcp)execute_681, (funcp)execute_682, (funcp)execute_683, (funcp)execute_684, (funcp)execute_685, (funcp)execute_686, (funcp)execute_687, (funcp)execute_688, (funcp)execute_689, (funcp)execute_690, (funcp)execute_691, (funcp)execute_692, (funcp)execute_693, (funcp)execute_694, (funcp)execute_695, (funcp)execute_696, (funcp)execute_697, (funcp)execute_698, (funcp)execute_699, (funcp)execute_700, (funcp)execute_701, (funcp)execute_702, (funcp)execute_703, (funcp)execute_704, (funcp)execute_705, (funcp)execute_706, (funcp)execute_707, (funcp)execute_708, (funcp)execute_709, (funcp)execute_710, (funcp)execute_711, (funcp)execute_712, (funcp)execute_713, (funcp)execute_714, (funcp)execute_715, (funcp)execute_716, (funcp)execute_717, (funcp)execute_718, (funcp)execute_719, (funcp)execute_720, (funcp)execute_721, (funcp)execute_722, (funcp)execute_723, (funcp)execute_724, (funcp)execute_725, (funcp)execute_726, (funcp)execute_727, (funcp)execute_728, (funcp)execute_729, (funcp)execute_730, (funcp)execute_731, (funcp)execute_732, (funcp)execute_733, (funcp)execute_734, (funcp)execute_735, (funcp)execute_736, (funcp)execute_737, (funcp)execute_738, (funcp)execute_739, (funcp)execute_740, (funcp)execute_741, (funcp)execute_742, (funcp)execute_743, (funcp)execute_744, (funcp)execute_745, (funcp)execute_746, (funcp)execute_747, (funcp)execute_748, (funcp)execute_749, (funcp)execute_750, (funcp)execute_751, (funcp)execute_752, (funcp)execute_753, (funcp)execute_754, (funcp)execute_755, (funcp)execute_756, (funcp)execute_757, (funcp)execute_758, (funcp)execute_759, (funcp)execute_760, (funcp)execute_761, (funcp)execute_762, (funcp)execute_763, (funcp)execute_764, (funcp)execute_765, (funcp)execute_766, (funcp)execute_767, (funcp)execute_768, (funcp)execute_769, (funcp)execute_770, (funcp)execute_771, (funcp)execute_772, (funcp)execute_793, (funcp)execute_794, (funcp)execute_796, (funcp)execute_784, (funcp)execute_790, (funcp)execute_791, (funcp)execute_788, (funcp)execute_843, (funcp)execute_844, (funcp)execute_846, (funcp)execute_834, (funcp)execute_840, (funcp)execute_841, (funcp)execute_838, (funcp)execute_1231, (funcp)execute_1287, (funcp)execute_1288, (funcp)execute_1289, (funcp)execute_1291, (funcp)execute_1292, (funcp)execute_1293, (funcp)execute_1294, (funcp)execute_1295, (funcp)transaction_1, (funcp)transaction_2, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_6, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_52, (funcp)transaction_53, (funcp)transaction_59, (funcp)transaction_60, (funcp)transaction_63, (funcp)transaction_64, (funcp)transaction_65, (funcp)transaction_86, (funcp)transaction_90, (funcp)transaction_97, (funcp)transaction_106, (funcp)transaction_220, (funcp)transaction_237, (funcp)transaction_238, (funcp)transaction_567, (funcp)transaction_858, (funcp)transaction_1131, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 345;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/dds_ip_tb_behav/xsim.reloc",  (void **)funcTab, 345);
	iki_vhdl_file_variable_register(dp + 322360);
	iki_vhdl_file_variable_register(dp + 322416);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/dds_ip_tb_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/dds_ip_tb_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 599280, dp + 598048, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 599336, dp + 598104, 0, 47, 0, 47, 48, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 599376, dp + 598160, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 599432, dp + 598216, 0, 31, 0, 31, 32, 1);
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/dds_ip_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/dds_ip_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/dds_ip_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}

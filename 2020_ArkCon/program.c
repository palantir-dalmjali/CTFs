/* Preamble: 
	Decompiled Web Assembly generated by wasmdec.
	Note: this section of code isn't decompiled webassembly,
	just support functions in cased decompiled code requires it

*/
#include <stdint.h> // For the bit size specific types
#include <math.h> // For certian WASM operations
typedef const char* wasm_table_t; // WASM tables
// Bit size specific types not declared in stdint.h:
typedef float float32_t;
typedef double float64_t;
// C implementation of WASM expressions:
unsigned int _rotl(const unsigned int value, int shift) {
	if ((shift &= sizeof(value) * 8 - 1) == 0)
		return value;
	return (value << shift) | (value >> (sizeof(value)*8 - shift));
}
unsigned int _rotr(const unsigned int value, int shift) {
	if ((shift &= sizeof(value) * 8 - 1) == 0)
		return value;
	return (value >> shift) | (value << (sizeof(value)*8 - shift));
}
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)
// Host functions: used to request information from host machine.
extern int32_t host_has_feature(int32_t feature_opcode);
extern void host_grow_memory(int32_t size);
extern int32_t host_get_current_memory(void);
extern int32_t host_get_page_size(void);
// End of preamble

// WASM globals:
extern int gimport$1; /* import */
extern int gimport$2; /* import */
int global$0 = 2080;
int global$1 = 5244960;
float global$2 = 0.000000;

extern void ffimport$0(int local0); /* import */
int f0(int local0, int local1, int local2, int local3, int local4, int local5, int local6, int local7, int local8, int local9, int local10, int local11, int local12, int local13, int local14, int local15, int local16, int local17, int local18, int local19, int local20, int local21, int local22, int local23, int local24, int local25, int local26, int local27, int local28, int local29, int local30, int local31, int local32, int local33, int local34, int local35, int local36, int local37, int local38, int local39, int local40) {
	// Parsed WASM function locals:
	int local41; 
	int local42; 
	int local43; 
	int local44; 
	int local45; 
	int local46; 
	int local47; 
	int local48; 
	int local49; 
	int local50; 
	int local51; 
	int local52; 
	int local53; 
	int local54; 
	int local55; 
	int local56; 
	int local57; 
	int local58; 
	int local59; 
	int local60; 
	int local61; 
	int local62; 
	int local63; 
	int local64; 
	int local65; 
	int local66; 
	int local67; 
	int local68; 
	int local69; 
	int local70; 
	int local71; 
	int local72; 
	int local73; 
	int local74; 
	int local75; 
	int local76; 
	int local77; 
	int local78; 
	int local79; 
	int local80; 
	int local81; 
	int local82; 
	int local83; 
	int local84; 
	int local85; 
	int local86; 
	int local87; 
	int local88; 
	int local89; 
	int local90; 
	int local91; 
	int local92; 
	int local93; 
	int local94; 
	int local95; 
	int local96; 
	int local97; 
	int local98; 
	int local99; 
	int local100; 
	int local101; 
	int local102; 
	int local103; 
	int local104; 
	int local105; 
	int local106; 
	int local107; 
	int local108; 
	int local109; 
	int local110; 
	int local111; 
	int local112; 
	int local113; 
	int local114; 
	int local115; 
	int local116; 
	int local117; 
	int local118; 
	int local119; 
	int local120; 
	int local121; 
	int local122; 
	int local123; 
	int local124; 
	int local125; 
	int local126; 
	int local127; 
	int local128; 
	int local129; 
	int local130; 
	int local131; 
	int local132; 
	int local133; 
	int local134; 
	int local135; 
	int local136; 
	int local137; 
	int local138; 
	int local139; 
	int local140; 
	int local141; 
	int local142; 
	int local143; 
	int local144; 
	int local145; 
	int local146; 
	int local147; 
	int local148; 
	int local149; 
	int local150; 
	int local151; 
	int local152; 
	int local153; 
	int local154; 
	int local155; 
	int local156; 
	int local157; 
	int local158; 
	int local159; 
	int local160; 
	int local161; 
	int local162; 
	int local163; 
	int local164; 
	int local165; 
	int local166; 
	int local167; 
	int local168; 
	int local169; 
	int local170; 
	int local171; 
	int local172; 
	int local173; 
	int local174; 
	int local175; 
	int local176; 
	int local177; 
	int local178; 
	int local179; 
	int local180; 
	int local181; 
	int local182; 
	int local183; 
	int local184; 
	int local185; 
	int local186; 
	int local187; 
	int local188; 
	int local189; 
	int local190; 
	int local191; 
	int local192; 
	int local193; 
	int local194; 
	int local195; 
	int local196; 
	int local197; 
	int local198; 
	int local199; 
	int local200; 
	int local201; 
	int local202; 
	int local203; 
	int local204; 
	int local205; 
	int local206; 
	int local207; 
	int local208; 
	int local209; 
	int local210; 
	int local211; 
	int local212; 
	int local213; 
	int local214; 
	int local215; 
	int local216; 
	int local217; 
	int local218; 
	int local219; 
	int local220; 
	int local221; 
	int local222; 
	int local223; 
	int local224; 
	int local225; 
	int local226; 
	int local227; 
	int local228; 
	int local229; 
	int local230; 
	int local231; 
	int local232; 
	int local233; 
	int local234; 
	int local235; 
	int local236; 
	int local237; 
	int local238; 
	int local239; 
	int local240; 
	int local241; 
	int local242; 
	int local243; 
	int local244; 
	int local245; 
	int local246; 
	int local247; 
	int local248; 
	int local249; 
	int local250; 
	int local251; 
	int local252; 
	int local253; 
	int local254; 
	int local255; 
	int local256; 
	int local257; 
	int local258; 
	int local259; 
	int local260; 
	int local261; 
	int local262; 
	int local263; 
	int local264; 
	int local265; 
	int local266; 
	int local267; 
	int local268; 
	int local269; 
	int local270; 
	int local271; 
	int local272; 
	int local273; 
	int local274; 
	int local275; 
	int local276; 
	int local277; 
	int local278; 
	int local279; 
	int local280; 
	int local281; 
	int local282; 
	int local283; 
	int local284; 
	int local285; 
	int local286; 
	int local287; 
	int local288; 
	int local289; 
	int local290; 
	int local291; 
	int local292; 
	int local293; 
	int local294; 
	int local295; 
	int local296; 
	int local297; 
	int local298; 
	int local299; 
	int local300; 
	int local301; 
	int local302; 
	int local303; 
	int local304; 
	int local305; 
	int local306; 
	int local307; 
	int local308; 
	int local309; 
	int local310; 
	int local311; 
	int local312; 
	int local313; 
	int local314; 
	int local315; 
	int local316; 
	int local317; 
	int local318; 
	int local319; 
	int local320; 
	int local321; 
	int local322; 
	int local323; 
	int local324; 
	int local325; 
	int local326; 
	int local327; 
	int local328; 
	int local329; 
	int local330; 
	int local331; 
	int local332; 
	int local333; 
	int local334; 
	int local335; 
	int local336; 
	int local337; 
	int local338; 
	int local339; 
	int local340; 
	int local341; 
	int local342; 
	int local343; 
	int local344; 
	int local345; 
	int local346; 
	int local347; 
	int local348; 
	int local349; 
	int local350; 
	int local351; 
	int local352; 
	int local353; 
	int local354; 
	int local355; 
	int local356; 
	int local357; 
	int local358; 
	int local359; 
	int local360; 
	int local361; 
	int local362; 
	int local363; 
	int local364; 
	int local365; 
	int local366; 
	int local367; 
	int local368; 
	int local369; 
	int local370; 
	int local371; 
	int local372; 
	int local373; 
	int local374; 
	int local375; 
	int local376; 
	int local377; 
	int local378; 
	int local379; 
	int local380; 
	int local381; 
	int local382; 
	int local383; 
	int local384; 
	int local385; 
	int local386; 
	int local387; 
	int local388; 
	int local389; 
	int local390; 
	int local391; 
	int local392; 
	int local393; 
	int local394; 
	int local395; 
	int local396; 
	int local397; 
	int local398; 
	int local399; 
	int local400; 
	int local401; 
	int local402; 
	int local403; 
	int local404; 
	int local405; 
	int local406; 
	int local407; 
	int local408; 
	int local409; 
	int local410; 
	int local411; 
	int local412; 
	int local413; 
	int local414; 
	int local415; 
	int local416; 
	int local417; 
	int local418; 
	int local419; 
	int local420; 
	int local421; 
	int local422; 
	int local423; 
	int local424; 
	int local425; 
	int local426; 
	int local427; 
	int local428; 
	int local429; 
	int local430; 
	int local431; 
	int local432; 
	int local433; 
	int local434; 
	int local435; 
	int local436; 
	int local437; 
	int local438; 
	int local439; 
	int local440; 
	int local441; 
	int local442; 
	int local443; 
	int local444; 
	int local445; 
	int local446; 
	int local447; 
	int local448; 
	int local449; 
	int local450; 
	int local451; 
	int local452; 
	int local453; 
	int local454; 
	int local455; 
	int local456; 
	int local457; 
	int local458; 
	int local459; 
	int local460; 
	int local461; 
	int local462; 
	int local463; 
	int local464; 
	int local465; 
	int local466; 
	int local467; 
	int local468; 
	int local469; 
	int local470; 
	int local471; 
	int local472; 
	int local473; 
	int local474; 
	int local475; 
	int local476; 
	int local477; 
	int local478; 
	int local479; 
	int local480; 
	int local481; 
	int local482; 
	int local483; 
	int local484; 
	int local485; 
	int local486; 
	int local487; 
	int local488; 
	int local489; 
	int local490; 
	int local491; 
	int local492; 
	int local493; 
	int local494; 
	int local495; 
	int local496; 
	local495 = global$0;
	global$0 = global$0 + 176	if (global$0 >= global$1) {
	ffimport$0(176);

	} // <No else block>
	local288 = local0;
	local289 = local1;
	local300 = local2;
	local311 = local3;
	local322 = local4;
	local324 = local5;
	local325 = local6;
	local326 = local7;
	local327 = local8;
	local328 = local9;
	local290 = local10;
	local291 = local11;
	local292 = local12;
	local293 = local13;
	local294 = local14;
	local295 = local15;
	local296 = local16;
	local297 = local17;
	local298 = local18;
	local299 = local19;
	local301 = local20;
	local302 = local21;
	local303 = local22;
	local304 = local23;
	local305 = local24;
	local306 = local25;
	local307 = local26;
	local308 = local27;
	local309 = local28;
	local310 = local29;
	local312 = local30;
	local313 = local31;
	local314 = local32;
	local315 = local33;
	local316 = local34;
	local317 = local35;
	local318 = local36;
	local319 = local37;
	local320 = local38;
	local321 = local39;
	local323 = local40;
	local452 = 0;
	local41 = local288;
	local370 = local41 ^ -1;
	local206 = local370 & 208;
	local42 = local288;
	local207 = local42 & -209;
	local411 = local206 | local207;
	local453 = local411 - 184;
	local329 = 	label$2:
	local496 = local453;
(local496 < 0) ? (0 - local496) : (local496);
;
	local77 = local452;
	local165 = local77 + local329;
	local452 = local165;
	local88 = local289;
	local387 = local88 ^ -1;
	local266 = local387 & 146;
	local99 = local289;
	local271 = local99 & -147;
	local444 = local266 | local271;
	local487 = local444 - 230;
	local364 = 	label$3:
	local496 = local487;
(local496 < 0) ? (0 - local496) : (local496);
;
	local110 = local452;
	local202 = local110 + local364;
	local452 = local202;
	local121 = local300;
	local409 = local121 ^ -1;
	local208 = local409 & 100;
	local132 = local300;
	local213 = local132 & -101;
	local415 = local208 | local213;
	local458 = local415 - 16;
	local335 = 	label$4:
	local496 = local458;
(local496 < 0) ? (0 - local496) : (local496);
;
	local143 = local452;
	local173 = local143 + local335;
	local452 = local173;
	local154 = local311;
	local380 = local154 ^ -1;
	local230 = local380 & 203;
	local43 = local311;
	local235 = local43 & -204;
	local426 = local230 | local235;
	local469 = local426 - 187;
	local346 = 	label$5:
	local496 = local469;
(local496 < 0) ? (0 - local496) : (local496);
;
	local54 = local452;
	local184 = local54 + local346;
	local452 = local184;
	local65 = local322;
	local392 = local65 ^ -1;
	local252 = local392 & 3;
	local70 = local322;
	local257 = local70 & -4;
	local437 = local252 | local257;
	local480 = local437 - 57;
	local357 = 	label$6:
	local496 = local480;
(local496 < 0) ? (0 - local496) : (local496);
;
	local71 = local452;
	local194 = local71 + local357;
	local452 = local194;
	local72 = local324;
	local400 = local72 ^ -1;
	local267 = local400 & 61;
	local73 = local324;
	local268 = local73 & -62;
	local441 = local267 | local268;
	local483 = local441 - 18;
	local359 = 	label$7:
	local496 = local483;
(local496 < 0) ? (0 - local496) : (local496);
;
	local74 = local452;
	local195 = local74 + local359;
	local452 = local195;
	local75 = local325;
	local401 = local75 ^ -1;
	local269 = local401 & 3;
	local76 = local325;
	local270 = local76 & -4;
	local442 = local269 | local270;
	local484 = local442 - 44;
	local360 = 	label$8:
	local496 = local484;
(local496 < 0) ? (0 - local496) : (local496);
;
	local78 = local452;
	local196 = local78 + local360;
	local452 = local196;
	local79 = local326;
	local402 = local79 ^ -1;
	local272 = local402 & 166;
	local80 = local326;
	local273 = local80 & -167;
	local443 = local272 | local273;
	local485 = local443 - 206;
	local361 = 	label$9:
	local496 = local485;
(local496 < 0) ? (0 - local496) : (local496);
;
	local81 = local452;
	local197 = local81 + local361;
	local452 = local197;
	local82 = local327;
	local403 = local82 ^ -1;
	local274 = local403 & 42;
	local83 = local327;
	local275 = local83 & -43;
	local445 = local274 | local275;
	local486 = local445 - 25;
	local362 = 	label$10:
	local496 = local486;
(local496 < 0) ? (0 - local496) : (local496);
;
	local84 = local452;
	local198 = local84 + local362;
	local452 = local198;
	local85 = local328;
	local404 = local85 ^ -1;
	local276 = local404 & 151;
	local86 = local328;
	local277 = local86 & -152;
	local446 = local276 | local277;
	local488 = local446 - 244;
	local363 = 	label$11:
	local496 = local488;
(local496 < 0) ? (0 - local496) : (local496);
;
	local87 = local452;
	local199 = local87 + local363;
	local452 = local199;
	local89 = local290;
	local405 = local89 ^ -1;
	local278 = local405 & 250;
	local90 = local290;
	local279 = local90 & -251;
	local447 = local278 | local279;
	local489 = local447 - 145;
	local365 = 	label$12:
	local496 = local489;
(local496 < 0) ? (0 - local496) : (local496);
;
	local91 = local452;
	local200 = local91 + local365;
	local452 = local200;
	local92 = local291;
	local406 = local92 ^ -1;
	local280 = local406 & 209;
	local93 = local291;
	local281 = local93 & -210;
	local448 = local280 | local281;
	local490 = local448 - 252;
	local366 = 	label$13:
	local496 = local490;
(local496 < 0) ? (0 - local496) : (local496);
;
	local94 = local452;
	local201 = local94 + local366;
	local452 = local201;
	local95 = local292;
	local407 = local95 ^ -1;
	local282 = local407 & 249;
	local96 = local292;
	local283 = local96 & -250;
	local449 = local282 | local283;
	local491 = local449 - 128;
	local367 = 	label$14:
	local496 = local491;
(local496 < 0) ? (0 - local496) : (local496);
;
	local97 = local452;
	local203 = local97 + local367;
	local452 = local203;
	local98 = local293;
	local408 = local98 ^ -1;
	local284 = local408 & 138;
	local100 = local293;
	local285 = local100 & -139;
	local450 = local284 | local285;
	local492 = local450 - 185;
	local368 = 	label$15:
	local496 = local492;
(local496 < 0) ? (0 - local496) : (local496);
;
	local101 = local452;
	local204 = local101 + local368;
	local452 = local204;
	local102 = local294;
	local410 = local102 ^ -1;
	local286 = local410 & 163;
	local103 = local294;
	local287 = local103 & -164;
	local451 = local286 | local287;
	local493 = local451 - 151;
	local369 = 	label$16:
	local496 = local493;
(local496 < 0) ? (0 - local496) : (local496);
;
	local104 = local452;
	local205 = local104 + local369;
	local452 = local205;
	local105 = local295;
	local371 = local105 ^ -1;
	local209 = local371 & 144;
	local106 = local295;
	local210 = local106 & -145;
	local412 = local209 | local210;
	local454 = local412 - 248;
	local330 = 	label$17:
	local496 = local454;
(local496 < 0) ? (0 - local496) : (local496);
;
	local107 = local452;
	local166 = local107 + local330;
	local452 = local166;
	local108 = local296;
	local372 = local108 ^ -1;
	local211 = local372 & 150;
	local109 = local296;
	local212 = local109 & -151;
	local413 = local211 | local212;
	local455 = local413 - 187;
	local331 = 	label$18:
	local496 = local455;
(local496 < 0) ? (0 - local496) : (local496);
;
	local111 = local452;
	local167 = local111 + local331;
	local452 = local167;
	local112 = local297;
	local373 = local112 ^ -1;
	local214 = local373 & 66;
	local113 = local297;
	local215 = local113 & -67;
	local414 = local214 | local215;
	local456 = local414 - 116;
	local332 = 	label$19:
	local496 = local456;
(local496 < 0) ? (0 - local496) : (local496);
;
	local114 = local452;
	local168 = local114 + local332;
	local452 = local168;
	local115 = local298;
	local374 = local115 ^ -1;
	local216 = local374 & 244;
	local116 = local298;
	local217 = local116 & -245;
	local416 = local216 | local217;
	local457 = local416 - 197;
	local333 = 	label$20:
	local496 = local457;
(local496 < 0) ? (0 - local496) : (local496);
;
	local117 = local452;
	local169 = local117 + local333;
	local452 = local169;
	local118 = local299;
	local375 = local118 ^ -1;
	local218 = local375 & 58;
	local119 = local299;
	local219 = local119 & -59;
	local417 = local218 | local219;
	local459 = local417 - 87;
	local334 = 	label$21:
	local496 = local459;
(local496 < 0) ? (0 - local496) : (local496);
;
	local120 = local452;
	local170 = local120 + local334;
	local452 = local170;
	local122 = local301;
	local376 = local122 ^ -1;
	local220 = local376 & 21;
	local123 = local301;
	local221 = local123 & -22;
	local418 = local220 | local221;
	local460 = local418 - 120;
	local336 = 	label$22:
	local496 = local460;
(local496 < 0) ? (0 - local496) : (local496);
;
	local124 = local452;
	local171 = local124 + local336;
	local452 = local171;
	local125 = local302;
	local377 = local125 ^ -1;
	local222 = local377 & 150;
	local126 = local302;
	local223 = local126 & -151;
	local419 = local222 | local223;
	local461 = local419 - 165;
	local337 = 	label$23:
	local496 = local461;
(local496 < 0) ? (0 - local496) : (local496);
;
	local127 = local452;
	local172 = local127 + local337;
	local452 = local172;
	local128 = local303;
	local378 = local128 ^ -1;
	local224 = local378 & 211;
	local129 = local303;
	local225 = local129 & -212;
	local420 = local224 | local225;
	local462 = local420 - 254;
	local338 = 	label$24:
	local496 = local462;
(local496 < 0) ? (0 - local496) : (local496);
;
	local130 = local452;
	local174 = local130 + local338;
	local452 = local174;
	local131 = local304;
	local379 = local131 ^ -1;
	local226 = local379 & 229;
	local133 = local304;
	local227 = local133 & -230;
	local421 = local226 | local227;
	local463 = local421 - 208;
	local339 = 	label$25:
	local496 = local463;
(local496 < 0) ? (0 - local496) : (local496);
;
	local134 = local452;
	local175 = local134 + local339;
	local452 = local175;
	local135 = local305;
	local381 = local135 ^ -1;
	local228 = local381 & 187;
	local136 = local305;
	local229 = local136 & -188;
	local422 = local228 | local229;
	local464 = local422 - 139;
	local340 = 	label$26:
	local496 = local464;
(local496 < 0) ? (0 - local496) : (local496);
;
	local137 = local452;
	local176 = local137 + local340;
	local452 = local176;
	local138 = local306;
	local382 = local138 ^ -1;
	local231 = local382 & 163;
	local139 = local306;
	local232 = local139 & -164;
	local423 = local231 | local232;
	local465 = local423 - 206;
	local341 = 	label$27:
	local496 = local465;
(local496 < 0) ? (0 - local496) : (local496);
;
	local140 = local452;
	local177 = local140 + local341;
	local452 = local177;
	local141 = local307;
	local383 = local141 ^ -1;
	local233 = local383 & 107;
	local142 = local307;
	local234 = local142 & -108;
	local424 = local233 | local234;
	local466 = local424 - 88;
	local342 = 	label$28:
	local496 = local466;
(local496 < 0) ? (0 - local496) : (local496);
;
	local144 = local452;
	local178 = local144 + local342;
	local452 = local178;
	local145 = local308;
	local384 = local145 ^ -1;
	local236 = local384 & 174;
	local146 = local308;
	local237 = local146 & -175;
	local425 = local236 | local237;
	local467 = local425 - 131;
	local343 = 	label$29:
	local496 = local467;
(local496 < 0) ? (0 - local496) : (local496);
;
	local147 = local452;
	local179 = local147 + local343;
	local452 = local179;
	local148 = local309;
	local385 = local148 ^ -1;
	local238 = local385 & 106;
	local149 = local309;
	local239 = local149 & -107;
	local427 = local238 | local239;
	local468 = local427 - 9;
	local344 = 	label$30:
	local496 = local468;
(local496 < 0) ? (0 - local496) : (local496);
;
	local150 = local452;
	local180 = local150 + local344;
	local452 = local180;
	local151 = local310;
	local386 = local151 ^ -1;
	local240 = local386 & 34;
	local152 = local310;
	local241 = local152 & -35;
	local428 = local240 | local241;
	local470 = local428 - 18;
	local345 = 	label$31:
	local496 = local470;
(local496 < 0) ? (0 - local496) : (local496);
;
	local153 = local452;
	local181 = local153 + local345;
	local452 = local181;
	local155 = local312;
	local388 = local155 ^ -1;
	local242 = local388 & 186;
	local156 = local312;
	local243 = local156 & -187;
	local429 = local242 | local243;
	local471 = local429 - 138;
	local347 = 	label$32:
	local496 = local471;
(local496 < 0) ? (0 - local496) : (local496);
;
	local157 = local452;
	local182 = local157 + local347;
	local452 = local182;
	local158 = local313;
	local389 = local158 ^ -1;
	local244 = local389 & 225;
	local159 = local313;
	local245 = local159 & -226;
	local430 = local244 | local245;
	local472 = local430 - 141;
	local348 = 	label$33:
	local496 = local472;
(local496 < 0) ? (0 - local496) : (local496);
;
	local160 = local452;
	local183 = local160 + local348;
	local452 = local183;
	local161 = local314;
	local390 = local161 ^ -1;
	local246 = local390 & 8;
	local162 = local314;
	local247 = local162 & -9;
	local431 = local246 | local247;
	local473 = local431 - 37;
	local349 = 	label$34:
	local496 = local473;
(local496 < 0) ? (0 - local496) : (local496);
;
	local163 = local452;
	local185 = local163 + local349;
	local452 = local185;
	local164 = local315;
	local391 = local164 ^ -1;
	local248 = local391 & 12;
	local44 = local315;
	local249 = local44 & -13;
	local432 = local248 | local249;
	local474 = local432 - 57;
	local350 = 	label$35:
	local496 = local474;
(local496 < 0) ? (0 - local496) : (local496);
;
	local45 = local452;
	local186 = local45 + local350;
	local452 = local186;
	local46 = local316;
	local393 = local46 ^ -1;
	local250 = local393 & 62;
	local47 = local316;
	local251 = local47 & -63;
	local433 = local250 | local251;
	local475 = local433 - 73;
	local351 = 	label$36:
	local496 = local475;
(local496 < 0) ? (0 - local496) : (local496);
;
	local48 = local452;
	local187 = local48 + local351;
	local452 = local187;
	local49 = local317;
	local394 = local49 ^ -1;
	local253 = local394 & 228;
	local50 = local317;
	local254 = local50 & -229;
	local434 = local253 | local254;
	local476 = local434 - 208;
	local352 = 	label$37:
	local496 = local476;
(local496 < 0) ? (0 - local496) : (local496);
;
	local51 = local452;
	local188 = local51 + local352;
	local452 = local188;
	local52 = local318;
	local395 = local52 ^ -1;
	local255 = local395 & 85;
	local53 = local318;
	local256 = local53 & -86;
	local435 = local255 | local256;
	local477 = local435 - 99;
	local353 = 	label$38:
	local496 = local477;
(local496 < 0) ? (0 - local496) : (local496);
;
	local55 = local452;
	local189 = local55 + local353;
	local452 = local189;
	local56 = local319;
	local396 = local56 ^ -1;
	local258 = local396 & 110;
	local57 = local319;
	local259 = local57 & -111;
	local436 = local258 | local259;
	local478 = local436 - 64;
	local354 = 	label$39:
	local496 = local478;
(local496 < 0) ? (0 - local496) : (local496);
;
	local58 = local452;
	local190 = local58 + local354;
	local452 = local190;
	local59 = local320;
	local397 = local59 ^ -1;
	local260 = local397 & 79;
	local60 = local320;
	local261 = local60 & -80;
	local438 = local260 | local261;
	local479 = local438 - 55;
	local355 = 	label$40:
	local496 = local479;
(local496 < 0) ? (0 - local496) : (local496);
;
	local61 = local452;
	local191 = local61 + local355;
	local452 = local191;
	local62 = local321;
	local398 = local62 ^ -1;
	local262 = local398 & 227;
	local63 = local321;
	local263 = local63 & -228;
	local439 = local262 | local263;
	local481 = local439 - 154;
	local356 = 	label$41:
	local496 = local481;
(local496 < 0) ? (0 - local496) : (local496);
;
	local64 = local452;
	local192 = local64 + local356;
	local452 = local192;
	local66 = local323;
	local399 = local66 ^ -1;
	local264 = local399 & 14;
	local67 = local323;
	local265 = local67 & -15;
	local440 = local264 | local265;
	local482 = local440 - 116;
	local358 = 	label$42:
	local496 = local482;
(local496 < 0) ? (0 - local496) : (local496);
;
	local68 = local452;
	local193 = local68 + local358;
	local452 = local193;
	local69 = local452;
	global$0 = local495;
	return local69;
}

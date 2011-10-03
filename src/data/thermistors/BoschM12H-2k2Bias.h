/* FreeEMS - the open source engine management system
 *
 * Copyright 2008-2011 Fred Cooke
 *
 * This file is part of the FreeEMS project.
 *
 * FreeEMS software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FreeEMS software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with any FreeEMS software.  If not, see http://www.gnu.org/licenses/
 *
 * We ask that if you make any changes to this file you email them upstream to
 * us at admin(at)diyefi(dot)org or, even better, fork the code on github.com!
 *
 * Thank you for choosing FreeEMS to run your engine!
 */


/** @file BoschM12H-2k2Bias.h
 * @ingroup dataInitialisers
 *
 * Generated by FreeTherm 0.7-SNAPSHOT using the following parameters:
 *
 * Bias Resistor:
 * - Value: 2200
 *
 * Sensor Sample Points:
 * - Temp Low  : 0
 * - Temp Mid  : 30
 * - Temp High : 80
 * - Res Low   : 5896
 * - Res Mid   : 1707
 * - Res High  : 323
 *
 * Temp Units:
 * - Input Temp Scale: Celcius
 * - Output Temp Scale: Kelvin
 *
 * Bosch M12-H datasheet: http://www.bosch-motorsport.de/en-US/literature/en-US/0281002170_DataSheet_enUS_T6821419403.pdf
 */


65535, 65535, 59156, 55704, 53482, 51871, 50622, 49609, 48761, 48036, 47403, 46844, 46343, 45891, 45480, 45103,
44755, 44432, 44131, 43850, 43587, 43338, 43103, 42881, 42670, 42469, 42278, 42095, 41920, 41752, 41591, 41436,
41286, 41143, 41004, 40870, 40740, 40615, 40493, 40375, 40261, 40150, 40042, 39937, 39834, 39735, 39638, 39543,
39451, 39360, 39272, 39186, 39102, 39020, 38939, 38860, 38783, 38707, 38633, 38560, 38489, 38419, 38350, 38282,
38216, 38151, 38087, 38024, 37962, 37901, 37841, 37782, 37724, 37667, 37611, 37556, 37501, 37447, 37394, 37342,
37291, 37240, 37190, 37140, 37091, 37043, 36996, 36949, 36902, 36857, 36812, 36767, 36723, 36679, 36636, 36594,
36551, 36510, 36469, 36428, 36388, 36348, 36309, 36270, 36231, 36193, 36155, 36118, 36081, 36044, 36008, 35972,
35936, 35901, 35866, 35832, 35797, 35763, 35730, 35696, 35663, 35630, 35598, 35566, 35534, 35502, 35471, 35440,
35409, 35378, 35348, 35318, 35288, 35258, 35229, 35200, 35171, 35142, 35114, 35085, 35057, 35029, 35002, 34974,
34947, 34920, 34893, 34866, 34840, 34813, 34787, 34761, 34735, 34710, 34684, 34659, 34634, 34609, 34584, 34560,
34535, 34511, 34487, 34463, 34439, 34415, 34391, 34368, 34345, 34321, 34298, 34276, 34253, 34230, 34208, 34185,
34163, 34141, 34119, 34097, 34075, 34054, 34032, 34011, 33990, 33968, 33947, 33926, 33905, 33885, 33864, 33844,
33823, 33803, 33783, 33763, 33743, 33723, 33703, 33683, 33663, 33644, 33625, 33605, 33586, 33567, 33548, 33529,
33510, 33491, 33472, 33454, 33435, 33417, 33398, 33380, 33362, 33343, 33325, 33307, 33289, 33272, 33254, 33236,
33218, 33201, 33183, 33166, 33149, 33131, 33114, 33097, 33080, 33063, 33046, 33029, 33012, 32996, 32979, 32962,
32946, 32929, 32913, 32896, 32880, 32864, 32848, 32832, 32815, 32799, 32783, 32768, 32752, 32736, 32720, 32705,
32689, 32673, 32658, 32642, 32627, 32612, 32596, 32581, 32566, 32551, 32535, 32520, 32505, 32490, 32476, 32461,
32446, 32431, 32416, 32402, 32387, 32372, 32358, 32343, 32329, 32314, 32300, 32286, 32271, 32257, 32243, 32229,
32215, 32201, 32186, 32172, 32158, 32145, 32131, 32117, 32103, 32089, 32075, 32062, 32048, 32034, 32021, 32007,
31994, 31980, 31967, 31953, 31940, 31927, 31913, 31900, 31887, 31874, 31860, 31847, 31834, 31821, 31808, 31795,
31782, 31769, 31756, 31743, 31730, 31717, 31705, 31692, 31679, 31666, 31654, 31641, 31628, 31616, 31603, 31591,
31578, 31566, 31553, 31541, 31528, 31516, 31504, 31491, 31479, 31467, 31454, 31442, 31430, 31418, 31406, 31393,
31381, 31369, 31357, 31345, 31333, 31321, 31309, 31297, 31285, 31273, 31262, 31250, 31238, 31226, 31214, 31203,
31191, 31179, 31167, 31156, 31144, 31132, 31121, 31109, 31098, 31086, 31075, 31063, 31052, 31040, 31029, 31017,
31006, 30994, 30983, 30972, 30960, 30949, 30938, 30926, 30915, 30904, 30893, 30881, 30870, 30859, 30848, 30837,
30826, 30814, 30803, 30792, 30781, 30770, 30759, 30748, 30737, 30726, 30715, 30704, 30693, 30682, 30671, 30661,
30650, 30639, 30628, 30617, 30606, 30595, 30585, 30574, 30563, 30552, 30542, 30531, 30520, 30510, 30499, 30488,
30478, 30467, 30456, 30446, 30435, 30424, 30414, 30403, 30393, 30382, 30372, 30361, 30351, 30340, 30330, 30319,
30309, 30298, 30288, 30277, 30267, 30257, 30246, 30236, 30225, 30215, 30205, 30194, 30184, 30174, 30163, 30153,
30143, 30132, 30122, 30112, 30102, 30091, 30081, 30071, 30061, 30050, 30040, 30030, 30020, 30010, 30000, 29989,
29979, 29969, 29959, 29949, 29939, 29929, 29918, 29908, 29898, 29888, 29878, 29868, 29858, 29848, 29838, 29828,
29818, 29808, 29798, 29788, 29778, 29768, 29758, 29748, 29738, 29728, 29718, 29708, 29698, 29688, 29678, 29668,
29658, 29648, 29638, 29628, 29618, 29609, 29599, 29589, 29579, 29569, 29559, 29549, 29539, 29529, 29520, 29510,
29500, 29490, 29480, 29470, 29461, 29451, 29441, 29431, 29421, 29411, 29402, 29392, 29382, 29372, 29362, 29353,
29343, 29333, 29323, 29313, 29304, 29294, 29284, 29274, 29264, 29255, 29245, 29235, 29225, 29216, 29206, 29196,
29186, 29177, 29167, 29157, 29147, 29138, 29128, 29118, 29108, 29099, 29089, 29079, 29069, 29060, 29050, 29040,
29030, 29021, 29011, 29001, 28991, 28982, 28972, 28962, 28953, 28943, 28933, 28923, 28914, 28904, 28894, 28884,
28875, 28865, 28855, 28845, 28836, 28826, 28816, 28806, 28797, 28787, 28777, 28767, 28758, 28748, 28738, 28728,
28719, 28709, 28699, 28689, 28680, 28670, 28660, 28650, 28640, 28631, 28621, 28611, 28601, 28592, 28582, 28572,
28562, 28552, 28543, 28533, 28523, 28513, 28503, 28493, 28484, 28474, 28464, 28454, 28444, 28434, 28425, 28415,
28405, 28395, 28385, 28375, 28365, 28355, 28346, 28336, 28326, 28316, 28306, 28296, 28286, 28276, 28266, 28256,
28246, 28236, 28226, 28216, 28206, 28196, 28186, 28176, 28166, 28156, 28146, 28136, 28126, 28116, 28106, 28096,
28086, 28076, 28066, 28056, 28046, 28036, 28026, 28016, 28005, 27995, 27985, 27975, 27965, 27955, 27944, 27934,
27924, 27914, 27904, 27893, 27883, 27873, 27863, 27852, 27842, 27832, 27822, 27811, 27801, 27791, 27780, 27770,
27759, 27749, 27739, 27728, 27718, 27707, 27697, 27687, 27676, 27666, 27655, 27645, 27634, 27624, 27613, 27603,
27592, 27581, 27571, 27560, 27550, 27539, 27528, 27518, 27507, 27496, 27486, 27475, 27464, 27453, 27443, 27432,
27421, 27410, 27399, 27389, 27378, 27367, 27356, 27345, 27334, 27323, 27312, 27301, 27290, 27279, 27268, 27257,
27246, 27235, 27224, 27213, 27201, 27190, 27179, 27168, 27157, 27145, 27134, 27123, 27112, 27100, 27089, 27077,
27066, 27055, 27043, 27032, 27020, 27009, 26997, 26986, 26974, 26962, 26951, 26939, 26927, 26916, 26904, 26892,
26881, 26869, 26857, 26845, 26833, 26821, 26809, 26797, 26785, 26773, 26761, 26749, 26737, 26725, 26713, 26701,
26688, 26676, 26664, 26651, 26639, 26627, 26614, 26602, 26589, 26577, 26564, 26552, 26539, 26527, 26514, 26501,
26488, 26476, 26463, 26450, 26437, 26424, 26411, 26398, 26385, 26372, 26359, 26346, 26332, 26319, 26306, 26293,
26279, 26266, 26252, 26239, 26225, 26212, 26198, 26184, 26171, 26157, 26143, 26129, 26115, 26101, 26087, 26073,
26059, 26045, 26030, 26016, 26002, 25987, 25973, 25958, 25944, 25929, 25915, 25900, 25885, 25870, 25855, 25840,
25825, 25810, 25795, 25780, 25765, 25749, 25734, 25718, 25703, 25687, 25671, 25656, 25640, 25624, 25608, 25592,
25576, 25559, 25543, 25527, 25510, 25494, 25477, 25460, 25444, 25427, 25410, 25393, 25375, 25358, 25341, 25323,
25306, 25288, 25270, 25253, 25235, 25217, 25198, 25180, 25162, 25143, 25125, 25106, 25087, 25068, 25049, 25030,
25010, 24991, 24971, 24952, 24932, 24912, 24892, 24871, 24851, 24830, 24810, 24789, 24768, 24747, 24725, 24704,
24682, 24660, 24638, 24616, 24593, 24571, 24548, 24525, 24502, 24478, 24455, 24431, 24407, 24382, 24358, 24333,
24308, 24283, 24258, 24232, 24206, 24179, 24153, 24126, 24099, 24071, 24044, 24016, 23987, 23958, 23929, 23900,
23870, 23840, 23809, 23778, 23747, 23715, 23682, 23650, 23616, 23583, 23549, 23514, 23478, 23443, 23406, 23369,
23331, 23293, 23254, 23214, 23174, 23132, 23090, 23047, 23003, 22958, 22913, 22866, 22818, 22769, 22719, 22667,
22614, 22560, 22504, 22447, 22387, 22326, 22263, 22198, 22131, 22061, 21988, 21913, 21834, 21752, 21665, 21575,
21480, 21379, 21273, 21159, 21037, 20906, 20764, 20609, 20438, 20246, 20028, 19775, 19472, 19090, 18571, 17727

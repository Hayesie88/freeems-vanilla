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


/** @file Denso-2k0Bias.h
 * @ingroup dataInitialisers
 *
 * Generated by FreeTherm 0.6 using the following parameters:
 *
 * Bias Resistor:
 * - Value: 2000
 *
 * Sensor Sample Points:
 * - Temp Low  : 0
 * - Temp Mid  : 25.5
 * - Temp High : 80
 * - Res Low   : 6540
 * - Res Mid   : 2040
 * - Res High  : 340
 *
 * Temp Units:
 * - Input Temp Scale: Celcius
 * - Output Temp Scale: Kelvin
 *
 * Nippon Denso data: http://forum.diyefi.org/viewtopic.php?f=24&t=100
 */


65535, 65535, 65535, 64475, 60779, 58197, 56247, 54700, 53428, 52356, 51433, 50627, 49912, 49273, 48696, 48172,
47691, 47248, 46838, 46457, 46101, 45767, 45454, 45158, 44879, 44614, 44363, 44123, 43895, 43677, 43468, 43269,
43077, 42892, 42715, 42544, 42379, 42220, 42066, 41917, 41773, 41633, 41498, 41367, 41239, 41115, 40994, 40877,
40762, 40651, 40542, 40436, 40333, 40232, 40133, 40037, 39943, 39850, 39760, 39672, 39585, 39500, 39417, 39336,
39256, 39178, 39101, 39025, 38951, 38878, 38806, 38736, 38667, 38599, 38532, 38466, 38402, 38338, 38275, 38213,
38152, 38093, 38033, 37975, 37918, 37861, 37806, 37751, 37696, 37643, 37590, 37538, 37487, 37436, 37386, 37336,
37287, 37239, 37191, 37144, 37098, 37052, 37006, 36961, 36917, 36873, 36829, 36786, 36744, 36702, 36660, 36619,
36578, 36538, 36498, 36458, 36419, 36380, 36342, 36304, 36266, 36229, 36192, 36156, 36119, 36083, 36048, 36013,
35978, 35943, 35909, 35875, 35841, 35808, 35775, 35742, 35709, 35677, 35645, 35613, 35582, 35550, 35519, 35488,
35458, 35428, 35398, 35368, 35338, 35309, 35280, 35251, 35222, 35193, 35165, 35137, 35109, 35081, 35054, 35026,
34999, 34972, 34946, 34919, 34893, 34866, 34840, 34814, 34789, 34763, 34738, 34713, 34688, 34663, 34638, 34613,
34589, 34565, 34540, 34516, 34493, 34469, 34445, 34422, 34399, 34376, 34352, 34330, 34307, 34284, 34262, 34239,
34217, 34195, 34173, 34151, 34129, 34108, 34086, 34065, 34043, 34022, 34001, 33980, 33959, 33939, 33918, 33897,
33877, 33857, 33836, 33816, 33796, 33776, 33756, 33737, 33717, 33697, 33678, 33659, 33639, 33620, 33601, 33582,
33563, 33544, 33525, 33507, 33488, 33470, 33451, 33433, 33415, 33397, 33378, 33360, 33342, 33325, 33307, 33289,
33271, 33254, 33236, 33219, 33202, 33184, 33167, 33150, 33133, 33116, 33099, 33082, 33065, 33048, 33032, 33015,
32999, 32982, 32966, 32949, 32933, 32917, 32900, 32884, 32868, 32852, 32836, 32820, 32805, 32789, 32773, 32757,
32742, 32726, 32711, 32695, 32680, 32665, 32649, 32634, 32619, 32604, 32589, 32574, 32559, 32544, 32529, 32514,
32499, 32484, 32470, 32455, 32441, 32426, 32411, 32397, 32383, 32368, 32354, 32340, 32325, 32311, 32297, 32283,
32269, 32255, 32241, 32227, 32213, 32199, 32185, 32171, 32158, 32144, 32130, 32117, 32103, 32089, 32076, 32062,
32049, 32036, 32022, 32009, 31996, 31982, 31969, 31956, 31943, 31930, 31917, 31904, 31891, 31878, 31865, 31852,
31839, 31826, 31813, 31800, 31788, 31775, 31762, 31749, 31737, 31724, 31712, 31699, 31687, 31674, 31662, 31649,
31637, 31624, 31612, 31600, 31587, 31575, 31563, 31551, 31539, 31527, 31514, 31502, 31490, 31478, 31466, 31454,
31442, 31430, 31418, 31407, 31395, 31383, 31371, 31359, 31347, 31336, 31324, 31312, 31301, 31289, 31277, 31266,
31254, 31243, 31231, 31220, 31208, 31197, 31185, 31174, 31162, 31151, 31140, 31128, 31117, 31106, 31095, 31083,
31072, 31061, 31050, 31039, 31027, 31016, 31005, 30994, 30983, 30972, 30961, 30950, 30939, 30928, 30917, 30906,
30895, 30884, 30873, 30862, 30852, 30841, 30830, 30819, 30808, 30798, 30787, 30776, 30765, 30755, 30744, 30733,
30723, 30712, 30702, 30691, 30680, 30670, 30659, 30649, 30638, 30628, 30617, 30607, 30596, 30586, 30575, 30565,
30555, 30544, 30534, 30523, 30513, 30503, 30492, 30482, 30472, 30462, 30451, 30441, 30431, 30421, 30410, 30400,
30390, 30380, 30370, 30360, 30349, 30339, 30329, 30319, 30309, 30299, 30289, 30279, 30269, 30259, 30249, 30239,
30229, 30219, 30209, 30199, 30189, 30179, 30169, 30159, 30149, 30139, 30129, 30119, 30110, 30100, 30090, 30080,
30070, 30060, 30050, 30041, 30031, 30021, 30011, 30002, 29992, 29982, 29972, 29963, 29953, 29943, 29933, 29924,
29914, 29904, 29895, 29885, 29875, 29866, 29856, 29846, 29837, 29827, 29818, 29808, 29798, 29789, 29779, 29770,
29760, 29750, 29741, 29731, 29722, 29712, 29703, 29693, 29684, 29674, 29665, 29655, 29646, 29636, 29627, 29617,
29608, 29598, 29589, 29579, 29570, 29560, 29551, 29542, 29532, 29523, 29513, 29504, 29495, 29485, 29476, 29466,
29457, 29448, 29438, 29429, 29419, 29410, 29401, 29391, 29382, 29373, 29363, 29354, 29345, 29335, 29326, 29317,
29307, 29298, 29289, 29279, 29270, 29261, 29251, 29242, 29233, 29223, 29214, 29205, 29196, 29186, 29177, 29168,
29158, 29149, 29140, 29131, 29121, 29112, 29103, 29094, 29084, 29075, 29066, 29056, 29047, 29038, 29029, 29019,
29010, 29001, 28992, 28982, 28973, 28964, 28955, 28945, 28936, 28927, 28918, 28908, 28899, 28890, 28881, 28871,
28862, 28853, 28844, 28834, 28825, 28816, 28807, 28797, 28788, 28779, 28770, 28760, 28751, 28742, 28732, 28723,
28714, 28705, 28695, 28686, 28677, 28668, 28658, 28649, 28640, 28630, 28621, 28612, 28603, 28593, 28584, 28575,
28565, 28556, 28547, 28537, 28528, 28519, 28510, 28500, 28491, 28482, 28472, 28463, 28454, 28444, 28435, 28425,
28416, 28407, 28397, 28388, 28379, 28369, 28360, 28350, 28341, 28332, 28322, 28313, 28303, 28294, 28285, 28275,
28266, 28256, 28247, 28237, 28228, 28218, 28209, 28200, 28190, 28181, 28171, 28162, 28152, 28143, 28133, 28123,
28114, 28104, 28095, 28085, 28076, 28066, 28057, 28047, 28037, 28028, 28018, 28009, 27999, 27989, 27980, 27970,
27960, 27951, 27941, 27931, 27921, 27912, 27902, 27892, 27883, 27873, 27863, 27853, 27844, 27834, 27824, 27814,
27804, 27794, 27785, 27775, 27765, 27755, 27745, 27735, 27725, 27715, 27705, 27695, 27685, 27675, 27665, 27655,
27645, 27635, 27625, 27615, 27605, 27595, 27585, 27575, 27565, 27555, 27545, 27534, 27524, 27514, 27504, 27493,
27483, 27473, 27463, 27452, 27442, 27432, 27421, 27411, 27401, 27390, 27380, 27369, 27359, 27348, 27338, 27327,
27317, 27306, 27296, 27285, 27275, 27264, 27253, 27243, 27232, 27221, 27211, 27200, 27189, 27178, 27168, 27157,
27146, 27135, 27124, 27113, 27102, 27091, 27080, 27069, 27058, 27047, 27036, 27025, 27014, 27003, 26992, 26980,
26969, 26958, 26947, 26935, 26924, 26912, 26901, 26890, 26878, 26867, 26855, 26844, 26832, 26820, 26809, 26797,
26785, 26774, 26762, 26750, 26738, 26726, 26715, 26703, 26691, 26679, 26667, 26655, 26642, 26630, 26618, 26606,
26594, 26581, 26569, 26557, 26544, 26532, 26519, 26507, 26494, 26482, 26469, 26456, 26443, 26431, 26418, 26405,
26392, 26379, 26366, 26353, 26340, 26327, 26313, 26300, 26287, 26273, 26260, 26247, 26233, 26219, 26206, 26192,
26178, 26165, 26151, 26137, 26123, 26109, 26095, 26080, 26066, 26052, 26037, 26023, 26009, 25994, 25979, 25965,
25950, 25935, 25920, 25905, 25890, 25875, 25859, 25844, 25829, 25813, 25798, 25782, 25766, 25750, 25735, 25719,
25702, 25686, 25670, 25654, 25637, 25620, 25604, 25587, 25570, 25553, 25536, 25519, 25501, 25484, 25466, 25448,
25431, 25413, 25395, 25376, 25358, 25340, 25321, 25302, 25283, 25264, 25245, 25225, 25206, 25186, 25166, 25146,
25126, 25106, 25085, 25064, 25043, 25022, 25001, 24979, 24958, 24936, 24913, 24891, 24868, 24845, 24822, 24799,
24775, 24751, 24727, 24702, 24678, 24653, 24627, 24601, 24575, 24549, 24522, 24495, 24467, 24440, 24411, 24383,
24353, 24324, 24294, 24263, 24232, 24200, 24168, 24135, 24102, 24068, 24033, 23998, 23961, 23925, 23887, 23848,
23809, 23768, 23727, 23684, 23641, 23596, 23550, 23502, 23453, 23402, 23350, 23295, 23239, 23181, 23119, 23056,
22989, 22919, 22845, 22767, 22684, 22595, 22500, 22397, 22285, 22161, 22022, 21864, 21679, 21453, 21158, 20715

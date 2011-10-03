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


/** @file Denso-2k2Bias.h
 * @ingroup dataInitialisers
 *
 * Generated by FreeTherm 0.6 using the following parameters:
 *
 * Bias Resistor:
 * - Value: 2200
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


65535, 65535, 65535, 63204, 59652, 57166, 55286, 53793, 52564, 51527, 50635, 49854, 49163, 48544, 47985, 47476,
47010, 46580, 46182, 45812, 45467, 45143, 44839, 44552, 44280, 44023, 43779, 43546, 43324, 43113, 42910, 42715,
42529, 42349, 42177, 42011, 41850, 41695, 41546, 41401, 41261, 41125, 40993, 40865, 40741, 40620, 40502, 40388,
40277, 40168, 40062, 39959, 39859, 39760, 39664, 39570, 39478, 39388, 39300, 39214, 39130, 39047, 38966, 38887,
38809, 38733, 38658, 38584, 38512, 38441, 38371, 38302, 38235, 38169, 38104, 38039, 37976, 37914, 37853, 37793,
37733, 37675, 37617, 37561, 37505, 37449, 37395, 37341, 37288, 37236, 37185, 37134, 37084, 37034, 36985, 36937,
36889, 36842, 36796, 36750, 36704, 36659, 36615, 36571, 36528, 36485, 36442, 36400, 36359, 36318, 36277, 36237,
36197, 36158, 36119, 36080, 36042, 36004, 35967, 35930, 35893, 35856, 35820, 35785, 35749, 35714, 35680, 35645,
35611, 35577, 35544, 35511, 35478, 35445, 35413, 35381, 35349, 35317, 35286, 35255, 35224, 35194, 35163, 35133,
35103, 35074, 35044, 35015, 34986, 34958, 34929, 34901, 34873, 34845, 34817, 34790, 34763, 34736, 34709, 34682,
34655, 34629, 34603, 34577, 34551, 34526, 34500, 34475, 34450, 34425, 34400, 34375, 34351, 34326, 34302, 34278,
34254, 34231, 34207, 34184, 34160, 34137, 34114, 34091, 34068, 34046, 34023, 34001, 33979, 33957, 33935, 33913,
33891, 33869, 33848, 33826, 33805, 33784, 33763, 33742, 33721, 33701, 33680, 33659, 33639, 33619, 33599, 33578,
33558, 33539, 33519, 33499, 33480, 33460, 33441, 33421, 33402, 33383, 33364, 33345, 33326, 33307, 33289, 33270,
33252, 33233, 33215, 33197, 33178, 33160, 33142, 33124, 33106, 33089, 33071, 33053, 33036, 33018, 33001, 32984,
32966, 32949, 32932, 32915, 32898, 32881, 32864, 32847, 32831, 32814, 32798, 32781, 32765, 32748, 32732, 32716,
32699, 32683, 32667, 32651, 32635, 32619, 32604, 32588, 32572, 32556, 32541, 32525, 32510, 32494, 32479, 32464,
32448, 32433, 32418, 32403, 32388, 32373, 32358, 32343, 32328, 32313, 32299, 32284, 32269, 32255, 32240, 32225,
32211, 32197, 32182, 32168, 32154, 32139, 32125, 32111, 32097, 32083, 32069, 32055, 32041, 32027, 32013, 31999,
31986, 31972, 31958, 31944, 31931, 31917, 31904, 31890, 31877, 31863, 31850, 31837, 31823, 31810, 31797, 31784,
31771, 31757, 31744, 31731, 31718, 31705, 31692, 31679, 31667, 31654, 31641, 31628, 31615, 31603, 31590, 31577,
31565, 31552, 31540, 31527, 31515, 31502, 31490, 31477, 31465, 31453, 31440, 31428, 31416, 31404, 31391, 31379,
31367, 31355, 31343, 31331, 31319, 31307, 31295, 31283, 31271, 31259, 31247, 31235, 31224, 31212, 31200, 31188,
31177, 31165, 31153, 31142, 31130, 31118, 31107, 31095, 31084, 31072, 31061, 31049, 31038, 31027, 31015, 31004,
30993, 30981, 30970, 30959, 30948, 30936, 30925, 30914, 30903, 30892, 30881, 30869, 30858, 30847, 30836, 30825,
30814, 30803, 30792, 30781, 30770, 30760, 30749, 30738, 30727, 30716, 30705, 30695, 30684, 30673, 30662, 30652,
30641, 30630, 30620, 30609, 30598, 30588, 30577, 30567, 30556, 30546, 30535, 30525, 30514, 30504, 30493, 30483,
30472, 30462, 30451, 30441, 30431, 30420, 30410, 30400, 30389, 30379, 30369, 30359, 30348, 30338, 30328, 30318,
30308, 30297, 30287, 30277, 30267, 30257, 30247, 30237, 30227, 30216, 30206, 30196, 30186, 30176, 30166, 30156,
30146, 30136, 30126, 30116, 30107, 30097, 30087, 30077, 30067, 30057, 30047, 30037, 30028, 30018, 30008, 29998,
29988, 29978, 29969, 29959, 29949, 29939, 29930, 29920, 29910, 29901, 29891, 29881, 29872, 29862, 29852, 29843,
29833, 29823, 29814, 29804, 29795, 29785, 29775, 29766, 29756, 29747, 29737, 29728, 29718, 29709, 29699, 29690,
29680, 29671, 29661, 29652, 29642, 29633, 29623, 29614, 29604, 29595, 29586, 29576, 29567, 29557, 29548, 29539,
29529, 29520, 29510, 29501, 29492, 29482, 29473, 29464, 29454, 29445, 29436, 29426, 29417, 29408, 29399, 29389,
29380, 29371, 29361, 29352, 29343, 29334, 29324, 29315, 29306, 29297, 29287, 29278, 29269, 29260, 29251, 29241,
29232, 29223, 29214, 29205, 29195, 29186, 29177, 29168, 29159, 29150, 29140, 29131, 29122, 29113, 29104, 29095,
29086, 29076, 29067, 29058, 29049, 29040, 29031, 29022, 29013, 29003, 28994, 28985, 28976, 28967, 28958, 28949,
28940, 28931, 28922, 28912, 28903, 28894, 28885, 28876, 28867, 28858, 28849, 28840, 28831, 28822, 28813, 28803,
28794, 28785, 28776, 28767, 28758, 28749, 28740, 28731, 28722, 28713, 28704, 28695, 28686, 28676, 28667, 28658,
28649, 28640, 28631, 28622, 28613, 28604, 28595, 28586, 28577, 28568, 28559, 28549, 28540, 28531, 28522, 28513,
28504, 28495, 28486, 28477, 28468, 28459, 28449, 28440, 28431, 28422, 28413, 28404, 28395, 28386, 28377, 28368,
28358, 28349, 28340, 28331, 28322, 28313, 28304, 28294, 28285, 28276, 28267, 28258, 28249, 28240, 28230, 28221,
28212, 28203, 28194, 28185, 28175, 28166, 28157, 28148, 28139, 28129, 28120, 28111, 28102, 28092, 28083, 28074,
28065, 28055, 28046, 28037, 28028, 28018, 28009, 28000, 27990, 27981, 27972, 27963, 27953, 27944, 27935, 27925,
27916, 27906, 27897, 27888, 27878, 27869, 27860, 27850, 27841, 27831, 27822, 27812, 27803, 27794, 27784, 27775,
27765, 27756, 27746, 27737, 27727, 27718, 27708, 27699, 27689, 27679, 27670, 27660, 27651, 27641, 27631, 27622,
27612, 27603, 27593, 27583, 27574, 27564, 27554, 27544, 27535, 27525, 27515, 27505, 27496, 27486, 27476, 27466,
27456, 27447, 27437, 27427, 27417, 27407, 27397, 27387, 27377, 27367, 27357, 27347, 27337, 27327, 27317, 27307,
27297, 27287, 27277, 27267, 27257, 27247, 27237, 27227, 27216, 27206, 27196, 27186, 27175, 27165, 27155, 27145,
27134, 27124, 27114, 27103, 27093, 27082, 27072, 27061, 27051, 27041, 27030, 27019, 27009, 26998, 26988, 26977,
26966, 26956, 26945, 26934, 26924, 26913, 26902, 26891, 26881, 26870, 26859, 26848, 26837, 26826, 26815, 26804,
26793, 26782, 26771, 26760, 26749, 26738, 26726, 26715, 26704, 26693, 26681, 26670, 26659, 26647, 26636, 26624,
26613, 26601, 26590, 26578, 26567, 26555, 26543, 26532, 26520, 26508, 26496, 26485, 26473, 26461, 26449, 26437,
26425, 26413, 26401, 26388, 26376, 26364, 26352, 26340, 26327, 26315, 26302, 26290, 26277, 26265, 26252, 26240,
26227, 26214, 26201, 26189, 26176, 26163, 26150, 26137, 26124, 26111, 26097, 26084, 26071, 26058, 26044, 26031,
26017, 26004, 25990, 25976, 25963, 25949, 25935, 25921, 25907, 25893, 25879, 25865, 25851, 25836, 25822, 25808,
25793, 25778, 25764, 25749, 25734, 25719, 25704, 25689, 25674, 25659, 25644, 25628, 25613, 25597, 25582, 25566,
25550, 25534, 25518, 25502, 25486, 25470, 25453, 25437, 25420, 25404, 25387, 25370, 25353, 25336, 25318, 25301,
25284, 25266, 25248, 25230, 25212, 25194, 25176, 25157, 25139, 25120, 25101, 25082, 25063, 25044, 25024, 25005,
24985, 24965, 24944, 24924, 24904, 24883, 24862, 24841, 24819, 24798, 24776, 24754, 24732, 24709, 24686, 24663,
24640, 24617, 24593, 24569, 24545, 24520, 24495, 24470, 24444, 24418, 24392, 24365, 24338, 24311, 24283, 24255,
24226, 24197, 24168, 24138, 24107, 24076, 24044, 24012, 23979, 23946, 23912, 23877, 23842, 23805, 23768, 23731,
23692, 23652, 23611, 23570, 23527, 23483, 23437, 23391, 23343, 23293, 23241, 23188, 23133, 23075, 23015, 22953,
22887, 22819, 22746, 22670, 22588, 22501, 22408, 22307, 22197, 22075, 21939, 21784, 21602, 21381, 21093, 20659

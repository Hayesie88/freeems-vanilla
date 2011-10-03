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


/** @file BoschM12H-2k4Bias.h
 * @ingroup dataInitialisers
 *
 * Generated by FreeTherm 0.7-SNAPSHOT using the following parameters:
 *
 * Bias Resistor:
 * - Value: 2400
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


65535, 65170, 58383, 55016, 52845, 51271, 50049, 49057, 48228, 47517, 46897, 46349, 45858, 45415, 45012, 44642,
44300, 43984, 43689, 43413, 43154, 42910, 42680, 42461, 42254, 42057, 41869, 41689, 41517, 41352, 41194, 41042,
40895, 40754, 40617, 40486, 40358, 40235, 40115, 40000, 39887, 39778, 39672, 39568, 39468, 39370, 39274, 39181,
39090, 39001, 38915, 38830, 38747, 38666, 38587, 38509, 38433, 38359, 38286, 38214, 38144, 38075, 38007, 37941,
37876, 37812, 37749, 37687, 37626, 37566, 37507, 37449, 37392, 37336, 37280, 37226, 37172, 37119, 37067, 37016,
36965, 36915, 36865, 36817, 36769, 36721, 36675, 36628, 36583, 36538, 36493, 36449, 36406, 36363, 36320, 36279,
36237, 36196, 36156, 36116, 36076, 36037, 35998, 35960, 35922, 35884, 35847, 35810, 35773, 35737, 35702, 35666,
35631, 35596, 35562, 35528, 35494, 35461, 35428, 35395, 35362, 35330, 35298, 35266, 35235, 35204, 35173, 35142,
35112, 35081, 35052, 35022, 34992, 34963, 34934, 34906, 34877, 34849, 34821, 34793, 34765, 34738, 34710, 34683,
34656, 34630, 34603, 34577, 34551, 34525, 34499, 34473, 34448, 34423, 34398, 34373, 34348, 34323, 34299, 34275,
34251, 34227, 34203, 34179, 34156, 34132, 34109, 34086, 34063, 34040, 34017, 33995, 33972, 33950, 33928, 33906,
33884, 33862, 33840, 33819, 33797, 33776, 33755, 33734, 33713, 33692, 33671, 33650, 33630, 33609, 33589, 33569,
33549, 33529, 33509, 33489, 33469, 33450, 33430, 33411, 33391, 33372, 33353, 33334, 33315, 33296, 33277, 33258,
33240, 33221, 33203, 33184, 33166, 33148, 33130, 33111, 33094, 33076, 33058, 33040, 33022, 33005, 32987, 32970,
32952, 32935, 32918, 32901, 32883, 32866, 32849, 32833, 32816, 32799, 32782, 32766, 32749, 32733, 32716, 32700,
32683, 32667, 32651, 32635, 32619, 32603, 32587, 32571, 32555, 32539, 32523, 32508, 32492, 32476, 32461, 32445,
32430, 32415, 32399, 32384, 32369, 32354, 32339, 32324, 32309, 32294, 32279, 32264, 32249, 32234, 32220, 32205,
32190, 32176, 32161, 32147, 32132, 32118, 32103, 32089, 32075, 32061, 32046, 32032, 32018, 32004, 31990, 31976,
31962, 31948, 31934, 31921, 31907, 31893, 31879, 31866, 31852, 31838, 31825, 31811, 31798, 31784, 31771, 31758,
31744, 31731, 31718, 31704, 31691, 31678, 31665, 31652, 31639, 31626, 31613, 31600, 31587, 31574, 31561, 31548,
31535, 31522, 31510, 31497, 31484, 31472, 31459, 31446, 31434, 31421, 31409, 31396, 31384, 31371, 31359, 31346,
31334, 31322, 31309, 31297, 31285, 31273, 31260, 31248, 31236, 31224, 31212, 31200, 31188, 31176, 31164, 31152,
31140, 31128, 31116, 31104, 31092, 31080, 31069, 31057, 31045, 31033, 31022, 31010, 30998, 30987, 30975, 30963,
30952, 30940, 30929, 30917, 30906, 30894, 30883, 30871, 30860, 30848, 30837, 30826, 30814, 30803, 30792, 30780,
30769, 30758, 30747, 30735, 30724, 30713, 30702, 30691, 30680, 30668, 30657, 30646, 30635, 30624, 30613, 30602,
30591, 30580, 30569, 30558, 30547, 30536, 30526, 30515, 30504, 30493, 30482, 30471, 30461, 30450, 30439, 30428,
30417, 30407, 30396, 30385, 30375, 30364, 30353, 30343, 30332, 30321, 30311, 30300, 30290, 30279, 30269, 30258,
30247, 30237, 30226, 30216, 30206, 30195, 30185, 30174, 30164, 30153, 30143, 30133, 30122, 30112, 30101, 30091,
30081, 30070, 30060, 30050, 30040, 30029, 30019, 30009, 29998, 29988, 29978, 29968, 29958, 29947, 29937, 29927,
29917, 29907, 29897, 29886, 29876, 29866, 29856, 29846, 29836, 29826, 29816, 29806, 29796, 29786, 29775, 29765,
29755, 29745, 29735, 29725, 29715, 29705, 29695, 29685, 29675, 29666, 29656, 29646, 29636, 29626, 29616, 29606,
29596, 29586, 29576, 29566, 29556, 29547, 29537, 29527, 29517, 29507, 29497, 29487, 29478, 29468, 29458, 29448,
29438, 29429, 29419, 29409, 29399, 29389, 29380, 29370, 29360, 29350, 29340, 29331, 29321, 29311, 29301, 29292,
29282, 29272, 29263, 29253, 29243, 29233, 29224, 29214, 29204, 29195, 29185, 29175, 29165, 29156, 29146, 29136,
29127, 29117, 29107, 29098, 29088, 29078, 29069, 29059, 29049, 29040, 29030, 29020, 29011, 29001, 28992, 28982,
28972, 28963, 28953, 28943, 28934, 28924, 28914, 28905, 28895, 28886, 28876, 28866, 28857, 28847, 28837, 28828,
28818, 28809, 28799, 28789, 28780, 28770, 28760, 28751, 28741, 28732, 28722, 28712, 28703, 28693, 28683, 28674,
28664, 28655, 28645, 28635, 28626, 28616, 28606, 28597, 28587, 28578, 28568, 28558, 28549, 28539, 28529, 28520,
28510, 28500, 28491, 28481, 28472, 28462, 28452, 28443, 28433, 28423, 28414, 28404, 28394, 28385, 28375, 28365,
28355, 28346, 28336, 28326, 28317, 28307, 28297, 28288, 28278, 28268, 28258, 28249, 28239, 28229, 28219, 28210,
28200, 28190, 28180, 28171, 28161, 28151, 28141, 28132, 28122, 28112, 28102, 28092, 28083, 28073, 28063, 28053,
28043, 28033, 28024, 28014, 28004, 27994, 27984, 27974, 27964, 27954, 27945, 27935, 27925, 27915, 27905, 27895,
27885, 27875, 27865, 27855, 27845, 27835, 27825, 27815, 27805, 27795, 27785, 27775, 27765, 27755, 27745, 27735,
27725, 27715, 27705, 27694, 27684, 27674, 27664, 27654, 27644, 27634, 27623, 27613, 27603, 27593, 27583, 27572,
27562, 27552, 27542, 27531, 27521, 27511, 27500, 27490, 27480, 27469, 27459, 27449, 27438, 27428, 27417, 27407,
27397, 27386, 27376, 27365, 27355, 27344, 27334, 27323, 27312, 27302, 27291, 27281, 27270, 27259, 27249, 27238,
27227, 27217, 27206, 27195, 27185, 27174, 27163, 27152, 27141, 27131, 27120, 27109, 27098, 27087, 27076, 27065,
27054, 27043, 27032, 27021, 27010, 26999, 26988, 26977, 26966, 26955, 26944, 26933, 26921, 26910, 26899, 26888,
26877, 26865, 26854, 26843, 26831, 26820, 26808, 26797, 26786, 26774, 26763, 26751, 26739, 26728, 26716, 26705,
26693, 26681, 26670, 26658, 26646, 26634, 26623, 26611, 26599, 26587, 26575, 26563, 26551, 26539, 26527, 26515,
26503, 26491, 26479, 26467, 26454, 26442, 26430, 26417, 26405, 26393, 26380, 26368, 26355, 26343, 26330, 26318,
26305, 26293, 26280, 26267, 26254, 26242, 26229, 26216, 26203, 26190, 26177, 26164, 26151, 26138, 26125, 26111,
26098, 26085, 26072, 26058, 26045, 26031, 26018, 26004, 25991, 25977, 25963, 25950, 25936, 25922, 25908, 25894,
25880, 25866, 25852, 25838, 25824, 25810, 25795, 25781, 25767, 25752, 25738, 25723, 25708, 25694, 25679, 25664,
25649, 25634, 25619, 25604, 25589, 25574, 25559, 25543, 25528, 25513, 25497, 25481, 25466, 25450, 25434, 25418,
25402, 25386, 25370, 25354, 25338, 25321, 25305, 25288, 25272, 25255, 25238, 25221, 25204, 25187, 25170, 25153,
25135, 25118, 25100, 25083, 25065, 25047, 25029, 25011, 24993, 24974, 24956, 24937, 24919, 24900, 24881, 24862,
24843, 24824, 24804, 24785, 24765, 24745, 24725, 24705, 24685, 24665, 24644, 24624, 24603, 24582, 24561, 24539,
24518, 24496, 24474, 24452, 24430, 24408, 24385, 24362, 24339, 24316, 24293, 24269, 24245, 24221, 24197, 24173,
24148, 24123, 24098, 24072, 24046, 24020, 23994, 23967, 23941, 23913, 23886, 23858, 23830, 23801, 23773, 23744,
23714, 23684, 23654, 23623, 23592, 23560, 23528, 23496, 23463, 23430, 23396, 23361, 23326, 23291, 23255, 23218,
23181, 23143, 23104, 23064, 23024, 22983, 22942, 22899, 22856, 22811, 22766, 22720, 22672, 22624, 22574, 22523,
22470, 22416, 22361, 22304, 22246, 22185, 22123, 22058, 21991, 21922, 21850, 21775, 21697, 21616, 21530, 21441,
21346, 21247, 21141, 21028, 20908, 20778, 20637, 20483, 20314, 20124, 19908, 19657, 19356, 18977, 18462, 17625

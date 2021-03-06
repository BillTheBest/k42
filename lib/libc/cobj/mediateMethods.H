#ifndef __MEDIATE_METHODS_H_
#define __MEDIATE_METHODS_H_
/******************************************************************************
 * K42: (C) Copyright IBM Corp. 2000.
 * All Rights Reserved
 *
 * This file is distributed under the GNU LGPL. You should have
 * received a copy of the license along with K42; see the file LICENSE.html
 * in the top-level directory for more details.
 *
 * $Id: mediateMethods.H,v 1.5 2001/10/05 21:47:24 peterson Exp $
 *****************************************************************************/

#define MEDIATE_METHOD_DEC(OP) \
         extern "C" SysStatus mediateMethod ## OP (uval ths, ...)

MEDIATE_METHOD_DEC(0);
MEDIATE_METHOD_DEC(1);
MEDIATE_METHOD_DEC(2);
MEDIATE_METHOD_DEC(3);
MEDIATE_METHOD_DEC(4);
MEDIATE_METHOD_DEC(5);
MEDIATE_METHOD_DEC(6);
MEDIATE_METHOD_DEC(7);
MEDIATE_METHOD_DEC(8);
MEDIATE_METHOD_DEC(9);

MEDIATE_METHOD_DEC(10);
MEDIATE_METHOD_DEC(11);
MEDIATE_METHOD_DEC(12);
MEDIATE_METHOD_DEC(13);
MEDIATE_METHOD_DEC(14);
MEDIATE_METHOD_DEC(15);
MEDIATE_METHOD_DEC(16);
MEDIATE_METHOD_DEC(17);
MEDIATE_METHOD_DEC(18);
MEDIATE_METHOD_DEC(19);

MEDIATE_METHOD_DEC(20);
MEDIATE_METHOD_DEC(21);
MEDIATE_METHOD_DEC(22);
MEDIATE_METHOD_DEC(23);
MEDIATE_METHOD_DEC(24);
MEDIATE_METHOD_DEC(25);
MEDIATE_METHOD_DEC(26);
MEDIATE_METHOD_DEC(27);
MEDIATE_METHOD_DEC(28);
MEDIATE_METHOD_DEC(29);

MEDIATE_METHOD_DEC(30);
MEDIATE_METHOD_DEC(31);
MEDIATE_METHOD_DEC(32);
MEDIATE_METHOD_DEC(33);
MEDIATE_METHOD_DEC(34);
MEDIATE_METHOD_DEC(35);
MEDIATE_METHOD_DEC(36);
MEDIATE_METHOD_DEC(37);
MEDIATE_METHOD_DEC(38);
MEDIATE_METHOD_DEC(39);

MEDIATE_METHOD_DEC(40);
MEDIATE_METHOD_DEC(41);
MEDIATE_METHOD_DEC(42);
MEDIATE_METHOD_DEC(43);
MEDIATE_METHOD_DEC(44);
MEDIATE_METHOD_DEC(45);
MEDIATE_METHOD_DEC(46);
MEDIATE_METHOD_DEC(47);
MEDIATE_METHOD_DEC(48);
MEDIATE_METHOD_DEC(49);

MEDIATE_METHOD_DEC(50);
MEDIATE_METHOD_DEC(51);
MEDIATE_METHOD_DEC(52);
MEDIATE_METHOD_DEC(53);
MEDIATE_METHOD_DEC(54);
MEDIATE_METHOD_DEC(55);
MEDIATE_METHOD_DEC(56);
MEDIATE_METHOD_DEC(57);
MEDIATE_METHOD_DEC(58);
MEDIATE_METHOD_DEC(59);

MEDIATE_METHOD_DEC(60);
MEDIATE_METHOD_DEC(61);
MEDIATE_METHOD_DEC(62);
MEDIATE_METHOD_DEC(63);
MEDIATE_METHOD_DEC(64);
MEDIATE_METHOD_DEC(65);
MEDIATE_METHOD_DEC(66);
MEDIATE_METHOD_DEC(67);
MEDIATE_METHOD_DEC(68);
MEDIATE_METHOD_DEC(69);

MEDIATE_METHOD_DEC(70);
MEDIATE_METHOD_DEC(71);
MEDIATE_METHOD_DEC(72);
MEDIATE_METHOD_DEC(73);
MEDIATE_METHOD_DEC(74);
MEDIATE_METHOD_DEC(75);
MEDIATE_METHOD_DEC(76);
MEDIATE_METHOD_DEC(77);
MEDIATE_METHOD_DEC(78);
MEDIATE_METHOD_DEC(79);

MEDIATE_METHOD_DEC(80);
MEDIATE_METHOD_DEC(81);
MEDIATE_METHOD_DEC(82);
MEDIATE_METHOD_DEC(83);
MEDIATE_METHOD_DEC(84);
MEDIATE_METHOD_DEC(85);
MEDIATE_METHOD_DEC(86);
MEDIATE_METHOD_DEC(87);
MEDIATE_METHOD_DEC(88);
MEDIATE_METHOD_DEC(89);

MEDIATE_METHOD_DEC(90);
MEDIATE_METHOD_DEC(91);
MEDIATE_METHOD_DEC(92);
MEDIATE_METHOD_DEC(93);
MEDIATE_METHOD_DEC(94);
MEDIATE_METHOD_DEC(95);
MEDIATE_METHOD_DEC(96);
MEDIATE_METHOD_DEC(97);
MEDIATE_METHOD_DEC(98);
MEDIATE_METHOD_DEC(99);

MEDIATE_METHOD_DEC(100);
MEDIATE_METHOD_DEC(101);
MEDIATE_METHOD_DEC(102);
MEDIATE_METHOD_DEC(103);
MEDIATE_METHOD_DEC(104);
MEDIATE_METHOD_DEC(105);
MEDIATE_METHOD_DEC(106);
MEDIATE_METHOD_DEC(107);
MEDIATE_METHOD_DEC(108);
MEDIATE_METHOD_DEC(109);

MEDIATE_METHOD_DEC(110);
MEDIATE_METHOD_DEC(111);
MEDIATE_METHOD_DEC(112);
MEDIATE_METHOD_DEC(113);
MEDIATE_METHOD_DEC(114);
MEDIATE_METHOD_DEC(115);
MEDIATE_METHOD_DEC(116);
MEDIATE_METHOD_DEC(117);
MEDIATE_METHOD_DEC(118);
MEDIATE_METHOD_DEC(119);

MEDIATE_METHOD_DEC(120);
MEDIATE_METHOD_DEC(121);
MEDIATE_METHOD_DEC(122);
MEDIATE_METHOD_DEC(123);
MEDIATE_METHOD_DEC(124);
MEDIATE_METHOD_DEC(125);
MEDIATE_METHOD_DEC(126);
MEDIATE_METHOD_DEC(127);
MEDIATE_METHOD_DEC(128);
MEDIATE_METHOD_DEC(129);

MEDIATE_METHOD_DEC(130);
MEDIATE_METHOD_DEC(131);
MEDIATE_METHOD_DEC(132);
MEDIATE_METHOD_DEC(133);
MEDIATE_METHOD_DEC(134);
MEDIATE_METHOD_DEC(135);
MEDIATE_METHOD_DEC(136);
MEDIATE_METHOD_DEC(137);
MEDIATE_METHOD_DEC(138);
MEDIATE_METHOD_DEC(139);

MEDIATE_METHOD_DEC(140);
MEDIATE_METHOD_DEC(141);
MEDIATE_METHOD_DEC(142);
MEDIATE_METHOD_DEC(143);
MEDIATE_METHOD_DEC(144);
MEDIATE_METHOD_DEC(145);
MEDIATE_METHOD_DEC(146);
MEDIATE_METHOD_DEC(147);
MEDIATE_METHOD_DEC(148);
MEDIATE_METHOD_DEC(149);

MEDIATE_METHOD_DEC(150);
MEDIATE_METHOD_DEC(151);
MEDIATE_METHOD_DEC(152);
MEDIATE_METHOD_DEC(153);
MEDIATE_METHOD_DEC(154);
MEDIATE_METHOD_DEC(155);
MEDIATE_METHOD_DEC(156);
MEDIATE_METHOD_DEC(157);
MEDIATE_METHOD_DEC(158);
MEDIATE_METHOD_DEC(159);

MEDIATE_METHOD_DEC(160);
MEDIATE_METHOD_DEC(161);
MEDIATE_METHOD_DEC(162);
MEDIATE_METHOD_DEC(163);
MEDIATE_METHOD_DEC(164);
MEDIATE_METHOD_DEC(165);
MEDIATE_METHOD_DEC(166);
MEDIATE_METHOD_DEC(167);
MEDIATE_METHOD_DEC(168);
MEDIATE_METHOD_DEC(169);

MEDIATE_METHOD_DEC(170);
MEDIATE_METHOD_DEC(171);
MEDIATE_METHOD_DEC(172);
MEDIATE_METHOD_DEC(173);
MEDIATE_METHOD_DEC(174);
MEDIATE_METHOD_DEC(175);
MEDIATE_METHOD_DEC(176);
MEDIATE_METHOD_DEC(177);
MEDIATE_METHOD_DEC(178);
MEDIATE_METHOD_DEC(179);

MEDIATE_METHOD_DEC(180);
MEDIATE_METHOD_DEC(181);
MEDIATE_METHOD_DEC(182);
MEDIATE_METHOD_DEC(183);
MEDIATE_METHOD_DEC(184);
MEDIATE_METHOD_DEC(185);
MEDIATE_METHOD_DEC(186);
MEDIATE_METHOD_DEC(187);
MEDIATE_METHOD_DEC(188);
MEDIATE_METHOD_DEC(189);

MEDIATE_METHOD_DEC(190);
MEDIATE_METHOD_DEC(191);
MEDIATE_METHOD_DEC(192);
MEDIATE_METHOD_DEC(193);
MEDIATE_METHOD_DEC(194);
MEDIATE_METHOD_DEC(195);
MEDIATE_METHOD_DEC(196);
MEDIATE_METHOD_DEC(197);
MEDIATE_METHOD_DEC(198);
MEDIATE_METHOD_DEC(199);

MEDIATE_METHOD_DEC(200);
MEDIATE_METHOD_DEC(201);
MEDIATE_METHOD_DEC(202);
MEDIATE_METHOD_DEC(203);
MEDIATE_METHOD_DEC(204);
MEDIATE_METHOD_DEC(205);
MEDIATE_METHOD_DEC(206);
MEDIATE_METHOD_DEC(207);
MEDIATE_METHOD_DEC(208);
MEDIATE_METHOD_DEC(209);

MEDIATE_METHOD_DEC(210);
MEDIATE_METHOD_DEC(211);
MEDIATE_METHOD_DEC(212);
MEDIATE_METHOD_DEC(213);
MEDIATE_METHOD_DEC(214);
MEDIATE_METHOD_DEC(215);
MEDIATE_METHOD_DEC(216);
MEDIATE_METHOD_DEC(217);
MEDIATE_METHOD_DEC(218);
MEDIATE_METHOD_DEC(219);

MEDIATE_METHOD_DEC(220);
MEDIATE_METHOD_DEC(221);
MEDIATE_METHOD_DEC(222);
MEDIATE_METHOD_DEC(223);
MEDIATE_METHOD_DEC(224);
MEDIATE_METHOD_DEC(225);
MEDIATE_METHOD_DEC(226);
MEDIATE_METHOD_DEC(227);
MEDIATE_METHOD_DEC(228);
MEDIATE_METHOD_DEC(229);

MEDIATE_METHOD_DEC(230);
MEDIATE_METHOD_DEC(231);
MEDIATE_METHOD_DEC(232);
MEDIATE_METHOD_DEC(233);
MEDIATE_METHOD_DEC(234);
MEDIATE_METHOD_DEC(235);
MEDIATE_METHOD_DEC(236);
MEDIATE_METHOD_DEC(237);
MEDIATE_METHOD_DEC(238);
MEDIATE_METHOD_DEC(239);

MEDIATE_METHOD_DEC(240);
MEDIATE_METHOD_DEC(241);
MEDIATE_METHOD_DEC(242);
MEDIATE_METHOD_DEC(243);
MEDIATE_METHOD_DEC(244);
MEDIATE_METHOD_DEC(245);
MEDIATE_METHOD_DEC(246);
MEDIATE_METHOD_DEC(247);
MEDIATE_METHOD_DEC(248);
MEDIATE_METHOD_DEC(249);

MEDIATE_METHOD_DEC(250);
MEDIATE_METHOD_DEC(251);
MEDIATE_METHOD_DEC(252);
MEDIATE_METHOD_DEC(253);
MEDIATE_METHOD_DEC(254);
MEDIATE_METHOD_DEC(255);

#endif /* #ifndef __MEDIATE_METHODS_H_ */

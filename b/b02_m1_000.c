section "b02_m1_000"{
    Message_PauseSkinship();
    if (Date_GetDateOption(3) == 13){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0201000_A02400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That's...");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's the present I got from you,\n｛Saeki＊＊｝.\nI wore it right away!");
        Character_ChFace(1, 0, 10);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0201000_A02500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah, I see...\nIt's not a big deal, though.\nWell, I'm glad you like it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ looks happy.\nI'm glad I wore this!)");
        Parameter_AddCh1Param(1, 61, 2);
        Parameter_AddCh1Param(1, 60, 1);
        Parameter_AddCh1Param(1, 62, #2);
        }
    else if ((Parameter_ChkPlayer(15) == 1) && (Date_Get_Date_Place2() == 5)){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0201000_A02800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey you, that's...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, a yukata.\nI wonder how it looks.");
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0201000_A02900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Ah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "How is it?");
        Character_ChFace(1, 2, 3);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0201000_A03000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Yeah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you not like it that much?");
        Character_ChFace(1, 0, 10);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0201000_A03100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I like it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Thank gosh.\nIt seems like ｛Saeki＊＊｝\nlikes it!)");
        Parameter_AddCh1Param(1, 61, 5);
        Parameter_AddCh1Param(1, 60, 1);
        Parameter_AddCh1Param(1, 62, #2);
        }
    else if (Date_GetDateOption(3) == 14){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0201000_A02600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I think that it's bad if I meddle in\nthis sort of thing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(1, 2, 5);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 1);
        Voice_PlayVoice("B0201000_A02700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You wore the same thing last time.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap! T-This is so embarrassing...)");
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, #1);
        Parameter_AddCh1Param(1, 62, 2);
        }
    else if (Date_GetDateOption(3) == 8){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0201000_A01600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "What's wrong, ｛Saeki＊＊｝?");
        Character_ChFace(1, 2, 1);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0201000_A01700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I dare not meddle with this stuff,\nbut do you plan on wearing that for\nthe whole day?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm...\nAs expected, this was a weird\ncombination of clothing.)");
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, #1);
        Parameter_AddCh1Param(1, 62, 2);
        }
    else if (Date_GetDateOption(3) == 6){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0201000_A01000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey, you...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes?");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0201000_A01100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Why are you wearing such thick\nclothes?\nAh, are you trying to look thinner\nby wearing those?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like the clothes I am\nwearing are a little too thick...)");
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, #1);
        Parameter_AddCh1Param(1, 62, 2);
        }
    else if (Date_GetDateOption(3) == 7){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0201000_A01200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey, you...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes?");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0201000_A01300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Aren't you cold?\nAh, are you worried about wearing\nclothes that will make you look fat?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uh...\nIt seems like I dressed too\nlightly...)");
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, #1);
        Parameter_AddCh1Param(1, 62, 2);
        }
    else if (Date_GetDateOption(3) == 9){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0201000_A01400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Hey.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(1, 2, 1);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0201000_A01500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's weird, isn't it?\nThat combination.\nTo the point that I hesitate to\nmeddle.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap, I screwed up the combination\nof clothes I'm wearing!)");
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, #1);
        Parameter_AddCh1Param(1, 62, 2);
        }
    else if (Date_GetDateOption(3) == 5){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0201000_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey you, that appearance...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, these clothes? Are they weird?");
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0201000_A00900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "No, you're weird.\nThe clothes are normal.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uh...\nI should have worn other clothes.)");
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, 1);
        }
    else if (Date_GetDateOption(3) == 1){
        Voice_PlayVoice("B0201000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That clothing is...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? This clothing?");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0201000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. I kind of really...\nHow should I put it? I... like it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Saeki＊＊｝!)");
        Parameter_AddCh1Param(1, 61, 2);
        Parameter_AddCh1Param(1, 60, 1);
        Parameter_AddCh1Param(1, 62, #2);
        }
    else if (Date_GetDateOption(3) == 2){
        Voice_PlayVoice("B0201000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That clothing is...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? This clothing?");
        Character_ChFace(1, 0, 10);
        Voice_PlayVoice("B0201000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. It relatively suits you.\nSo you can also pull off that style.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like ｛Saeki＊＊｝\nlikes these clothes!)");
        Parameter_AddCh1Param(1, 61, 1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, #1);
        }
    else if (Date_GetDateOption(3) == 3){
        Voice_PlayVoice("B0201000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That color. It's nice.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? This color?");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0201000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah.\nI have quite a few of the same\ncolored clothes.\nIt suits you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Eh, so ｛Saeki＊＊｝ likes\nlight blue...)");
        Parameter_AddCh1Param(1, 61, 1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, #1);
        }
    else if (Date_GetDateOption(3) == 10){
        Voice_PlayVoice("B0201000_A01800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That's the latest trend, isn't it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.\nMy ｛流行服名｝, right?");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0201000_A01900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. I think it suits you.\nAs expected.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I'm glad I checked the trends!)");
        Parameter_AddCh1Param(1, 61, 1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, #1);
        }
    else if (Date_GetDateOption(3) == 11){
        Voice_PlayVoice("B0201000_A02000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, that color...\nAs I thought, it's the latest trend.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, the color of this clothing?");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0201000_A02100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah.\nI've been seeing that color often\nlately.\nBut it's nice, looking at it from up\nclose.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I was complimented by\n｛Saeki＊＊｝!)");
        Parameter_AddCh1Param(1, 61, 1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, #1);
        }
    else if (Date_GetDateOption(3) == 12){
        Voice_PlayVoice("B0201000_A02200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I've been seeing that a lot lately.");
        Message_Who(0);
        Message_MsgDisp("主人公", "My ｛流行アクセサリ名｝?");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0201000_A02300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. Eh... It also suits you.\nAs expected of the latest trends.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay!\nIt seems like ｛Saeki＊＊｝\nlikes this.)");
        Parameter_AddCh1Param(1, 61, 1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, #1);
        }
    else if (Date_GetDateOption(3) == 0){
        }
    Message_ResumeSkinship();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

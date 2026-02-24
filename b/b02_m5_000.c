section "b02_m5_000"{
    Message_PauseSkinship();
    if (Date_GetDateOption(3) == 13){
        Character_ChFace(1, 0, 3);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0205000_E03000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That's...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hehe, did you notice?\nI wore the present you gave me,\n｛Chris＊＊｝!");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0205000_E03100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wah～, it's better than I thought.\nIt really suits you! And also...");
        Message_Who(0);
        Message_MsgDisp("主人公", "And also?");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 2, (#1), 2);
        Voice_PlayVoice("B0205000_E03200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's really cute.\nThanks for wearing it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Chris＊＊｝ looks really\nhappy.\nI'm glad I wore it!)");
        Parameter_AddCh1Param(5, 61, 2);
        Parameter_AddCh1Param(5, 60, 1);
        Parameter_AddCh1Param(5, 62, #2);
        }
    else if ((Parameter_ChkPlayer(15) == 1) && (Date_Get_Date_Place2() == 5)){
        Character_ChFace(1, 0, 11);
        Voice_PlayVoice("B0205000_E03500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "............");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hehe, I'm wearing a yukata.\nHow does it look?");
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 4);
        Voice_PlayVoice("B0205000_E03600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... This is bad～.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh! It doesn't suit me...?");
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0205000_E03700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I can't look away...\nI can't even blink...\nYou're so cute...");
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0205000_E03800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I won't be able to watch the\nfireworks at this rate.\nWhat should I do～?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Thank gosh, it seems like\n｛Chris＊＊｝ likes this!)");
        Parameter_AddCh1Param(5, 61, 5);
        Parameter_AddCh1Param(5, 60, 1);
        Parameter_AddCh1Param(5, 62, #2);
        }
    else if (Date_GetDateOption(3) == 14){
        Character_ChFace(1, 0, 3);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0205000_E03300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Do you love those clothes?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? Why?");
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0205000_E03400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Hm? Uhh...\nIt's fine if you like it.\nYeah, don't worry.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap, I wore the same clothes as I\ndid last time...)");
        Parameter_AddCh1Param(5, 61, #1);
        Parameter_AddCh1Param(5, 60, #1);
        Parameter_AddCh1Param(5, 62, 2);
        }
    else if (Date_GetDateOption(3) == 8){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0205000_E02100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Where's the event hall?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, event hall?");
        Character_ChFace(1, 0, 10);
        Voice_PlayVoice("B0205000_E02200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "For the costume party.\nThat has to be the only reason why\nyou're wearing that.");
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0205000_E02300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "If you had told me, I also would\nhave come dressed up...\nHow cold.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap, it seems like I look\nweird...)");
        Parameter_AddCh1Param(5, 61, #1);
        Parameter_AddCh1Param(5, 60, #1);
        Parameter_AddCh1Param(5, 62, 2);
        }
    else if (Date_GetDateOption(3) == 6){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0205000_E01300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Are you cold?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(5, 2, (#1), 2);
        Voice_PlayVoice("B0205000_E01400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Or do your perhaps have a fever?\nIt's bad to overdo it～.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like the clothes I am\nwearing are a little too thick...)");
        Parameter_AddCh1Param(5, 61, #1);
        Parameter_AddCh1Param(5, 60, #1);
        Parameter_AddCh1Param(5, 62, 2);
        }
    else if (Date_GetDateOption(3) == 7){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0205000_E01500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "...\nAre you really sensitive to heat?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_BlinkStart(5, 2, (#1), 2);
        Voice_PlayVoice("B0205000_E01600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The design is cute and I like girls\nwearing that kind of clothing,\nbut...");
        Character_ChFace(1, 0, 9);
        Voice_PlayVoice("B0205000_E01700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'll worry if you catch a cold.\nShould I give you my jacket?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like I'm too lightly\ndressed...)");
        Parameter_AddCh1Param(5, 61, #1);
        Parameter_AddCh1Param(5, 60, #1);
        Parameter_AddCh1Param(5, 62, 2);
        }
    else if (Date_GetDateOption(3) == 9){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 1);
        Character_ChFace(1, 7, 1);
        Voice_PlayVoice("B0205000_E01800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hm.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... What's wrong?");
        Character_ChFace(1, 7, 0);
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 3, 1);
        Voice_PlayVoice("B0205000_E01900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What is it...\nYou have this kind of mismatched\nfeel about you today.");
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(5, 3, (#1), 2);
        Character_ChFace(1, 3, 4);
        Voice_PlayVoice("B0205000_E02000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "When I see you, my eyes are\nblinded...\nHow strange.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nDid I fail at coordinating my\nclothes?)");
        Parameter_AddCh1Param(5, 61, #1);
        Parameter_AddCh1Param(5, 60, #1);
        Parameter_AddCh1Param(5, 62, 2);
        }
    else if (Date_GetDateOption(3) == 5){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 2);
        Character_ChFace(1, 7, 1);
        Voice_PlayVoice("B0205000_E01100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Hmm? Hmmm?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, what is it? Is something wrong?");
        Character_ChFace(1, 7, 0);
        Character_ChFace(1, 2, 1);
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0205000_E01200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Right... It might not suit you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm.\nI should have worn other clothes.)");
        Parameter_AddCh1Param(5, 61, #1);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, 1);
        }
    else if (Date_GetDateOption(3) == 1){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 4);
        Character_ChFace(1, 7, 3);
        Voice_PlayVoice("B0205000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wah...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, what is it?\nIs there something strange about\nthese clothes?");
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Character_ChFace(1, 7, 0);
        Voice_PlayVoice("B0205000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I was shocked, because you're\nreally, really cute.");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 3, (#1), 2);
        Voice_PlayVoice("B0205000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It suits you really well.\nI like that type of clothing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Chris＊＊｝!)");
        Parameter_AddCh1Param(5, 61, 2);
        Parameter_AddCh1Param(5, 60, 1);
        Parameter_AddCh1Param(5, 62, #2);
        }
    else if (Date_GetDateOption(3) == 2){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0205000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That's nice.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? These clothes?");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 2, (#1), 2);
        Voice_PlayVoice("B0205000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah.\nDoesn't it suit you considerably\nwell?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like ｛Chris＊＊｝\nlikes these clothes!)");
        Parameter_AddCh1Param(5, 61, 1);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, #1);
        }
    else if (Date_GetDateOption(3) == 3){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0205000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Your color coordination is nice.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, really?");
        Character_BlinkStart(5, 2, (#1), 2);
        Voice_PlayVoice("B0205000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The combination of clothing is also\ngood, but I like that color.");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 2, (#1), 2);
        Voice_PlayVoice("B0205000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah. Cute.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(So ｛Chris＊＊｝ likes\ngreen...)");
        Parameter_AddCh1Param(5, 61, 1);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, #1);
        }
    else if (Date_GetDateOption(3) == 10){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0205000_E02400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That clothing is the latest trend,\nisn't it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "You mean my ｛流行服名｝,\nright?\nHehe, how does it look?");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 2, (#1), 2);
        Voice_PlayVoice("B0205000_E02500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It really suits you. Cute.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay, I'm glad I was paying\nattention to trends!)");
        Parameter_AddCh1Param(5, 61, 1);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, #1);
        }
    else if (Date_GetDateOption(3) == 11){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0205000_E02600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'm also liking that color these\ndays.");
        Message_Who(0);
        Message_MsgDisp("主人公", "You too, ｛Chris＊＊｝?\nThis color is the latest trend.");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0205000_E02700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's difficult coordinating with\nthat color, but you pulled it off.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay, I was complimented by\n｛Chris＊＊｝!)");
        Parameter_AddCh1Param(5, 61, 1);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, #1);
        }
    else if (Date_GetDateOption(3) == 12){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0205000_E02800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah that's cute.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you mean my\n｛流行アクセサリ名｝?\nI-I wonder how it looks.");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0205000_E02900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I think it suits you well.\nIt's difficult with trends, but it\nsuits you perfectly.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay!\nIt seems like ｛Chris＊＊｝\nlikes this!)");
        Parameter_AddCh1Param(5, 61, 1);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, #1);
        }
    else if (Date_GetDateOption(3) == 0){
        }
    Message_ResumeSkinship();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

section "h2a_m3_000"{
    if (Parameter_GetBkParam(2, 52) >= 320){
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H2A03000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Congratulations, you're ranking\ntops!");
            Message_Who(0);
            Message_MsgDisp("主人公", "It was thanks to you,\n｛Hikami＊＊｝!\nYour support really motivated me.");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("H2A03000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Haha, I unintentionally got into it,\nsince it was a match that you\npartcipated in.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H2A03000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, no, umm......\nYou were also doing your best at\npractice, right?\nI know that.");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H2A03000_C00500", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Your efforts were fruitful,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nLacrosse Club.\nThis is the best day ever!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 3, "H2A03000_C00900");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝....\nIt was close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...\nSorry, ｛Hikami＊＊｝.\nWe lost, even though you were\ncheering us on.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A03000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I-It's not something to apologize\nover.\nIt was a match that you participated\nin, so isn't it natural that I'd\ncheer you on?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Eh?");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("H2A03000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, no, umm......\nYou were also doing your best at\npractice, right?\nI know that, so the game isn't\nimportant.");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A03000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Also, you were able to play well\nbecause of your efforts....\nIt was good match.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah... I should cheer up!\nI'm glad I stayed in the Lacrosse\nClub.)");
            }
        }
    Parameter_AddCh1Param(3, 86, 1);
    }

section "l03_g3_000"{
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(12, 315) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder when I should give my\nchocolates...)");
        Character_ChFace(0, 3, 4);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("L0312000_L00000", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Huh...? Are you perhaps...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, it's chocolate...");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("L0312000_L00100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Right! It's a little joke, right?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("L0312000_L00200", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "... Are you s-serious? Crap...\nI have to give mine first...!");
        Character_Chara_GS2(12, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah... She left...)");
        Parameter_AddCh1Param(12, 315, 1);
        }
    else if (Parameter_GetCh1Param(12, 315) >= 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder when I should give my\nchocolates...)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("L0312000_L00300", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Who... are you giving that to?");
        Message_Who(0);
        Message_MsgDisp("主人公", "W-Well...");
        Character_BlinkStart(12, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("L0312000_L00400", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "... I'm not gonna lose!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_BlinkStart(12, 0, (#1));
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("L0312000_L00500", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "... I said I'm not gonna lose!");
        Character_Chara_GS2(12, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Nishimoto＊＊｝'s eyes were\nred...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Did she perhaps stay up all night\nmaking chocolate?)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(12, 86, 1);
    }

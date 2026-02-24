section "w04_m1_000"{
    if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 549) == 1)){
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(1, "M1_??F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?\n｛Saeki＊＊｝, you came,\ntoo!");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("W0401000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "For you... Huh? Well...");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("W0401000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "No! E-Eh...\nW-What I meant was, you came, too!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ is confusing\nme...)");
        }
    else if ((Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 549) == 0)){
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(1, "M1_??F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?\n｛Saeki＊＊｝, you came,\ntoo!");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("W0401000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "For you... Huh? Well...");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("W0401000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "No! E-Eh...\nW-What I meant was, you came, too!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ is confusing\nme...)");
        Parameter_InCh1Param(1, 549, 42);
        }
    Character_Chara_GS2(1, "NON");
    }

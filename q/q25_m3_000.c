section "q25_m3_000"{
    System_Wait(30);
    SoundEffect_PlayStream(3, "SS_DSE_223_000");
    if ((Parameter_GetCh1Param(3, 130) <= 2) && (Parameter_GetPl1Param(312) == 3)){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_08F", 0);
        Background_Bg_GS2("BG_SCB31_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hikami＊＊｝!");
        Voice_PlayVoice("Q2603000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Y-You...!?");
        Character_ChFace(0, 0, 6);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q2603000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Why do you always......\nNothing, I mean, umm......\nIf you'll excuse me!");
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*. That surprised me!\nThen, a moment ago that was...)");
        }
    else {
        Character_ChFace(0, 0, 6);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(3, "M3_08F", 0);
        Background_Bg_GS2("BG_SCB31_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hikami＊＊｝!");
        Voice_PlayVoice("Q2603000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... It is you. I apolo...\nNo, I am not trying to apologize.");
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q2603000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nTake this chance to get back to your\nroom at once.");
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*. That surprised me!\nThen a moment ago that was...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
